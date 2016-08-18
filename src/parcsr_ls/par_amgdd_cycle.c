/*BHEADER**********************************************************************
 * Copyright (c) 2008,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * This file is part of HYPRE.  See file COPYRIGHT for details.
 *
 * HYPRE is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * $Revision$
 ***********************************************************************EHEADER*/


#include "_hypre_parcsr_ls.h"
#include "par_amg.h"
#include "par_csr_block_matrix.h"	

HYPRE_Int
AddSolution( void *amg_vdata );

HYPRE_Int
ZeroInitialGuess( void *amg_vdata );

HYPRE_Int
hypre_BoomerAMGDD_Cycle( void *amg_vdata, HYPRE_Int num_comp_cycles )
{
	HYPRE_Int i;
	// hypre_ParAMGData	*amg_data = amg_vdata;
	// HYPRE_Int num_global_relax = 2;

	// Form residual and do residual communication
	hypre_BoomerAMGDDResidualCommunication( amg_vdata );

	// Set zero initial guess for all comp grids on all levels
	ZeroInitialGuess( amg_vdata );
	
	// Do the cycles
	for (i = 0; i < num_comp_cycles; i++)
	{
		hypre_BoomerAMGDD_FAC_Cycle( amg_vdata );
	}

	// Update fine grid solution
	AddSolution( amg_vdata );

	// Perform global relaxation
	// hypre_ParVector *Vtemp = hypre_ParVectorCreate(hypre_ParCSRMatrixComm(hypre_ParAMGDataAArray(amg_data)[0]), hypre_ParCSRMatrixGlobalNumRows(hypre_ParAMGDataAArray(amg_data)[0]), hypre_ParCSRMatrixRowStarts(hypre_ParAMGDataAArray(amg_data)[0]));
	// hypre_ParVectorInitialize(Vtemp);
 //    hypre_ParVectorSetPartitioningOwner(Vtemp,0);
 //    hypre_ParVector *Ztemp = hypre_ParVectorCreate(hypre_ParCSRMatrixComm(hypre_ParAMGDataAArray(amg_data)[0]), hypre_ParCSRMatrixGlobalNumRows(hypre_ParAMGDataAArray(amg_data)[0]), hypre_ParCSRMatrixRowStarts(hypre_ParAMGDataAArray(amg_data)[0]));
	// hypre_ParVectorInitialize(Ztemp);
 //    hypre_ParVectorSetPartitioningOwner(Ztemp,0);
	// for (i = 0; num_global_relax; i++) hypre_BoomerAMGRelax( hypre_ParAMGDataAArray(amg_data)[0], hypre_ParAMGDataFArray(amg_data)[0], hypre_ParAMGDataCFMarkerArray(amg_data)[0], 0, 0,
 //                           1.0, 1.0, NULL, hypre_ParAMGDataUArray(amg_data)[0],
 //                           Vtemp, Ztemp );

	return 0;
}

HYPRE_Int
AddSolution( void *amg_vdata )
{
	hypre_ParAMGData	*amg_data = amg_vdata;
   	HYPRE_Complex 		*u = hypre_VectorData( hypre_ParVectorLocalVector( hypre_ParAMGDataUArray(amg_data)[0] ) );
   	hypre_ParCompGrid 	**compGrid = hypre_ParAMGDataCompGrid(amg_data);
   	HYPRE_Complex 		*u_comp = hypre_ParCompGridU(compGrid[0]);
   	HYPRE_Int 			num_nodes = hypre_ParCompGridNumOwnedNodes(compGrid[0]);
   	HYPRE_Int 			i;

   	for (i = 0; i < num_nodes; i++) u[i] += u_comp[i];

   	return 0;
}

HYPRE_Int
ZeroInitialGuess( void *amg_vdata )
{
	hypre_ParAMGData	*amg_data = amg_vdata;
   	hypre_ParCompGrid 	**compGrid = hypre_ParAMGDataCompGrid(amg_data);
   	HYPRE_Int 			num_nodes;
   	HYPRE_Int 			i, level;
   	HYPRE_Int 			num_levels = hypre_ParAMGDataNumLevels(amg_data);

   	for (level = 0; level < num_levels; level++)
   	{
   		num_nodes = hypre_ParCompGridNumNodes(compGrid[level]);
   		for (i = 0; i < num_nodes; i++) hypre_ParCompGridU(compGrid[level])[i] = 0.0;
   	}

   	return 0;
}