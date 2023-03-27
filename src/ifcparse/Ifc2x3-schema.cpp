/********************************************************************************
 *                                                                              *
 * This file is part of IfcOpenShell.                                           *
 *                                                                              *
 * IfcOpenShell is free software: you can redistribute it and/or modify         *
 * it under the terms of the Lesser GNU General Public License as published by  *
 * the Free Software Foundation, either version 3.0 of the License, or          *
 * (at your option) any later version.                                          *
 *                                                                              *
 * IfcOpenShell is distributed in the hope that it will be useful,              *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of               *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 *
 * Lesser GNU General Public License for more details.                          *
 *                                                                              *
 * You should have received a copy of the Lesser GNU General Public License     *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.         *
 *                                                                              *
 ********************************************************************************/

/********************************************************************************
 *                                                                              *
 * This file has been generated from IFC2X3_TC1.exp. Do not make modifications  *
 * but instead modify the python script that has been used to generate this.    *
 *                                                                              *
 ********************************************************************************/

#include "../ifcparse/IfcSchema.h"
#include "../ifcparse/Ifc2x3.h"

using namespace IfcParse;

entity* IFC2X3_Ifc2DCompositeCurve_type = 0;
entity* IFC2X3_IfcActionRequest_type = 0;
entity* IFC2X3_IfcActor_type = 0;
entity* IFC2X3_IfcActorRole_type = 0;
entity* IFC2X3_IfcActuatorType_type = 0;
entity* IFC2X3_IfcAddress_type = 0;
entity* IFC2X3_IfcAirTerminalBoxType_type = 0;
entity* IFC2X3_IfcAirTerminalType_type = 0;
entity* IFC2X3_IfcAirToAirHeatRecoveryType_type = 0;
entity* IFC2X3_IfcAlarmType_type = 0;
entity* IFC2X3_IfcAngularDimension_type = 0;
entity* IFC2X3_IfcAnnotation_type = 0;
entity* IFC2X3_IfcAnnotationCurveOccurrence_type = 0;
entity* IFC2X3_IfcAnnotationFillArea_type = 0;
entity* IFC2X3_IfcAnnotationFillAreaOccurrence_type = 0;
entity* IFC2X3_IfcAnnotationOccurrence_type = 0;
entity* IFC2X3_IfcAnnotationSurface_type = 0;
entity* IFC2X3_IfcAnnotationSurfaceOccurrence_type = 0;
entity* IFC2X3_IfcAnnotationSymbolOccurrence_type = 0;
entity* IFC2X3_IfcAnnotationTextOccurrence_type = 0;
entity* IFC2X3_IfcApplication_type = 0;
entity* IFC2X3_IfcAppliedValue_type = 0;
entity* IFC2X3_IfcAppliedValueRelationship_type = 0;
entity* IFC2X3_IfcApproval_type = 0;
entity* IFC2X3_IfcApprovalActorRelationship_type = 0;
entity* IFC2X3_IfcApprovalPropertyRelationship_type = 0;
entity* IFC2X3_IfcApprovalRelationship_type = 0;
entity* IFC2X3_IfcArbitraryClosedProfileDef_type = 0;
entity* IFC2X3_IfcArbitraryOpenProfileDef_type = 0;
entity* IFC2X3_IfcArbitraryProfileDefWithVoids_type = 0;
entity* IFC2X3_IfcAsset_type = 0;
entity* IFC2X3_IfcAsymmetricIShapeProfileDef_type = 0;
entity* IFC2X3_IfcAxis1Placement_type = 0;
entity* IFC2X3_IfcAxis2Placement2D_type = 0;
entity* IFC2X3_IfcAxis2Placement3D_type = 0;
entity* IFC2X3_IfcBSplineCurve_type = 0;
entity* IFC2X3_IfcBeam_type = 0;
entity* IFC2X3_IfcBeamType_type = 0;
entity* IFC2X3_IfcBezierCurve_type = 0;
entity* IFC2X3_IfcBlobTexture_type = 0;
entity* IFC2X3_IfcBlock_type = 0;
entity* IFC2X3_IfcBoilerType_type = 0;
entity* IFC2X3_IfcBooleanClippingResult_type = 0;
entity* IFC2X3_IfcBooleanResult_type = 0;
entity* IFC2X3_IfcBoundaryCondition_type = 0;
entity* IFC2X3_IfcBoundaryEdgeCondition_type = 0;
entity* IFC2X3_IfcBoundaryFaceCondition_type = 0;
entity* IFC2X3_IfcBoundaryNodeCondition_type = 0;
entity* IFC2X3_IfcBoundaryNodeConditionWarping_type = 0;
entity* IFC2X3_IfcBoundedCurve_type = 0;
entity* IFC2X3_IfcBoundedSurface_type = 0;
entity* IFC2X3_IfcBoundingBox_type = 0;
entity* IFC2X3_IfcBoxedHalfSpace_type = 0;
entity* IFC2X3_IfcBuilding_type = 0;
entity* IFC2X3_IfcBuildingElement_type = 0;
entity* IFC2X3_IfcBuildingElementComponent_type = 0;
entity* IFC2X3_IfcBuildingElementPart_type = 0;
entity* IFC2X3_IfcBuildingElementProxy_type = 0;
entity* IFC2X3_IfcBuildingElementProxyType_type = 0;
entity* IFC2X3_IfcBuildingElementType_type = 0;
entity* IFC2X3_IfcBuildingStorey_type = 0;
entity* IFC2X3_IfcCShapeProfileDef_type = 0;
entity* IFC2X3_IfcCableCarrierFittingType_type = 0;
entity* IFC2X3_IfcCableCarrierSegmentType_type = 0;
entity* IFC2X3_IfcCableSegmentType_type = 0;
entity* IFC2X3_IfcCalendarDate_type = 0;
entity* IFC2X3_IfcCartesianPoint_type = 0;
entity* IFC2X3_IfcCartesianTransformationOperator_type = 0;
entity* IFC2X3_IfcCartesianTransformationOperator2D_type = 0;
entity* IFC2X3_IfcCartesianTransformationOperator2DnonUniform_type = 0;
entity* IFC2X3_IfcCartesianTransformationOperator3D_type = 0;
entity* IFC2X3_IfcCartesianTransformationOperator3DnonUniform_type = 0;
entity* IFC2X3_IfcCenterLineProfileDef_type = 0;
entity* IFC2X3_IfcChamferEdgeFeature_type = 0;
entity* IFC2X3_IfcChillerType_type = 0;
entity* IFC2X3_IfcCircle_type = 0;
entity* IFC2X3_IfcCircleHollowProfileDef_type = 0;
entity* IFC2X3_IfcCircleProfileDef_type = 0;
entity* IFC2X3_IfcClassification_type = 0;
entity* IFC2X3_IfcClassificationItem_type = 0;
entity* IFC2X3_IfcClassificationItemRelationship_type = 0;
entity* IFC2X3_IfcClassificationNotation_type = 0;
entity* IFC2X3_IfcClassificationNotationFacet_type = 0;
entity* IFC2X3_IfcClassificationReference_type = 0;
entity* IFC2X3_IfcClosedShell_type = 0;
entity* IFC2X3_IfcCoilType_type = 0;
entity* IFC2X3_IfcColourRgb_type = 0;
entity* IFC2X3_IfcColourSpecification_type = 0;
entity* IFC2X3_IfcColumn_type = 0;
entity* IFC2X3_IfcColumnType_type = 0;
entity* IFC2X3_IfcComplexProperty_type = 0;
entity* IFC2X3_IfcCompositeCurve_type = 0;
entity* IFC2X3_IfcCompositeCurveSegment_type = 0;
entity* IFC2X3_IfcCompositeProfileDef_type = 0;
entity* IFC2X3_IfcCompressorType_type = 0;
entity* IFC2X3_IfcCondenserType_type = 0;
entity* IFC2X3_IfcCondition_type = 0;
entity* IFC2X3_IfcConditionCriterion_type = 0;
entity* IFC2X3_IfcConic_type = 0;
entity* IFC2X3_IfcConnectedFaceSet_type = 0;
entity* IFC2X3_IfcConnectionCurveGeometry_type = 0;
entity* IFC2X3_IfcConnectionGeometry_type = 0;
entity* IFC2X3_IfcConnectionPointEccentricity_type = 0;
entity* IFC2X3_IfcConnectionPointGeometry_type = 0;
entity* IFC2X3_IfcConnectionPortGeometry_type = 0;
entity* IFC2X3_IfcConnectionSurfaceGeometry_type = 0;
entity* IFC2X3_IfcConstraint_type = 0;
entity* IFC2X3_IfcConstraintAggregationRelationship_type = 0;
entity* IFC2X3_IfcConstraintClassificationRelationship_type = 0;
entity* IFC2X3_IfcConstraintRelationship_type = 0;
entity* IFC2X3_IfcConstructionEquipmentResource_type = 0;
entity* IFC2X3_IfcConstructionMaterialResource_type = 0;
entity* IFC2X3_IfcConstructionProductResource_type = 0;
entity* IFC2X3_IfcConstructionResource_type = 0;
entity* IFC2X3_IfcContextDependentUnit_type = 0;
entity* IFC2X3_IfcControl_type = 0;
entity* IFC2X3_IfcControllerType_type = 0;
entity* IFC2X3_IfcConversionBasedUnit_type = 0;
entity* IFC2X3_IfcCooledBeamType_type = 0;
entity* IFC2X3_IfcCoolingTowerType_type = 0;
entity* IFC2X3_IfcCoordinatedUniversalTimeOffset_type = 0;
entity* IFC2X3_IfcCostItem_type = 0;
entity* IFC2X3_IfcCostSchedule_type = 0;
entity* IFC2X3_IfcCostValue_type = 0;
entity* IFC2X3_IfcCovering_type = 0;
entity* IFC2X3_IfcCoveringType_type = 0;
entity* IFC2X3_IfcCraneRailAShapeProfileDef_type = 0;
entity* IFC2X3_IfcCraneRailFShapeProfileDef_type = 0;
entity* IFC2X3_IfcCrewResource_type = 0;
entity* IFC2X3_IfcCsgPrimitive3D_type = 0;
entity* IFC2X3_IfcCsgSolid_type = 0;
entity* IFC2X3_IfcCurrencyRelationship_type = 0;
entity* IFC2X3_IfcCurtainWall_type = 0;
entity* IFC2X3_IfcCurtainWallType_type = 0;
entity* IFC2X3_IfcCurve_type = 0;
entity* IFC2X3_IfcCurveBoundedPlane_type = 0;
entity* IFC2X3_IfcCurveStyle_type = 0;
entity* IFC2X3_IfcCurveStyleFont_type = 0;
entity* IFC2X3_IfcCurveStyleFontAndScaling_type = 0;
entity* IFC2X3_IfcCurveStyleFontPattern_type = 0;
entity* IFC2X3_IfcDamperType_type = 0;
entity* IFC2X3_IfcDateAndTime_type = 0;
entity* IFC2X3_IfcDefinedSymbol_type = 0;
entity* IFC2X3_IfcDerivedProfileDef_type = 0;
entity* IFC2X3_IfcDerivedUnit_type = 0;
entity* IFC2X3_IfcDerivedUnitElement_type = 0;
entity* IFC2X3_IfcDiameterDimension_type = 0;
entity* IFC2X3_IfcDimensionCalloutRelationship_type = 0;
entity* IFC2X3_IfcDimensionCurve_type = 0;
entity* IFC2X3_IfcDimensionCurveDirectedCallout_type = 0;
entity* IFC2X3_IfcDimensionCurveTerminator_type = 0;
entity* IFC2X3_IfcDimensionPair_type = 0;
entity* IFC2X3_IfcDimensionalExponents_type = 0;
entity* IFC2X3_IfcDirection_type = 0;
entity* IFC2X3_IfcDiscreteAccessory_type = 0;
entity* IFC2X3_IfcDiscreteAccessoryType_type = 0;
entity* IFC2X3_IfcDistributionChamberElement_type = 0;
entity* IFC2X3_IfcDistributionChamberElementType_type = 0;
entity* IFC2X3_IfcDistributionControlElement_type = 0;
entity* IFC2X3_IfcDistributionControlElementType_type = 0;
entity* IFC2X3_IfcDistributionElement_type = 0;
entity* IFC2X3_IfcDistributionElementType_type = 0;
entity* IFC2X3_IfcDistributionFlowElement_type = 0;
entity* IFC2X3_IfcDistributionFlowElementType_type = 0;
entity* IFC2X3_IfcDistributionPort_type = 0;
entity* IFC2X3_IfcDocumentElectronicFormat_type = 0;
entity* IFC2X3_IfcDocumentInformation_type = 0;
entity* IFC2X3_IfcDocumentInformationRelationship_type = 0;
entity* IFC2X3_IfcDocumentReference_type = 0;
entity* IFC2X3_IfcDoor_type = 0;
entity* IFC2X3_IfcDoorLiningProperties_type = 0;
entity* IFC2X3_IfcDoorPanelProperties_type = 0;
entity* IFC2X3_IfcDoorStyle_type = 0;
entity* IFC2X3_IfcDraughtingCallout_type = 0;
entity* IFC2X3_IfcDraughtingCalloutRelationship_type = 0;
entity* IFC2X3_IfcDraughtingPreDefinedColour_type = 0;
entity* IFC2X3_IfcDraughtingPreDefinedCurveFont_type = 0;
entity* IFC2X3_IfcDraughtingPreDefinedTextFont_type = 0;
entity* IFC2X3_IfcDuctFittingType_type = 0;
entity* IFC2X3_IfcDuctSegmentType_type = 0;
entity* IFC2X3_IfcDuctSilencerType_type = 0;
entity* IFC2X3_IfcEdge_type = 0;
entity* IFC2X3_IfcEdgeCurve_type = 0;
entity* IFC2X3_IfcEdgeFeature_type = 0;
entity* IFC2X3_IfcEdgeLoop_type = 0;
entity* IFC2X3_IfcElectricApplianceType_type = 0;
entity* IFC2X3_IfcElectricDistributionPoint_type = 0;
entity* IFC2X3_IfcElectricFlowStorageDeviceType_type = 0;
entity* IFC2X3_IfcElectricGeneratorType_type = 0;
entity* IFC2X3_IfcElectricHeaterType_type = 0;
entity* IFC2X3_IfcElectricMotorType_type = 0;
entity* IFC2X3_IfcElectricTimeControlType_type = 0;
entity* IFC2X3_IfcElectricalBaseProperties_type = 0;
entity* IFC2X3_IfcElectricalCircuit_type = 0;
entity* IFC2X3_IfcElectricalElement_type = 0;
entity* IFC2X3_IfcElement_type = 0;
entity* IFC2X3_IfcElementAssembly_type = 0;
entity* IFC2X3_IfcElementComponent_type = 0;
entity* IFC2X3_IfcElementComponentType_type = 0;
entity* IFC2X3_IfcElementQuantity_type = 0;
entity* IFC2X3_IfcElementType_type = 0;
entity* IFC2X3_IfcElementarySurface_type = 0;
entity* IFC2X3_IfcEllipse_type = 0;
entity* IFC2X3_IfcEllipseProfileDef_type = 0;
entity* IFC2X3_IfcEnergyConversionDevice_type = 0;
entity* IFC2X3_IfcEnergyConversionDeviceType_type = 0;
entity* IFC2X3_IfcEnergyProperties_type = 0;
entity* IFC2X3_IfcEnvironmentalImpactValue_type = 0;
entity* IFC2X3_IfcEquipmentElement_type = 0;
entity* IFC2X3_IfcEquipmentStandard_type = 0;
entity* IFC2X3_IfcEvaporativeCoolerType_type = 0;
entity* IFC2X3_IfcEvaporatorType_type = 0;
entity* IFC2X3_IfcExtendedMaterialProperties_type = 0;
entity* IFC2X3_IfcExternalReference_type = 0;
entity* IFC2X3_IfcExternallyDefinedHatchStyle_type = 0;
entity* IFC2X3_IfcExternallyDefinedSurfaceStyle_type = 0;
entity* IFC2X3_IfcExternallyDefinedSymbol_type = 0;
entity* IFC2X3_IfcExternallyDefinedTextFont_type = 0;
entity* IFC2X3_IfcExtrudedAreaSolid_type = 0;
entity* IFC2X3_IfcFace_type = 0;
entity* IFC2X3_IfcFaceBasedSurfaceModel_type = 0;
entity* IFC2X3_IfcFaceBound_type = 0;
entity* IFC2X3_IfcFaceOuterBound_type = 0;
entity* IFC2X3_IfcFaceSurface_type = 0;
entity* IFC2X3_IfcFacetedBrep_type = 0;
entity* IFC2X3_IfcFacetedBrepWithVoids_type = 0;
entity* IFC2X3_IfcFailureConnectionCondition_type = 0;
entity* IFC2X3_IfcFanType_type = 0;
entity* IFC2X3_IfcFastener_type = 0;
entity* IFC2X3_IfcFastenerType_type = 0;
entity* IFC2X3_IfcFeatureElement_type = 0;
entity* IFC2X3_IfcFeatureElementAddition_type = 0;
entity* IFC2X3_IfcFeatureElementSubtraction_type = 0;
entity* IFC2X3_IfcFillAreaStyle_type = 0;
entity* IFC2X3_IfcFillAreaStyleHatching_type = 0;
entity* IFC2X3_IfcFillAreaStyleTileSymbolWithStyle_type = 0;
entity* IFC2X3_IfcFillAreaStyleTiles_type = 0;
entity* IFC2X3_IfcFilterType_type = 0;
entity* IFC2X3_IfcFireSuppressionTerminalType_type = 0;
entity* IFC2X3_IfcFlowController_type = 0;
entity* IFC2X3_IfcFlowControllerType_type = 0;
entity* IFC2X3_IfcFlowFitting_type = 0;
entity* IFC2X3_IfcFlowFittingType_type = 0;
entity* IFC2X3_IfcFlowInstrumentType_type = 0;
entity* IFC2X3_IfcFlowMeterType_type = 0;
entity* IFC2X3_IfcFlowMovingDevice_type = 0;
entity* IFC2X3_IfcFlowMovingDeviceType_type = 0;
entity* IFC2X3_IfcFlowSegment_type = 0;
entity* IFC2X3_IfcFlowSegmentType_type = 0;
entity* IFC2X3_IfcFlowStorageDevice_type = 0;
entity* IFC2X3_IfcFlowStorageDeviceType_type = 0;
entity* IFC2X3_IfcFlowTerminal_type = 0;
entity* IFC2X3_IfcFlowTerminalType_type = 0;
entity* IFC2X3_IfcFlowTreatmentDevice_type = 0;
entity* IFC2X3_IfcFlowTreatmentDeviceType_type = 0;
entity* IFC2X3_IfcFluidFlowProperties_type = 0;
entity* IFC2X3_IfcFooting_type = 0;
entity* IFC2X3_IfcFuelProperties_type = 0;
entity* IFC2X3_IfcFurnishingElement_type = 0;
entity* IFC2X3_IfcFurnishingElementType_type = 0;
entity* IFC2X3_IfcFurnitureStandard_type = 0;
entity* IFC2X3_IfcFurnitureType_type = 0;
entity* IFC2X3_IfcGasTerminalType_type = 0;
entity* IFC2X3_IfcGeneralMaterialProperties_type = 0;
entity* IFC2X3_IfcGeneralProfileProperties_type = 0;
entity* IFC2X3_IfcGeometricCurveSet_type = 0;
entity* IFC2X3_IfcGeometricRepresentationContext_type = 0;
entity* IFC2X3_IfcGeometricRepresentationItem_type = 0;
entity* IFC2X3_IfcGeometricRepresentationSubContext_type = 0;
entity* IFC2X3_IfcGeometricSet_type = 0;
entity* IFC2X3_IfcGrid_type = 0;
entity* IFC2X3_IfcGridAxis_type = 0;
entity* IFC2X3_IfcGridPlacement_type = 0;
entity* IFC2X3_IfcGroup_type = 0;
entity* IFC2X3_IfcHalfSpaceSolid_type = 0;
entity* IFC2X3_IfcHeatExchangerType_type = 0;
entity* IFC2X3_IfcHumidifierType_type = 0;
entity* IFC2X3_IfcHygroscopicMaterialProperties_type = 0;
entity* IFC2X3_IfcIShapeProfileDef_type = 0;
entity* IFC2X3_IfcImageTexture_type = 0;
entity* IFC2X3_IfcInventory_type = 0;
entity* IFC2X3_IfcIrregularTimeSeries_type = 0;
entity* IFC2X3_IfcIrregularTimeSeriesValue_type = 0;
entity* IFC2X3_IfcJunctionBoxType_type = 0;
entity* IFC2X3_IfcLShapeProfileDef_type = 0;
entity* IFC2X3_IfcLaborResource_type = 0;
entity* IFC2X3_IfcLampType_type = 0;
entity* IFC2X3_IfcLibraryInformation_type = 0;
entity* IFC2X3_IfcLibraryReference_type = 0;
entity* IFC2X3_IfcLightDistributionData_type = 0;
entity* IFC2X3_IfcLightFixtureType_type = 0;
entity* IFC2X3_IfcLightIntensityDistribution_type = 0;
entity* IFC2X3_IfcLightSource_type = 0;
entity* IFC2X3_IfcLightSourceAmbient_type = 0;
entity* IFC2X3_IfcLightSourceDirectional_type = 0;
entity* IFC2X3_IfcLightSourceGoniometric_type = 0;
entity* IFC2X3_IfcLightSourcePositional_type = 0;
entity* IFC2X3_IfcLightSourceSpot_type = 0;
entity* IFC2X3_IfcLine_type = 0;
entity* IFC2X3_IfcLinearDimension_type = 0;
entity* IFC2X3_IfcLocalPlacement_type = 0;
entity* IFC2X3_IfcLocalTime_type = 0;
entity* IFC2X3_IfcLoop_type = 0;
entity* IFC2X3_IfcManifoldSolidBrep_type = 0;
entity* IFC2X3_IfcMappedItem_type = 0;
entity* IFC2X3_IfcMaterial_type = 0;
entity* IFC2X3_IfcMaterialClassificationRelationship_type = 0;
entity* IFC2X3_IfcMaterialDefinitionRepresentation_type = 0;
entity* IFC2X3_IfcMaterialLayer_type = 0;
entity* IFC2X3_IfcMaterialLayerSet_type = 0;
entity* IFC2X3_IfcMaterialLayerSetUsage_type = 0;
entity* IFC2X3_IfcMaterialList_type = 0;
entity* IFC2X3_IfcMaterialProperties_type = 0;
entity* IFC2X3_IfcMeasureWithUnit_type = 0;
entity* IFC2X3_IfcMechanicalConcreteMaterialProperties_type = 0;
entity* IFC2X3_IfcMechanicalFastener_type = 0;
entity* IFC2X3_IfcMechanicalFastenerType_type = 0;
entity* IFC2X3_IfcMechanicalMaterialProperties_type = 0;
entity* IFC2X3_IfcMechanicalSteelMaterialProperties_type = 0;
entity* IFC2X3_IfcMember_type = 0;
entity* IFC2X3_IfcMemberType_type = 0;
entity* IFC2X3_IfcMetric_type = 0;
entity* IFC2X3_IfcMonetaryUnit_type = 0;
entity* IFC2X3_IfcMotorConnectionType_type = 0;
entity* IFC2X3_IfcMove_type = 0;
entity* IFC2X3_IfcNamedUnit_type = 0;
entity* IFC2X3_IfcObject_type = 0;
entity* IFC2X3_IfcObjectDefinition_type = 0;
entity* IFC2X3_IfcObjectPlacement_type = 0;
entity* IFC2X3_IfcObjective_type = 0;
entity* IFC2X3_IfcOccupant_type = 0;
entity* IFC2X3_IfcOffsetCurve2D_type = 0;
entity* IFC2X3_IfcOffsetCurve3D_type = 0;
entity* IFC2X3_IfcOneDirectionRepeatFactor_type = 0;
entity* IFC2X3_IfcOpenShell_type = 0;
entity* IFC2X3_IfcOpeningElement_type = 0;
entity* IFC2X3_IfcOpticalMaterialProperties_type = 0;
entity* IFC2X3_IfcOrderAction_type = 0;
entity* IFC2X3_IfcOrganization_type = 0;
entity* IFC2X3_IfcOrganizationRelationship_type = 0;
entity* IFC2X3_IfcOrientedEdge_type = 0;
entity* IFC2X3_IfcOutletType_type = 0;
entity* IFC2X3_IfcOwnerHistory_type = 0;
entity* IFC2X3_IfcParameterizedProfileDef_type = 0;
entity* IFC2X3_IfcPath_type = 0;
entity* IFC2X3_IfcPerformanceHistory_type = 0;
entity* IFC2X3_IfcPermeableCoveringProperties_type = 0;
entity* IFC2X3_IfcPermit_type = 0;
entity* IFC2X3_IfcPerson_type = 0;
entity* IFC2X3_IfcPersonAndOrganization_type = 0;
entity* IFC2X3_IfcPhysicalComplexQuantity_type = 0;
entity* IFC2X3_IfcPhysicalQuantity_type = 0;
entity* IFC2X3_IfcPhysicalSimpleQuantity_type = 0;
entity* IFC2X3_IfcPile_type = 0;
entity* IFC2X3_IfcPipeFittingType_type = 0;
entity* IFC2X3_IfcPipeSegmentType_type = 0;
entity* IFC2X3_IfcPixelTexture_type = 0;
entity* IFC2X3_IfcPlacement_type = 0;
entity* IFC2X3_IfcPlanarBox_type = 0;
entity* IFC2X3_IfcPlanarExtent_type = 0;
entity* IFC2X3_IfcPlane_type = 0;
entity* IFC2X3_IfcPlate_type = 0;
entity* IFC2X3_IfcPlateType_type = 0;
entity* IFC2X3_IfcPoint_type = 0;
entity* IFC2X3_IfcPointOnCurve_type = 0;
entity* IFC2X3_IfcPointOnSurface_type = 0;
entity* IFC2X3_IfcPolyLoop_type = 0;
entity* IFC2X3_IfcPolygonalBoundedHalfSpace_type = 0;
entity* IFC2X3_IfcPolyline_type = 0;
entity* IFC2X3_IfcPort_type = 0;
entity* IFC2X3_IfcPostalAddress_type = 0;
entity* IFC2X3_IfcPreDefinedColour_type = 0;
entity* IFC2X3_IfcPreDefinedCurveFont_type = 0;
entity* IFC2X3_IfcPreDefinedDimensionSymbol_type = 0;
entity* IFC2X3_IfcPreDefinedItem_type = 0;
entity* IFC2X3_IfcPreDefinedPointMarkerSymbol_type = 0;
entity* IFC2X3_IfcPreDefinedSymbol_type = 0;
entity* IFC2X3_IfcPreDefinedTerminatorSymbol_type = 0;
entity* IFC2X3_IfcPreDefinedTextFont_type = 0;
entity* IFC2X3_IfcPresentationLayerAssignment_type = 0;
entity* IFC2X3_IfcPresentationLayerWithStyle_type = 0;
entity* IFC2X3_IfcPresentationStyle_type = 0;
entity* IFC2X3_IfcPresentationStyleAssignment_type = 0;
entity* IFC2X3_IfcProcedure_type = 0;
entity* IFC2X3_IfcProcess_type = 0;
entity* IFC2X3_IfcProduct_type = 0;
entity* IFC2X3_IfcProductDefinitionShape_type = 0;
entity* IFC2X3_IfcProductRepresentation_type = 0;
entity* IFC2X3_IfcProductsOfCombustionProperties_type = 0;
entity* IFC2X3_IfcProfileDef_type = 0;
entity* IFC2X3_IfcProfileProperties_type = 0;
entity* IFC2X3_IfcProject_type = 0;
entity* IFC2X3_IfcProjectOrder_type = 0;
entity* IFC2X3_IfcProjectOrderRecord_type = 0;
entity* IFC2X3_IfcProjectionCurve_type = 0;
entity* IFC2X3_IfcProjectionElement_type = 0;
entity* IFC2X3_IfcProperty_type = 0;
entity* IFC2X3_IfcPropertyBoundedValue_type = 0;
entity* IFC2X3_IfcPropertyConstraintRelationship_type = 0;
entity* IFC2X3_IfcPropertyDefinition_type = 0;
entity* IFC2X3_IfcPropertyDependencyRelationship_type = 0;
entity* IFC2X3_IfcPropertyEnumeratedValue_type = 0;
entity* IFC2X3_IfcPropertyEnumeration_type = 0;
entity* IFC2X3_IfcPropertyListValue_type = 0;
entity* IFC2X3_IfcPropertyReferenceValue_type = 0;
entity* IFC2X3_IfcPropertySet_type = 0;
entity* IFC2X3_IfcPropertySetDefinition_type = 0;
entity* IFC2X3_IfcPropertySingleValue_type = 0;
entity* IFC2X3_IfcPropertyTableValue_type = 0;
entity* IFC2X3_IfcProtectiveDeviceType_type = 0;
entity* IFC2X3_IfcProxy_type = 0;
entity* IFC2X3_IfcPumpType_type = 0;
entity* IFC2X3_IfcQuantityArea_type = 0;
entity* IFC2X3_IfcQuantityCount_type = 0;
entity* IFC2X3_IfcQuantityLength_type = 0;
entity* IFC2X3_IfcQuantityTime_type = 0;
entity* IFC2X3_IfcQuantityVolume_type = 0;
entity* IFC2X3_IfcQuantityWeight_type = 0;
entity* IFC2X3_IfcRadiusDimension_type = 0;
entity* IFC2X3_IfcRailing_type = 0;
entity* IFC2X3_IfcRailingType_type = 0;
entity* IFC2X3_IfcRamp_type = 0;
entity* IFC2X3_IfcRampFlight_type = 0;
entity* IFC2X3_IfcRampFlightType_type = 0;
entity* IFC2X3_IfcRationalBezierCurve_type = 0;
entity* IFC2X3_IfcRectangleHollowProfileDef_type = 0;
entity* IFC2X3_IfcRectangleProfileDef_type = 0;
entity* IFC2X3_IfcRectangularPyramid_type = 0;
entity* IFC2X3_IfcRectangularTrimmedSurface_type = 0;
entity* IFC2X3_IfcReferencesValueDocument_type = 0;
entity* IFC2X3_IfcRegularTimeSeries_type = 0;
entity* IFC2X3_IfcReinforcementBarProperties_type = 0;
entity* IFC2X3_IfcReinforcementDefinitionProperties_type = 0;
entity* IFC2X3_IfcReinforcingBar_type = 0;
entity* IFC2X3_IfcReinforcingElement_type = 0;
entity* IFC2X3_IfcReinforcingMesh_type = 0;
entity* IFC2X3_IfcRelAggregates_type = 0;
entity* IFC2X3_IfcRelAssigns_type = 0;
entity* IFC2X3_IfcRelAssignsTasks_type = 0;
entity* IFC2X3_IfcRelAssignsToActor_type = 0;
entity* IFC2X3_IfcRelAssignsToControl_type = 0;
entity* IFC2X3_IfcRelAssignsToGroup_type = 0;
entity* IFC2X3_IfcRelAssignsToProcess_type = 0;
entity* IFC2X3_IfcRelAssignsToProduct_type = 0;
entity* IFC2X3_IfcRelAssignsToProjectOrder_type = 0;
entity* IFC2X3_IfcRelAssignsToResource_type = 0;
entity* IFC2X3_IfcRelAssociates_type = 0;
entity* IFC2X3_IfcRelAssociatesAppliedValue_type = 0;
entity* IFC2X3_IfcRelAssociatesApproval_type = 0;
entity* IFC2X3_IfcRelAssociatesClassification_type = 0;
entity* IFC2X3_IfcRelAssociatesConstraint_type = 0;
entity* IFC2X3_IfcRelAssociatesDocument_type = 0;
entity* IFC2X3_IfcRelAssociatesLibrary_type = 0;
entity* IFC2X3_IfcRelAssociatesMaterial_type = 0;
entity* IFC2X3_IfcRelAssociatesProfileProperties_type = 0;
entity* IFC2X3_IfcRelConnects_type = 0;
entity* IFC2X3_IfcRelConnectsElements_type = 0;
entity* IFC2X3_IfcRelConnectsPathElements_type = 0;
entity* IFC2X3_IfcRelConnectsPortToElement_type = 0;
entity* IFC2X3_IfcRelConnectsPorts_type = 0;
entity* IFC2X3_IfcRelConnectsStructuralActivity_type = 0;
entity* IFC2X3_IfcRelConnectsStructuralElement_type = 0;
entity* IFC2X3_IfcRelConnectsStructuralMember_type = 0;
entity* IFC2X3_IfcRelConnectsWithEccentricity_type = 0;
entity* IFC2X3_IfcRelConnectsWithRealizingElements_type = 0;
entity* IFC2X3_IfcRelContainedInSpatialStructure_type = 0;
entity* IFC2X3_IfcRelCoversBldgElements_type = 0;
entity* IFC2X3_IfcRelCoversSpaces_type = 0;
entity* IFC2X3_IfcRelDecomposes_type = 0;
entity* IFC2X3_IfcRelDefines_type = 0;
entity* IFC2X3_IfcRelDefinesByProperties_type = 0;
entity* IFC2X3_IfcRelDefinesByType_type = 0;
entity* IFC2X3_IfcRelFillsElement_type = 0;
entity* IFC2X3_IfcRelFlowControlElements_type = 0;
entity* IFC2X3_IfcRelInteractionRequirements_type = 0;
entity* IFC2X3_IfcRelNests_type = 0;
entity* IFC2X3_IfcRelOccupiesSpaces_type = 0;
entity* IFC2X3_IfcRelOverridesProperties_type = 0;
entity* IFC2X3_IfcRelProjectsElement_type = 0;
entity* IFC2X3_IfcRelReferencedInSpatialStructure_type = 0;
entity* IFC2X3_IfcRelSchedulesCostItems_type = 0;
entity* IFC2X3_IfcRelSequence_type = 0;
entity* IFC2X3_IfcRelServicesBuildings_type = 0;
entity* IFC2X3_IfcRelSpaceBoundary_type = 0;
entity* IFC2X3_IfcRelVoidsElement_type = 0;
entity* IFC2X3_IfcRelationship_type = 0;
entity* IFC2X3_IfcRelaxation_type = 0;
entity* IFC2X3_IfcRepresentation_type = 0;
entity* IFC2X3_IfcRepresentationContext_type = 0;
entity* IFC2X3_IfcRepresentationItem_type = 0;
entity* IFC2X3_IfcRepresentationMap_type = 0;
entity* IFC2X3_IfcResource_type = 0;
entity* IFC2X3_IfcRevolvedAreaSolid_type = 0;
entity* IFC2X3_IfcRibPlateProfileProperties_type = 0;
entity* IFC2X3_IfcRightCircularCone_type = 0;
entity* IFC2X3_IfcRightCircularCylinder_type = 0;
entity* IFC2X3_IfcRoof_type = 0;
entity* IFC2X3_IfcRoot_type = 0;
entity* IFC2X3_IfcRoundedEdgeFeature_type = 0;
entity* IFC2X3_IfcRoundedRectangleProfileDef_type = 0;
entity* IFC2X3_IfcSIUnit_type = 0;
entity* IFC2X3_IfcSanitaryTerminalType_type = 0;
entity* IFC2X3_IfcScheduleTimeControl_type = 0;
entity* IFC2X3_IfcSectionProperties_type = 0;
entity* IFC2X3_IfcSectionReinforcementProperties_type = 0;
entity* IFC2X3_IfcSectionedSpine_type = 0;
entity* IFC2X3_IfcSensorType_type = 0;
entity* IFC2X3_IfcServiceLife_type = 0;
entity* IFC2X3_IfcServiceLifeFactor_type = 0;
entity* IFC2X3_IfcShapeAspect_type = 0;
entity* IFC2X3_IfcShapeModel_type = 0;
entity* IFC2X3_IfcShapeRepresentation_type = 0;
entity* IFC2X3_IfcShellBasedSurfaceModel_type = 0;
entity* IFC2X3_IfcSimpleProperty_type = 0;
entity* IFC2X3_IfcSite_type = 0;
entity* IFC2X3_IfcSlab_type = 0;
entity* IFC2X3_IfcSlabType_type = 0;
entity* IFC2X3_IfcSlippageConnectionCondition_type = 0;
entity* IFC2X3_IfcSolidModel_type = 0;
entity* IFC2X3_IfcSoundProperties_type = 0;
entity* IFC2X3_IfcSoundValue_type = 0;
entity* IFC2X3_IfcSpace_type = 0;
entity* IFC2X3_IfcSpaceHeaterType_type = 0;
entity* IFC2X3_IfcSpaceProgram_type = 0;
entity* IFC2X3_IfcSpaceThermalLoadProperties_type = 0;
entity* IFC2X3_IfcSpaceType_type = 0;
entity* IFC2X3_IfcSpatialStructureElement_type = 0;
entity* IFC2X3_IfcSpatialStructureElementType_type = 0;
entity* IFC2X3_IfcSphere_type = 0;
entity* IFC2X3_IfcStackTerminalType_type = 0;
entity* IFC2X3_IfcStair_type = 0;
entity* IFC2X3_IfcStairFlight_type = 0;
entity* IFC2X3_IfcStairFlightType_type = 0;
entity* IFC2X3_IfcStructuralAction_type = 0;
entity* IFC2X3_IfcStructuralActivity_type = 0;
entity* IFC2X3_IfcStructuralAnalysisModel_type = 0;
entity* IFC2X3_IfcStructuralConnection_type = 0;
entity* IFC2X3_IfcStructuralConnectionCondition_type = 0;
entity* IFC2X3_IfcStructuralCurveConnection_type = 0;
entity* IFC2X3_IfcStructuralCurveMember_type = 0;
entity* IFC2X3_IfcStructuralCurveMemberVarying_type = 0;
entity* IFC2X3_IfcStructuralItem_type = 0;
entity* IFC2X3_IfcStructuralLinearAction_type = 0;
entity* IFC2X3_IfcStructuralLinearActionVarying_type = 0;
entity* IFC2X3_IfcStructuralLoad_type = 0;
entity* IFC2X3_IfcStructuralLoadGroup_type = 0;
entity* IFC2X3_IfcStructuralLoadLinearForce_type = 0;
entity* IFC2X3_IfcStructuralLoadPlanarForce_type = 0;
entity* IFC2X3_IfcStructuralLoadSingleDisplacement_type = 0;
entity* IFC2X3_IfcStructuralLoadSingleDisplacementDistortion_type = 0;
entity* IFC2X3_IfcStructuralLoadSingleForce_type = 0;
entity* IFC2X3_IfcStructuralLoadSingleForceWarping_type = 0;
entity* IFC2X3_IfcStructuralLoadStatic_type = 0;
entity* IFC2X3_IfcStructuralLoadTemperature_type = 0;
entity* IFC2X3_IfcStructuralMember_type = 0;
entity* IFC2X3_IfcStructuralPlanarAction_type = 0;
entity* IFC2X3_IfcStructuralPlanarActionVarying_type = 0;
entity* IFC2X3_IfcStructuralPointAction_type = 0;
entity* IFC2X3_IfcStructuralPointConnection_type = 0;
entity* IFC2X3_IfcStructuralPointReaction_type = 0;
entity* IFC2X3_IfcStructuralProfileProperties_type = 0;
entity* IFC2X3_IfcStructuralReaction_type = 0;
entity* IFC2X3_IfcStructuralResultGroup_type = 0;
entity* IFC2X3_IfcStructuralSteelProfileProperties_type = 0;
entity* IFC2X3_IfcStructuralSurfaceConnection_type = 0;
entity* IFC2X3_IfcStructuralSurfaceMember_type = 0;
entity* IFC2X3_IfcStructuralSurfaceMemberVarying_type = 0;
entity* IFC2X3_IfcStructuredDimensionCallout_type = 0;
entity* IFC2X3_IfcStyleModel_type = 0;
entity* IFC2X3_IfcStyledItem_type = 0;
entity* IFC2X3_IfcStyledRepresentation_type = 0;
entity* IFC2X3_IfcSubContractResource_type = 0;
entity* IFC2X3_IfcSubedge_type = 0;
entity* IFC2X3_IfcSurface_type = 0;
entity* IFC2X3_IfcSurfaceCurveSweptAreaSolid_type = 0;
entity* IFC2X3_IfcSurfaceOfLinearExtrusion_type = 0;
entity* IFC2X3_IfcSurfaceOfRevolution_type = 0;
entity* IFC2X3_IfcSurfaceStyle_type = 0;
entity* IFC2X3_IfcSurfaceStyleLighting_type = 0;
entity* IFC2X3_IfcSurfaceStyleRefraction_type = 0;
entity* IFC2X3_IfcSurfaceStyleRendering_type = 0;
entity* IFC2X3_IfcSurfaceStyleShading_type = 0;
entity* IFC2X3_IfcSurfaceStyleWithTextures_type = 0;
entity* IFC2X3_IfcSurfaceTexture_type = 0;
entity* IFC2X3_IfcSweptAreaSolid_type = 0;
entity* IFC2X3_IfcSweptDiskSolid_type = 0;
entity* IFC2X3_IfcSweptSurface_type = 0;
entity* IFC2X3_IfcSwitchingDeviceType_type = 0;
entity* IFC2X3_IfcSymbolStyle_type = 0;
entity* IFC2X3_IfcSystem_type = 0;
entity* IFC2X3_IfcSystemFurnitureElementType_type = 0;
entity* IFC2X3_IfcTShapeProfileDef_type = 0;
entity* IFC2X3_IfcTable_type = 0;
entity* IFC2X3_IfcTableRow_type = 0;
entity* IFC2X3_IfcTankType_type = 0;
entity* IFC2X3_IfcTask_type = 0;
entity* IFC2X3_IfcTelecomAddress_type = 0;
entity* IFC2X3_IfcTendon_type = 0;
entity* IFC2X3_IfcTendonAnchor_type = 0;
entity* IFC2X3_IfcTerminatorSymbol_type = 0;
entity* IFC2X3_IfcTextLiteral_type = 0;
entity* IFC2X3_IfcTextLiteralWithExtent_type = 0;
entity* IFC2X3_IfcTextStyle_type = 0;
entity* IFC2X3_IfcTextStyleFontModel_type = 0;
entity* IFC2X3_IfcTextStyleForDefinedFont_type = 0;
entity* IFC2X3_IfcTextStyleTextModel_type = 0;
entity* IFC2X3_IfcTextStyleWithBoxCharacteristics_type = 0;
entity* IFC2X3_IfcTextureCoordinate_type = 0;
entity* IFC2X3_IfcTextureCoordinateGenerator_type = 0;
entity* IFC2X3_IfcTextureMap_type = 0;
entity* IFC2X3_IfcTextureVertex_type = 0;
entity* IFC2X3_IfcThermalMaterialProperties_type = 0;
entity* IFC2X3_IfcTimeSeries_type = 0;
entity* IFC2X3_IfcTimeSeriesReferenceRelationship_type = 0;
entity* IFC2X3_IfcTimeSeriesSchedule_type = 0;
entity* IFC2X3_IfcTimeSeriesValue_type = 0;
entity* IFC2X3_IfcTopologicalRepresentationItem_type = 0;
entity* IFC2X3_IfcTopologyRepresentation_type = 0;
entity* IFC2X3_IfcTransformerType_type = 0;
entity* IFC2X3_IfcTransportElement_type = 0;
entity* IFC2X3_IfcTransportElementType_type = 0;
entity* IFC2X3_IfcTrapeziumProfileDef_type = 0;
entity* IFC2X3_IfcTrimmedCurve_type = 0;
entity* IFC2X3_IfcTubeBundleType_type = 0;
entity* IFC2X3_IfcTwoDirectionRepeatFactor_type = 0;
entity* IFC2X3_IfcTypeObject_type = 0;
entity* IFC2X3_IfcTypeProduct_type = 0;
entity* IFC2X3_IfcUShapeProfileDef_type = 0;
entity* IFC2X3_IfcUnitAssignment_type = 0;
entity* IFC2X3_IfcUnitaryEquipmentType_type = 0;
entity* IFC2X3_IfcValveType_type = 0;
entity* IFC2X3_IfcVector_type = 0;
entity* IFC2X3_IfcVertex_type = 0;
entity* IFC2X3_IfcVertexBasedTextureMap_type = 0;
entity* IFC2X3_IfcVertexLoop_type = 0;
entity* IFC2X3_IfcVertexPoint_type = 0;
entity* IFC2X3_IfcVibrationIsolatorType_type = 0;
entity* IFC2X3_IfcVirtualElement_type = 0;
entity* IFC2X3_IfcVirtualGridIntersection_type = 0;
entity* IFC2X3_IfcWall_type = 0;
entity* IFC2X3_IfcWallStandardCase_type = 0;
entity* IFC2X3_IfcWallType_type = 0;
entity* IFC2X3_IfcWasteTerminalType_type = 0;
entity* IFC2X3_IfcWaterProperties_type = 0;
entity* IFC2X3_IfcWindow_type = 0;
entity* IFC2X3_IfcWindowLiningProperties_type = 0;
entity* IFC2X3_IfcWindowPanelProperties_type = 0;
entity* IFC2X3_IfcWindowStyle_type = 0;
entity* IFC2X3_IfcWorkControl_type = 0;
entity* IFC2X3_IfcWorkPlan_type = 0;
entity* IFC2X3_IfcWorkSchedule_type = 0;
entity* IFC2X3_IfcZShapeProfileDef_type = 0;
entity* IFC2X3_IfcZone_type = 0;
type_declaration* IFC2X3_IfcAbsorbedDoseMeasure_type = 0;
type_declaration* IFC2X3_IfcAccelerationMeasure_type = 0;
type_declaration* IFC2X3_IfcAmountOfSubstanceMeasure_type = 0;
type_declaration* IFC2X3_IfcAngularVelocityMeasure_type = 0;
type_declaration* IFC2X3_IfcAreaMeasure_type = 0;
type_declaration* IFC2X3_IfcBoolean_type = 0;
type_declaration* IFC2X3_IfcBoxAlignment_type = 0;
type_declaration* IFC2X3_IfcComplexNumber_type = 0;
type_declaration* IFC2X3_IfcCompoundPlaneAngleMeasure_type = 0;
type_declaration* IFC2X3_IfcContextDependentMeasure_type = 0;
type_declaration* IFC2X3_IfcCountMeasure_type = 0;
type_declaration* IFC2X3_IfcCurvatureMeasure_type = 0;
type_declaration* IFC2X3_IfcDayInMonthNumber_type = 0;
type_declaration* IFC2X3_IfcDaylightSavingHour_type = 0;
type_declaration* IFC2X3_IfcDescriptiveMeasure_type = 0;
type_declaration* IFC2X3_IfcDimensionCount_type = 0;
type_declaration* IFC2X3_IfcDoseEquivalentMeasure_type = 0;
type_declaration* IFC2X3_IfcDynamicViscosityMeasure_type = 0;
type_declaration* IFC2X3_IfcElectricCapacitanceMeasure_type = 0;
type_declaration* IFC2X3_IfcElectricChargeMeasure_type = 0;
type_declaration* IFC2X3_IfcElectricConductanceMeasure_type = 0;
type_declaration* IFC2X3_IfcElectricCurrentMeasure_type = 0;
type_declaration* IFC2X3_IfcElectricResistanceMeasure_type = 0;
type_declaration* IFC2X3_IfcElectricVoltageMeasure_type = 0;
type_declaration* IFC2X3_IfcEnergyMeasure_type = 0;
type_declaration* IFC2X3_IfcFontStyle_type = 0;
type_declaration* IFC2X3_IfcFontVariant_type = 0;
type_declaration* IFC2X3_IfcFontWeight_type = 0;
type_declaration* IFC2X3_IfcForceMeasure_type = 0;
type_declaration* IFC2X3_IfcFrequencyMeasure_type = 0;
type_declaration* IFC2X3_IfcGloballyUniqueId_type = 0;
type_declaration* IFC2X3_IfcHeatFluxDensityMeasure_type = 0;
type_declaration* IFC2X3_IfcHeatingValueMeasure_type = 0;
type_declaration* IFC2X3_IfcHourInDay_type = 0;
type_declaration* IFC2X3_IfcIdentifier_type = 0;
type_declaration* IFC2X3_IfcIlluminanceMeasure_type = 0;
type_declaration* IFC2X3_IfcInductanceMeasure_type = 0;
type_declaration* IFC2X3_IfcInteger_type = 0;
type_declaration* IFC2X3_IfcIntegerCountRateMeasure_type = 0;
type_declaration* IFC2X3_IfcIonConcentrationMeasure_type = 0;
type_declaration* IFC2X3_IfcIsothermalMoistureCapacityMeasure_type = 0;
type_declaration* IFC2X3_IfcKinematicViscosityMeasure_type = 0;
type_declaration* IFC2X3_IfcLabel_type = 0;
type_declaration* IFC2X3_IfcLengthMeasure_type = 0;
type_declaration* IFC2X3_IfcLinearForceMeasure_type = 0;
type_declaration* IFC2X3_IfcLinearMomentMeasure_type = 0;
type_declaration* IFC2X3_IfcLinearStiffnessMeasure_type = 0;
type_declaration* IFC2X3_IfcLinearVelocityMeasure_type = 0;
type_declaration* IFC2X3_IfcLogical_type = 0;
type_declaration* IFC2X3_IfcLuminousFluxMeasure_type = 0;
type_declaration* IFC2X3_IfcLuminousIntensityDistributionMeasure_type = 0;
type_declaration* IFC2X3_IfcLuminousIntensityMeasure_type = 0;
type_declaration* IFC2X3_IfcMagneticFluxDensityMeasure_type = 0;
type_declaration* IFC2X3_IfcMagneticFluxMeasure_type = 0;
type_declaration* IFC2X3_IfcMassDensityMeasure_type = 0;
type_declaration* IFC2X3_IfcMassFlowRateMeasure_type = 0;
type_declaration* IFC2X3_IfcMassMeasure_type = 0;
type_declaration* IFC2X3_IfcMassPerLengthMeasure_type = 0;
type_declaration* IFC2X3_IfcMinuteInHour_type = 0;
type_declaration* IFC2X3_IfcModulusOfElasticityMeasure_type = 0;
type_declaration* IFC2X3_IfcModulusOfLinearSubgradeReactionMeasure_type = 0;
type_declaration* IFC2X3_IfcModulusOfRotationalSubgradeReactionMeasure_type = 0;
type_declaration* IFC2X3_IfcModulusOfSubgradeReactionMeasure_type = 0;
type_declaration* IFC2X3_IfcMoistureDiffusivityMeasure_type = 0;
type_declaration* IFC2X3_IfcMolecularWeightMeasure_type = 0;
type_declaration* IFC2X3_IfcMomentOfInertiaMeasure_type = 0;
type_declaration* IFC2X3_IfcMonetaryMeasure_type = 0;
type_declaration* IFC2X3_IfcMonthInYearNumber_type = 0;
type_declaration* IFC2X3_IfcNormalisedRatioMeasure_type = 0;
type_declaration* IFC2X3_IfcNumericMeasure_type = 0;
type_declaration* IFC2X3_IfcPHMeasure_type = 0;
type_declaration* IFC2X3_IfcParameterValue_type = 0;
type_declaration* IFC2X3_IfcPlanarForceMeasure_type = 0;
type_declaration* IFC2X3_IfcPlaneAngleMeasure_type = 0;
type_declaration* IFC2X3_IfcPositiveLengthMeasure_type = 0;
type_declaration* IFC2X3_IfcPositivePlaneAngleMeasure_type = 0;
type_declaration* IFC2X3_IfcPositiveRatioMeasure_type = 0;
type_declaration* IFC2X3_IfcPowerMeasure_type = 0;
type_declaration* IFC2X3_IfcPresentableText_type = 0;
type_declaration* IFC2X3_IfcPressureMeasure_type = 0;
type_declaration* IFC2X3_IfcRadioActivityMeasure_type = 0;
type_declaration* IFC2X3_IfcRatioMeasure_type = 0;
type_declaration* IFC2X3_IfcReal_type = 0;
type_declaration* IFC2X3_IfcRotationalFrequencyMeasure_type = 0;
type_declaration* IFC2X3_IfcRotationalMassMeasure_type = 0;
type_declaration* IFC2X3_IfcRotationalStiffnessMeasure_type = 0;
type_declaration* IFC2X3_IfcSecondInMinute_type = 0;
type_declaration* IFC2X3_IfcSectionModulusMeasure_type = 0;
type_declaration* IFC2X3_IfcSectionalAreaIntegralMeasure_type = 0;
type_declaration* IFC2X3_IfcShearModulusMeasure_type = 0;
type_declaration* IFC2X3_IfcSolidAngleMeasure_type = 0;
type_declaration* IFC2X3_IfcSoundPowerMeasure_type = 0;
type_declaration* IFC2X3_IfcSoundPressureMeasure_type = 0;
type_declaration* IFC2X3_IfcSpecificHeatCapacityMeasure_type = 0;
type_declaration* IFC2X3_IfcSpecularExponent_type = 0;
type_declaration* IFC2X3_IfcSpecularRoughness_type = 0;
type_declaration* IFC2X3_IfcTemperatureGradientMeasure_type = 0;
type_declaration* IFC2X3_IfcText_type = 0;
type_declaration* IFC2X3_IfcTextAlignment_type = 0;
type_declaration* IFC2X3_IfcTextDecoration_type = 0;
type_declaration* IFC2X3_IfcTextFontName_type = 0;
type_declaration* IFC2X3_IfcTextTransformation_type = 0;
type_declaration* IFC2X3_IfcThermalAdmittanceMeasure_type = 0;
type_declaration* IFC2X3_IfcThermalConductivityMeasure_type = 0;
type_declaration* IFC2X3_IfcThermalExpansionCoefficientMeasure_type = 0;
type_declaration* IFC2X3_IfcThermalResistanceMeasure_type = 0;
type_declaration* IFC2X3_IfcThermalTransmittanceMeasure_type = 0;
type_declaration* IFC2X3_IfcThermodynamicTemperatureMeasure_type = 0;
type_declaration* IFC2X3_IfcTimeMeasure_type = 0;
type_declaration* IFC2X3_IfcTimeStamp_type = 0;
type_declaration* IFC2X3_IfcTorqueMeasure_type = 0;
type_declaration* IFC2X3_IfcVaporPermeabilityMeasure_type = 0;
type_declaration* IFC2X3_IfcVolumeMeasure_type = 0;
type_declaration* IFC2X3_IfcVolumetricFlowRateMeasure_type = 0;
type_declaration* IFC2X3_IfcWarpingConstantMeasure_type = 0;
type_declaration* IFC2X3_IfcWarpingMomentMeasure_type = 0;
type_declaration* IFC2X3_IfcYearNumber_type = 0;
select_type* IFC2X3_IfcActorSelect_type = 0;
select_type* IFC2X3_IfcAppliedValueSelect_type = 0;
select_type* IFC2X3_IfcAxis2Placement_type = 0;
select_type* IFC2X3_IfcBooleanOperand_type = 0;
select_type* IFC2X3_IfcCharacterStyleSelect_type = 0;
select_type* IFC2X3_IfcClassificationNotationSelect_type = 0;
select_type* IFC2X3_IfcColour_type = 0;
select_type* IFC2X3_IfcColourOrFactor_type = 0;
select_type* IFC2X3_IfcConditionCriterionSelect_type = 0;
select_type* IFC2X3_IfcCsgSelect_type = 0;
select_type* IFC2X3_IfcCurveFontOrScaledCurveFontSelect_type = 0;
select_type* IFC2X3_IfcCurveOrEdgeCurve_type = 0;
select_type* IFC2X3_IfcCurveStyleFontSelect_type = 0;
select_type* IFC2X3_IfcDateTimeSelect_type = 0;
select_type* IFC2X3_IfcDefinedSymbolSelect_type = 0;
select_type* IFC2X3_IfcDerivedMeasureValue_type = 0;
select_type* IFC2X3_IfcDocumentSelect_type = 0;
select_type* IFC2X3_IfcDraughtingCalloutElement_type = 0;
select_type* IFC2X3_IfcFillAreaStyleTileShapeSelect_type = 0;
select_type* IFC2X3_IfcFillStyleSelect_type = 0;
select_type* IFC2X3_IfcGeometricSetSelect_type = 0;
select_type* IFC2X3_IfcHatchLineDistanceSelect_type = 0;
select_type* IFC2X3_IfcLayeredItem_type = 0;
select_type* IFC2X3_IfcLibrarySelect_type = 0;
select_type* IFC2X3_IfcLightDistributionDataSourceSelect_type = 0;
select_type* IFC2X3_IfcMaterialSelect_type = 0;
select_type* IFC2X3_IfcMeasureValue_type = 0;
select_type* IFC2X3_IfcMetricValueSelect_type = 0;
select_type* IFC2X3_IfcObjectReferenceSelect_type = 0;
select_type* IFC2X3_IfcOrientationSelect_type = 0;
select_type* IFC2X3_IfcPointOrVertexPoint_type = 0;
select_type* IFC2X3_IfcPresentationStyleSelect_type = 0;
select_type* IFC2X3_IfcShell_type = 0;
select_type* IFC2X3_IfcSimpleValue_type = 0;
select_type* IFC2X3_IfcSizeSelect_type = 0;
select_type* IFC2X3_IfcSpecularHighlightSelect_type = 0;
select_type* IFC2X3_IfcStructuralActivityAssignmentSelect_type = 0;
select_type* IFC2X3_IfcSurfaceOrFaceSurface_type = 0;
select_type* IFC2X3_IfcSurfaceStyleElementSelect_type = 0;
select_type* IFC2X3_IfcSymbolStyleSelect_type = 0;
select_type* IFC2X3_IfcTextFontSelect_type = 0;
select_type* IFC2X3_IfcTextStyleSelect_type = 0;
select_type* IFC2X3_IfcTrimmingSelect_type = 0;
select_type* IFC2X3_IfcUnit_type = 0;
select_type* IFC2X3_IfcValue_type = 0;
select_type* IFC2X3_IfcVectorOrDirection_type = 0;
enumeration_type* IFC2X3_IfcActionSourceTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcActionTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcActuatorTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcAddressTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcAheadOrBehind_type = 0;
enumeration_type* IFC2X3_IfcAirTerminalBoxTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcAirTerminalTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcAirToAirHeatRecoveryTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcAlarmTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcAnalysisModelTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcAnalysisTheoryTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcArithmeticOperatorEnum_type = 0;
enumeration_type* IFC2X3_IfcAssemblyPlaceEnum_type = 0;
enumeration_type* IFC2X3_IfcBSplineCurveForm_type = 0;
enumeration_type* IFC2X3_IfcBeamTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcBenchmarkEnum_type = 0;
enumeration_type* IFC2X3_IfcBoilerTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcBooleanOperator_type = 0;
enumeration_type* IFC2X3_IfcBuildingElementProxyTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCableCarrierFittingTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCableCarrierSegmentTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCableSegmentTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcChangeActionEnum_type = 0;
enumeration_type* IFC2X3_IfcChillerTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCoilTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcColumnTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCompressorTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCondenserTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcConnectionTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcConstraintEnum_type = 0;
enumeration_type* IFC2X3_IfcControllerTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCooledBeamTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCoolingTowerTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCostScheduleTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCoveringTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcCurrencyEnum_type = 0;
enumeration_type* IFC2X3_IfcCurtainWallTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcDamperTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcDataOriginEnum_type = 0;
enumeration_type* IFC2X3_IfcDerivedUnitEnum_type = 0;
enumeration_type* IFC2X3_IfcDimensionExtentUsage_type = 0;
enumeration_type* IFC2X3_IfcDirectionSenseEnum_type = 0;
enumeration_type* IFC2X3_IfcDistributionChamberElementTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcDocumentConfidentialityEnum_type = 0;
enumeration_type* IFC2X3_IfcDocumentStatusEnum_type = 0;
enumeration_type* IFC2X3_IfcDoorPanelOperationEnum_type = 0;
enumeration_type* IFC2X3_IfcDoorPanelPositionEnum_type = 0;
enumeration_type* IFC2X3_IfcDoorStyleConstructionEnum_type = 0;
enumeration_type* IFC2X3_IfcDoorStyleOperationEnum_type = 0;
enumeration_type* IFC2X3_IfcDuctFittingTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcDuctSegmentTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcDuctSilencerTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcElectricApplianceTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcElectricCurrentEnum_type = 0;
enumeration_type* IFC2X3_IfcElectricDistributionPointFunctionEnum_type = 0;
enumeration_type* IFC2X3_IfcElectricFlowStorageDeviceTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcElectricGeneratorTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcElectricHeaterTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcElectricMotorTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcElectricTimeControlTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcElementAssemblyTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcElementCompositionEnum_type = 0;
enumeration_type* IFC2X3_IfcEnergySequenceEnum_type = 0;
enumeration_type* IFC2X3_IfcEnvironmentalImpactCategoryEnum_type = 0;
enumeration_type* IFC2X3_IfcEvaporativeCoolerTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcEvaporatorTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcFanTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcFilterTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcFireSuppressionTerminalTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcFlowDirectionEnum_type = 0;
enumeration_type* IFC2X3_IfcFlowInstrumentTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcFlowMeterTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcFootingTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcGasTerminalTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcGeometricProjectionEnum_type = 0;
enumeration_type* IFC2X3_IfcGlobalOrLocalEnum_type = 0;
enumeration_type* IFC2X3_IfcHeatExchangerTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcHumidifierTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcInternalOrExternalEnum_type = 0;
enumeration_type* IFC2X3_IfcInventoryTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcJunctionBoxTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcLampTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcLayerSetDirectionEnum_type = 0;
enumeration_type* IFC2X3_IfcLightDistributionCurveEnum_type = 0;
enumeration_type* IFC2X3_IfcLightEmissionSourceEnum_type = 0;
enumeration_type* IFC2X3_IfcLightFixtureTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcLoadGroupTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcLogicalOperatorEnum_type = 0;
enumeration_type* IFC2X3_IfcMemberTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcMotorConnectionTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcNullStyle_type = 0;
enumeration_type* IFC2X3_IfcObjectTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcObjectiveEnum_type = 0;
enumeration_type* IFC2X3_IfcOccupantTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcOutletTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcPermeableCoveringOperationEnum_type = 0;
enumeration_type* IFC2X3_IfcPhysicalOrVirtualEnum_type = 0;
enumeration_type* IFC2X3_IfcPileConstructionEnum_type = 0;
enumeration_type* IFC2X3_IfcPileTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcPipeFittingTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcPipeSegmentTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcPlateTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcProcedureTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcProfileTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcProjectOrderRecordTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcProjectOrderTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcProjectedOrTrueLengthEnum_type = 0;
enumeration_type* IFC2X3_IfcPropertySourceEnum_type = 0;
enumeration_type* IFC2X3_IfcProtectiveDeviceTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcPumpTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcRailingTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcRampFlightTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcRampTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcReflectanceMethodEnum_type = 0;
enumeration_type* IFC2X3_IfcReinforcingBarRoleEnum_type = 0;
enumeration_type* IFC2X3_IfcReinforcingBarSurfaceEnum_type = 0;
enumeration_type* IFC2X3_IfcResourceConsumptionEnum_type = 0;
enumeration_type* IFC2X3_IfcRibPlateDirectionEnum_type = 0;
enumeration_type* IFC2X3_IfcRoleEnum_type = 0;
enumeration_type* IFC2X3_IfcRoofTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcSIPrefix_type = 0;
enumeration_type* IFC2X3_IfcSIUnitName_type = 0;
enumeration_type* IFC2X3_IfcSanitaryTerminalTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcSectionTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcSensorTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcSequenceEnum_type = 0;
enumeration_type* IFC2X3_IfcServiceLifeFactorTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcServiceLifeTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcSlabTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcSoundScaleEnum_type = 0;
enumeration_type* IFC2X3_IfcSpaceHeaterTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcSpaceTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcStackTerminalTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcStairFlightTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcStairTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcStateEnum_type = 0;
enumeration_type* IFC2X3_IfcStructuralCurveTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcStructuralSurfaceTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcSurfaceSide_type = 0;
enumeration_type* IFC2X3_IfcSurfaceTextureEnum_type = 0;
enumeration_type* IFC2X3_IfcSwitchingDeviceTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcTankTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcTendonTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcTextPath_type = 0;
enumeration_type* IFC2X3_IfcThermalLoadSourceEnum_type = 0;
enumeration_type* IFC2X3_IfcThermalLoadTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcTimeSeriesDataTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcTimeSeriesScheduleTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcTransformerTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcTransitionCode_type = 0;
enumeration_type* IFC2X3_IfcTransportElementTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcTrimmingPreference_type = 0;
enumeration_type* IFC2X3_IfcTubeBundleTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcUnitEnum_type = 0;
enumeration_type* IFC2X3_IfcUnitaryEquipmentTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcValveTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcVibrationIsolatorTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcWallTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcWasteTerminalTypeEnum_type = 0;
enumeration_type* IFC2X3_IfcWindowPanelOperationEnum_type = 0;
enumeration_type* IFC2X3_IfcWindowPanelPositionEnum_type = 0;
enumeration_type* IFC2X3_IfcWindowStyleConstructionEnum_type = 0;
enumeration_type* IFC2X3_IfcWindowStyleOperationEnum_type = 0;
enumeration_type* IFC2X3_IfcWorkControlTypeEnum_type = 0;

class IFC2X3_instance_factory : public IfcParse::instance_factory {
    virtual IfcUtil::IfcBaseClass* operator()(IfcEntityInstanceData* data) const {
        switch(data->type()->index_in_schema()) {
            case 0: return new ::Ifc2x3::Ifc2DCompositeCurve(data);
            case 1: return new ::Ifc2x3::IfcAbsorbedDoseMeasure(data);
            case 2: return new ::Ifc2x3::IfcAccelerationMeasure(data);
            case 3: return new ::Ifc2x3::IfcActionRequest(data);
            case 4: return new ::Ifc2x3::IfcActionSourceTypeEnum(data);
            case 5: return new ::Ifc2x3::IfcActionTypeEnum(data);
            case 6: return new ::Ifc2x3::IfcActor(data);
            case 7: return new ::Ifc2x3::IfcActorRole(data);
            case 9: return new ::Ifc2x3::IfcActuatorType(data);
            case 10: return new ::Ifc2x3::IfcActuatorTypeEnum(data);
            case 11: return new ::Ifc2x3::IfcAddress(data);
            case 12: return new ::Ifc2x3::IfcAddressTypeEnum(data);
            case 13: return new ::Ifc2x3::IfcAheadOrBehind(data);
            case 14: return new ::Ifc2x3::IfcAirTerminalBoxType(data);
            case 15: return new ::Ifc2x3::IfcAirTerminalBoxTypeEnum(data);
            case 16: return new ::Ifc2x3::IfcAirTerminalType(data);
            case 17: return new ::Ifc2x3::IfcAirTerminalTypeEnum(data);
            case 18: return new ::Ifc2x3::IfcAirToAirHeatRecoveryType(data);
            case 19: return new ::Ifc2x3::IfcAirToAirHeatRecoveryTypeEnum(data);
            case 20: return new ::Ifc2x3::IfcAlarmType(data);
            case 21: return new ::Ifc2x3::IfcAlarmTypeEnum(data);
            case 22: return new ::Ifc2x3::IfcAmountOfSubstanceMeasure(data);
            case 23: return new ::Ifc2x3::IfcAnalysisModelTypeEnum(data);
            case 24: return new ::Ifc2x3::IfcAnalysisTheoryTypeEnum(data);
            case 25: return new ::Ifc2x3::IfcAngularDimension(data);
            case 26: return new ::Ifc2x3::IfcAngularVelocityMeasure(data);
            case 27: return new ::Ifc2x3::IfcAnnotation(data);
            case 28: return new ::Ifc2x3::IfcAnnotationCurveOccurrence(data);
            case 29: return new ::Ifc2x3::IfcAnnotationFillArea(data);
            case 30: return new ::Ifc2x3::IfcAnnotationFillAreaOccurrence(data);
            case 31: return new ::Ifc2x3::IfcAnnotationOccurrence(data);
            case 32: return new ::Ifc2x3::IfcAnnotationSurface(data);
            case 33: return new ::Ifc2x3::IfcAnnotationSurfaceOccurrence(data);
            case 34: return new ::Ifc2x3::IfcAnnotationSymbolOccurrence(data);
            case 35: return new ::Ifc2x3::IfcAnnotationTextOccurrence(data);
            case 36: return new ::Ifc2x3::IfcApplication(data);
            case 37: return new ::Ifc2x3::IfcAppliedValue(data);
            case 38: return new ::Ifc2x3::IfcAppliedValueRelationship(data);
            case 40: return new ::Ifc2x3::IfcApproval(data);
            case 41: return new ::Ifc2x3::IfcApprovalActorRelationship(data);
            case 42: return new ::Ifc2x3::IfcApprovalPropertyRelationship(data);
            case 43: return new ::Ifc2x3::IfcApprovalRelationship(data);
            case 44: return new ::Ifc2x3::IfcArbitraryClosedProfileDef(data);
            case 45: return new ::Ifc2x3::IfcArbitraryOpenProfileDef(data);
            case 46: return new ::Ifc2x3::IfcArbitraryProfileDefWithVoids(data);
            case 47: return new ::Ifc2x3::IfcAreaMeasure(data);
            case 48: return new ::Ifc2x3::IfcArithmeticOperatorEnum(data);
            case 49: return new ::Ifc2x3::IfcAssemblyPlaceEnum(data);
            case 50: return new ::Ifc2x3::IfcAsset(data);
            case 51: return new ::Ifc2x3::IfcAsymmetricIShapeProfileDef(data);
            case 52: return new ::Ifc2x3::IfcAxis1Placement(data);
            case 54: return new ::Ifc2x3::IfcAxis2Placement2D(data);
            case 55: return new ::Ifc2x3::IfcAxis2Placement3D(data);
            case 56: return new ::Ifc2x3::IfcBeam(data);
            case 57: return new ::Ifc2x3::IfcBeamType(data);
            case 58: return new ::Ifc2x3::IfcBeamTypeEnum(data);
            case 59: return new ::Ifc2x3::IfcBenchmarkEnum(data);
            case 60: return new ::Ifc2x3::IfcBezierCurve(data);
            case 61: return new ::Ifc2x3::IfcBlobTexture(data);
            case 62: return new ::Ifc2x3::IfcBlock(data);
            case 63: return new ::Ifc2x3::IfcBoilerType(data);
            case 64: return new ::Ifc2x3::IfcBoilerTypeEnum(data);
            case 65: return new ::Ifc2x3::IfcBoolean(data);
            case 66: return new ::Ifc2x3::IfcBooleanClippingResult(data);
            case 68: return new ::Ifc2x3::IfcBooleanOperator(data);
            case 69: return new ::Ifc2x3::IfcBooleanResult(data);
            case 70: return new ::Ifc2x3::IfcBoundaryCondition(data);
            case 71: return new ::Ifc2x3::IfcBoundaryEdgeCondition(data);
            case 72: return new ::Ifc2x3::IfcBoundaryFaceCondition(data);
            case 73: return new ::Ifc2x3::IfcBoundaryNodeCondition(data);
            case 74: return new ::Ifc2x3::IfcBoundaryNodeConditionWarping(data);
            case 75: return new ::Ifc2x3::IfcBoundedCurve(data);
            case 76: return new ::Ifc2x3::IfcBoundedSurface(data);
            case 77: return new ::Ifc2x3::IfcBoundingBox(data);
            case 78: return new ::Ifc2x3::IfcBoxAlignment(data);
            case 79: return new ::Ifc2x3::IfcBoxedHalfSpace(data);
            case 80: return new ::Ifc2x3::IfcBSplineCurve(data);
            case 81: return new ::Ifc2x3::IfcBSplineCurveForm(data);
            case 82: return new ::Ifc2x3::IfcBuilding(data);
            case 83: return new ::Ifc2x3::IfcBuildingElement(data);
            case 84: return new ::Ifc2x3::IfcBuildingElementComponent(data);
            case 85: return new ::Ifc2x3::IfcBuildingElementPart(data);
            case 86: return new ::Ifc2x3::IfcBuildingElementProxy(data);
            case 87: return new ::Ifc2x3::IfcBuildingElementProxyType(data);
            case 88: return new ::Ifc2x3::IfcBuildingElementProxyTypeEnum(data);
            case 89: return new ::Ifc2x3::IfcBuildingElementType(data);
            case 90: return new ::Ifc2x3::IfcBuildingStorey(data);
            case 91: return new ::Ifc2x3::IfcCableCarrierFittingType(data);
            case 92: return new ::Ifc2x3::IfcCableCarrierFittingTypeEnum(data);
            case 93: return new ::Ifc2x3::IfcCableCarrierSegmentType(data);
            case 94: return new ::Ifc2x3::IfcCableCarrierSegmentTypeEnum(data);
            case 95: return new ::Ifc2x3::IfcCableSegmentType(data);
            case 96: return new ::Ifc2x3::IfcCableSegmentTypeEnum(data);
            case 97: return new ::Ifc2x3::IfcCalendarDate(data);
            case 98: return new ::Ifc2x3::IfcCartesianPoint(data);
            case 99: return new ::Ifc2x3::IfcCartesianTransformationOperator(data);
            case 100: return new ::Ifc2x3::IfcCartesianTransformationOperator2D(data);
            case 101: return new ::Ifc2x3::IfcCartesianTransformationOperator2DnonUniform(data);
            case 102: return new ::Ifc2x3::IfcCartesianTransformationOperator3D(data);
            case 103: return new ::Ifc2x3::IfcCartesianTransformationOperator3DnonUniform(data);
            case 104: return new ::Ifc2x3::IfcCenterLineProfileDef(data);
            case 105: return new ::Ifc2x3::IfcChamferEdgeFeature(data);
            case 106: return new ::Ifc2x3::IfcChangeActionEnum(data);
            case 108: return new ::Ifc2x3::IfcChillerType(data);
            case 109: return new ::Ifc2x3::IfcChillerTypeEnum(data);
            case 110: return new ::Ifc2x3::IfcCircle(data);
            case 111: return new ::Ifc2x3::IfcCircleHollowProfileDef(data);
            case 112: return new ::Ifc2x3::IfcCircleProfileDef(data);
            case 113: return new ::Ifc2x3::IfcClassification(data);
            case 114: return new ::Ifc2x3::IfcClassificationItem(data);
            case 115: return new ::Ifc2x3::IfcClassificationItemRelationship(data);
            case 116: return new ::Ifc2x3::IfcClassificationNotation(data);
            case 117: return new ::Ifc2x3::IfcClassificationNotationFacet(data);
            case 119: return new ::Ifc2x3::IfcClassificationReference(data);
            case 120: return new ::Ifc2x3::IfcClosedShell(data);
            case 121: return new ::Ifc2x3::IfcCoilType(data);
            case 122: return new ::Ifc2x3::IfcCoilTypeEnum(data);
            case 125: return new ::Ifc2x3::IfcColourRgb(data);
            case 126: return new ::Ifc2x3::IfcColourSpecification(data);
            case 127: return new ::Ifc2x3::IfcColumn(data);
            case 128: return new ::Ifc2x3::IfcColumnType(data);
            case 129: return new ::Ifc2x3::IfcColumnTypeEnum(data);
            case 130: return new ::Ifc2x3::IfcComplexNumber(data);
            case 131: return new ::Ifc2x3::IfcComplexProperty(data);
            case 132: return new ::Ifc2x3::IfcCompositeCurve(data);
            case 133: return new ::Ifc2x3::IfcCompositeCurveSegment(data);
            case 134: return new ::Ifc2x3::IfcCompositeProfileDef(data);
            case 135: return new ::Ifc2x3::IfcCompoundPlaneAngleMeasure(data);
            case 136: return new ::Ifc2x3::IfcCompressorType(data);
            case 137: return new ::Ifc2x3::IfcCompressorTypeEnum(data);
            case 138: return new ::Ifc2x3::IfcCondenserType(data);
            case 139: return new ::Ifc2x3::IfcCondenserTypeEnum(data);
            case 140: return new ::Ifc2x3::IfcCondition(data);
            case 141: return new ::Ifc2x3::IfcConditionCriterion(data);
            case 143: return new ::Ifc2x3::IfcConic(data);
            case 144: return new ::Ifc2x3::IfcConnectedFaceSet(data);
            case 145: return new ::Ifc2x3::IfcConnectionCurveGeometry(data);
            case 146: return new ::Ifc2x3::IfcConnectionGeometry(data);
            case 147: return new ::Ifc2x3::IfcConnectionPointEccentricity(data);
            case 148: return new ::Ifc2x3::IfcConnectionPointGeometry(data);
            case 149: return new ::Ifc2x3::IfcConnectionPortGeometry(data);
            case 150: return new ::Ifc2x3::IfcConnectionSurfaceGeometry(data);
            case 151: return new ::Ifc2x3::IfcConnectionTypeEnum(data);
            case 152: return new ::Ifc2x3::IfcConstraint(data);
            case 153: return new ::Ifc2x3::IfcConstraintAggregationRelationship(data);
            case 154: return new ::Ifc2x3::IfcConstraintClassificationRelationship(data);
            case 155: return new ::Ifc2x3::IfcConstraintEnum(data);
            case 156: return new ::Ifc2x3::IfcConstraintRelationship(data);
            case 157: return new ::Ifc2x3::IfcConstructionEquipmentResource(data);
            case 158: return new ::Ifc2x3::IfcConstructionMaterialResource(data);
            case 159: return new ::Ifc2x3::IfcConstructionProductResource(data);
            case 160: return new ::Ifc2x3::IfcConstructionResource(data);
            case 161: return new ::Ifc2x3::IfcContextDependentMeasure(data);
            case 162: return new ::Ifc2x3::IfcContextDependentUnit(data);
            case 163: return new ::Ifc2x3::IfcControl(data);
            case 164: return new ::Ifc2x3::IfcControllerType(data);
            case 165: return new ::Ifc2x3::IfcControllerTypeEnum(data);
            case 166: return new ::Ifc2x3::IfcConversionBasedUnit(data);
            case 167: return new ::Ifc2x3::IfcCooledBeamType(data);
            case 168: return new ::Ifc2x3::IfcCooledBeamTypeEnum(data);
            case 169: return new ::Ifc2x3::IfcCoolingTowerType(data);
            case 170: return new ::Ifc2x3::IfcCoolingTowerTypeEnum(data);
            case 171: return new ::Ifc2x3::IfcCoordinatedUniversalTimeOffset(data);
            case 172: return new ::Ifc2x3::IfcCostItem(data);
            case 173: return new ::Ifc2x3::IfcCostSchedule(data);
            case 174: return new ::Ifc2x3::IfcCostScheduleTypeEnum(data);
            case 175: return new ::Ifc2x3::IfcCostValue(data);
            case 176: return new ::Ifc2x3::IfcCountMeasure(data);
            case 177: return new ::Ifc2x3::IfcCovering(data);
            case 178: return new ::Ifc2x3::IfcCoveringType(data);
            case 179: return new ::Ifc2x3::IfcCoveringTypeEnum(data);
            case 180: return new ::Ifc2x3::IfcCraneRailAShapeProfileDef(data);
            case 181: return new ::Ifc2x3::IfcCraneRailFShapeProfileDef(data);
            case 182: return new ::Ifc2x3::IfcCrewResource(data);
            case 183: return new ::Ifc2x3::IfcCsgPrimitive3D(data);
            case 185: return new ::Ifc2x3::IfcCsgSolid(data);
            case 186: return new ::Ifc2x3::IfcCShapeProfileDef(data);
            case 187: return new ::Ifc2x3::IfcCurrencyEnum(data);
            case 188: return new ::Ifc2x3::IfcCurrencyRelationship(data);
            case 189: return new ::Ifc2x3::IfcCurtainWall(data);
            case 190: return new ::Ifc2x3::IfcCurtainWallType(data);
            case 191: return new ::Ifc2x3::IfcCurtainWallTypeEnum(data);
            case 192: return new ::Ifc2x3::IfcCurvatureMeasure(data);
            case 193: return new ::Ifc2x3::IfcCurve(data);
            case 194: return new ::Ifc2x3::IfcCurveBoundedPlane(data);
            case 197: return new ::Ifc2x3::IfcCurveStyle(data);
            case 198: return new ::Ifc2x3::IfcCurveStyleFont(data);
            case 199: return new ::Ifc2x3::IfcCurveStyleFontAndScaling(data);
            case 200: return new ::Ifc2x3::IfcCurveStyleFontPattern(data);
            case 202: return new ::Ifc2x3::IfcDamperType(data);
            case 203: return new ::Ifc2x3::IfcDamperTypeEnum(data);
            case 204: return new ::Ifc2x3::IfcDataOriginEnum(data);
            case 205: return new ::Ifc2x3::IfcDateAndTime(data);
            case 207: return new ::Ifc2x3::IfcDayInMonthNumber(data);
            case 208: return new ::Ifc2x3::IfcDaylightSavingHour(data);
            case 209: return new ::Ifc2x3::IfcDefinedSymbol(data);
            case 212: return new ::Ifc2x3::IfcDerivedProfileDef(data);
            case 213: return new ::Ifc2x3::IfcDerivedUnit(data);
            case 214: return new ::Ifc2x3::IfcDerivedUnitElement(data);
            case 215: return new ::Ifc2x3::IfcDerivedUnitEnum(data);
            case 216: return new ::Ifc2x3::IfcDescriptiveMeasure(data);
            case 217: return new ::Ifc2x3::IfcDiameterDimension(data);
            case 218: return new ::Ifc2x3::IfcDimensionalExponents(data);
            case 219: return new ::Ifc2x3::IfcDimensionCalloutRelationship(data);
            case 220: return new ::Ifc2x3::IfcDimensionCount(data);
            case 221: return new ::Ifc2x3::IfcDimensionCurve(data);
            case 222: return new ::Ifc2x3::IfcDimensionCurveDirectedCallout(data);
            case 223: return new ::Ifc2x3::IfcDimensionCurveTerminator(data);
            case 224: return new ::Ifc2x3::IfcDimensionExtentUsage(data);
            case 225: return new ::Ifc2x3::IfcDimensionPair(data);
            case 226: return new ::Ifc2x3::IfcDirection(data);
            case 227: return new ::Ifc2x3::IfcDirectionSenseEnum(data);
            case 228: return new ::Ifc2x3::IfcDiscreteAccessory(data);
            case 229: return new ::Ifc2x3::IfcDiscreteAccessoryType(data);
            case 230: return new ::Ifc2x3::IfcDistributionChamberElement(data);
            case 231: return new ::Ifc2x3::IfcDistributionChamberElementType(data);
            case 232: return new ::Ifc2x3::IfcDistributionChamberElementTypeEnum(data);
            case 233: return new ::Ifc2x3::IfcDistributionControlElement(data);
            case 234: return new ::Ifc2x3::IfcDistributionControlElementType(data);
            case 235: return new ::Ifc2x3::IfcDistributionElement(data);
            case 236: return new ::Ifc2x3::IfcDistributionElementType(data);
            case 237: return new ::Ifc2x3::IfcDistributionFlowElement(data);
            case 238: return new ::Ifc2x3::IfcDistributionFlowElementType(data);
            case 239: return new ::Ifc2x3::IfcDistributionPort(data);
            case 240: return new ::Ifc2x3::IfcDocumentConfidentialityEnum(data);
            case 241: return new ::Ifc2x3::IfcDocumentElectronicFormat(data);
            case 242: return new ::Ifc2x3::IfcDocumentInformation(data);
            case 243: return new ::Ifc2x3::IfcDocumentInformationRelationship(data);
            case 244: return new ::Ifc2x3::IfcDocumentReference(data);
            case 246: return new ::Ifc2x3::IfcDocumentStatusEnum(data);
            case 247: return new ::Ifc2x3::IfcDoor(data);
            case 248: return new ::Ifc2x3::IfcDoorLiningProperties(data);
            case 249: return new ::Ifc2x3::IfcDoorPanelOperationEnum(data);
            case 250: return new ::Ifc2x3::IfcDoorPanelPositionEnum(data);
            case 251: return new ::Ifc2x3::IfcDoorPanelProperties(data);
            case 252: return new ::Ifc2x3::IfcDoorStyle(data);
            case 253: return new ::Ifc2x3::IfcDoorStyleConstructionEnum(data);
            case 254: return new ::Ifc2x3::IfcDoorStyleOperationEnum(data);
            case 255: return new ::Ifc2x3::IfcDoseEquivalentMeasure(data);
            case 256: return new ::Ifc2x3::IfcDraughtingCallout(data);
            case 258: return new ::Ifc2x3::IfcDraughtingCalloutRelationship(data);
            case 259: return new ::Ifc2x3::IfcDraughtingPreDefinedColour(data);
            case 260: return new ::Ifc2x3::IfcDraughtingPreDefinedCurveFont(data);
            case 261: return new ::Ifc2x3::IfcDraughtingPreDefinedTextFont(data);
            case 262: return new ::Ifc2x3::IfcDuctFittingType(data);
            case 263: return new ::Ifc2x3::IfcDuctFittingTypeEnum(data);
            case 264: return new ::Ifc2x3::IfcDuctSegmentType(data);
            case 265: return new ::Ifc2x3::IfcDuctSegmentTypeEnum(data);
            case 266: return new ::Ifc2x3::IfcDuctSilencerType(data);
            case 267: return new ::Ifc2x3::IfcDuctSilencerTypeEnum(data);
            case 268: return new ::Ifc2x3::IfcDynamicViscosityMeasure(data);
            case 269: return new ::Ifc2x3::IfcEdge(data);
            case 270: return new ::Ifc2x3::IfcEdgeCurve(data);
            case 271: return new ::Ifc2x3::IfcEdgeFeature(data);
            case 272: return new ::Ifc2x3::IfcEdgeLoop(data);
            case 273: return new ::Ifc2x3::IfcElectricalBaseProperties(data);
            case 274: return new ::Ifc2x3::IfcElectricalCircuit(data);
            case 275: return new ::Ifc2x3::IfcElectricalElement(data);
            case 276: return new ::Ifc2x3::IfcElectricApplianceType(data);
            case 277: return new ::Ifc2x3::IfcElectricApplianceTypeEnum(data);
            case 278: return new ::Ifc2x3::IfcElectricCapacitanceMeasure(data);
            case 279: return new ::Ifc2x3::IfcElectricChargeMeasure(data);
            case 280: return new ::Ifc2x3::IfcElectricConductanceMeasure(data);
            case 281: return new ::Ifc2x3::IfcElectricCurrentEnum(data);
            case 282: return new ::Ifc2x3::IfcElectricCurrentMeasure(data);
            case 283: return new ::Ifc2x3::IfcElectricDistributionPoint(data);
            case 284: return new ::Ifc2x3::IfcElectricDistributionPointFunctionEnum(data);
            case 285: return new ::Ifc2x3::IfcElectricFlowStorageDeviceType(data);
            case 286: return new ::Ifc2x3::IfcElectricFlowStorageDeviceTypeEnum(data);
            case 287: return new ::Ifc2x3::IfcElectricGeneratorType(data);
            case 288: return new ::Ifc2x3::IfcElectricGeneratorTypeEnum(data);
            case 289: return new ::Ifc2x3::IfcElectricHeaterType(data);
            case 290: return new ::Ifc2x3::IfcElectricHeaterTypeEnum(data);
            case 291: return new ::Ifc2x3::IfcElectricMotorType(data);
            case 292: return new ::Ifc2x3::IfcElectricMotorTypeEnum(data);
            case 293: return new ::Ifc2x3::IfcElectricResistanceMeasure(data);
            case 294: return new ::Ifc2x3::IfcElectricTimeControlType(data);
            case 295: return new ::Ifc2x3::IfcElectricTimeControlTypeEnum(data);
            case 296: return new ::Ifc2x3::IfcElectricVoltageMeasure(data);
            case 297: return new ::Ifc2x3::IfcElement(data);
            case 298: return new ::Ifc2x3::IfcElementarySurface(data);
            case 299: return new ::Ifc2x3::IfcElementAssembly(data);
            case 300: return new ::Ifc2x3::IfcElementAssemblyTypeEnum(data);
            case 301: return new ::Ifc2x3::IfcElementComponent(data);
            case 302: return new ::Ifc2x3::IfcElementComponentType(data);
            case 303: return new ::Ifc2x3::IfcElementCompositionEnum(data);
            case 304: return new ::Ifc2x3::IfcElementQuantity(data);
            case 305: return new ::Ifc2x3::IfcElementType(data);
            case 306: return new ::Ifc2x3::IfcEllipse(data);
            case 307: return new ::Ifc2x3::IfcEllipseProfileDef(data);
            case 308: return new ::Ifc2x3::IfcEnergyConversionDevice(data);
            case 309: return new ::Ifc2x3::IfcEnergyConversionDeviceType(data);
            case 310: return new ::Ifc2x3::IfcEnergyMeasure(data);
            case 311: return new ::Ifc2x3::IfcEnergyProperties(data);
            case 312: return new ::Ifc2x3::IfcEnergySequenceEnum(data);
            case 313: return new ::Ifc2x3::IfcEnvironmentalImpactCategoryEnum(data);
            case 314: return new ::Ifc2x3::IfcEnvironmentalImpactValue(data);
            case 315: return new ::Ifc2x3::IfcEquipmentElement(data);
            case 316: return new ::Ifc2x3::IfcEquipmentStandard(data);
            case 317: return new ::Ifc2x3::IfcEvaporativeCoolerType(data);
            case 318: return new ::Ifc2x3::IfcEvaporativeCoolerTypeEnum(data);
            case 319: return new ::Ifc2x3::IfcEvaporatorType(data);
            case 320: return new ::Ifc2x3::IfcEvaporatorTypeEnum(data);
            case 321: return new ::Ifc2x3::IfcExtendedMaterialProperties(data);
            case 322: return new ::Ifc2x3::IfcExternallyDefinedHatchStyle(data);
            case 323: return new ::Ifc2x3::IfcExternallyDefinedSurfaceStyle(data);
            case 324: return new ::Ifc2x3::IfcExternallyDefinedSymbol(data);
            case 325: return new ::Ifc2x3::IfcExternallyDefinedTextFont(data);
            case 326: return new ::Ifc2x3::IfcExternalReference(data);
            case 327: return new ::Ifc2x3::IfcExtrudedAreaSolid(data);
            case 328: return new ::Ifc2x3::IfcFace(data);
            case 329: return new ::Ifc2x3::IfcFaceBasedSurfaceModel(data);
            case 330: return new ::Ifc2x3::IfcFaceBound(data);
            case 331: return new ::Ifc2x3::IfcFaceOuterBound(data);
            case 332: return new ::Ifc2x3::IfcFaceSurface(data);
            case 333: return new ::Ifc2x3::IfcFacetedBrep(data);
            case 334: return new ::Ifc2x3::IfcFacetedBrepWithVoids(data);
            case 335: return new ::Ifc2x3::IfcFailureConnectionCondition(data);
            case 336: return new ::Ifc2x3::IfcFanType(data);
            case 337: return new ::Ifc2x3::IfcFanTypeEnum(data);
            case 338: return new ::Ifc2x3::IfcFastener(data);
            case 339: return new ::Ifc2x3::IfcFastenerType(data);
            case 340: return new ::Ifc2x3::IfcFeatureElement(data);
            case 341: return new ::Ifc2x3::IfcFeatureElementAddition(data);
            case 342: return new ::Ifc2x3::IfcFeatureElementSubtraction(data);
            case 343: return new ::Ifc2x3::IfcFillAreaStyle(data);
            case 344: return new ::Ifc2x3::IfcFillAreaStyleHatching(data);
            case 345: return new ::Ifc2x3::IfcFillAreaStyleTiles(data);
            case 347: return new ::Ifc2x3::IfcFillAreaStyleTileSymbolWithStyle(data);
            case 349: return new ::Ifc2x3::IfcFilterType(data);
            case 350: return new ::Ifc2x3::IfcFilterTypeEnum(data);
            case 351: return new ::Ifc2x3::IfcFireSuppressionTerminalType(data);
            case 352: return new ::Ifc2x3::IfcFireSuppressionTerminalTypeEnum(data);
            case 353: return new ::Ifc2x3::IfcFlowController(data);
            case 354: return new ::Ifc2x3::IfcFlowControllerType(data);
            case 355: return new ::Ifc2x3::IfcFlowDirectionEnum(data);
            case 356: return new ::Ifc2x3::IfcFlowFitting(data);
            case 357: return new ::Ifc2x3::IfcFlowFittingType(data);
            case 358: return new ::Ifc2x3::IfcFlowInstrumentType(data);
            case 359: return new ::Ifc2x3::IfcFlowInstrumentTypeEnum(data);
            case 360: return new ::Ifc2x3::IfcFlowMeterType(data);
            case 361: return new ::Ifc2x3::IfcFlowMeterTypeEnum(data);
            case 362: return new ::Ifc2x3::IfcFlowMovingDevice(data);
            case 363: return new ::Ifc2x3::IfcFlowMovingDeviceType(data);
            case 364: return new ::Ifc2x3::IfcFlowSegment(data);
            case 365: return new ::Ifc2x3::IfcFlowSegmentType(data);
            case 366: return new ::Ifc2x3::IfcFlowStorageDevice(data);
            case 367: return new ::Ifc2x3::IfcFlowStorageDeviceType(data);
            case 368: return new ::Ifc2x3::IfcFlowTerminal(data);
            case 369: return new ::Ifc2x3::IfcFlowTerminalType(data);
            case 370: return new ::Ifc2x3::IfcFlowTreatmentDevice(data);
            case 371: return new ::Ifc2x3::IfcFlowTreatmentDeviceType(data);
            case 372: return new ::Ifc2x3::IfcFluidFlowProperties(data);
            case 373: return new ::Ifc2x3::IfcFontStyle(data);
            case 374: return new ::Ifc2x3::IfcFontVariant(data);
            case 375: return new ::Ifc2x3::IfcFontWeight(data);
            case 376: return new ::Ifc2x3::IfcFooting(data);
            case 377: return new ::Ifc2x3::IfcFootingTypeEnum(data);
            case 378: return new ::Ifc2x3::IfcForceMeasure(data);
            case 379: return new ::Ifc2x3::IfcFrequencyMeasure(data);
            case 380: return new ::Ifc2x3::IfcFuelProperties(data);
            case 381: return new ::Ifc2x3::IfcFurnishingElement(data);
            case 382: return new ::Ifc2x3::IfcFurnishingElementType(data);
            case 383: return new ::Ifc2x3::IfcFurnitureStandard(data);
            case 384: return new ::Ifc2x3::IfcFurnitureType(data);
            case 385: return new ::Ifc2x3::IfcGasTerminalType(data);
            case 386: return new ::Ifc2x3::IfcGasTerminalTypeEnum(data);
            case 387: return new ::Ifc2x3::IfcGeneralMaterialProperties(data);
            case 388: return new ::Ifc2x3::IfcGeneralProfileProperties(data);
            case 389: return new ::Ifc2x3::IfcGeometricCurveSet(data);
            case 390: return new ::Ifc2x3::IfcGeometricProjectionEnum(data);
            case 391: return new ::Ifc2x3::IfcGeometricRepresentationContext(data);
            case 392: return new ::Ifc2x3::IfcGeometricRepresentationItem(data);
            case 393: return new ::Ifc2x3::IfcGeometricRepresentationSubContext(data);
            case 394: return new ::Ifc2x3::IfcGeometricSet(data);
            case 396: return new ::Ifc2x3::IfcGloballyUniqueId(data);
            case 397: return new ::Ifc2x3::IfcGlobalOrLocalEnum(data);
            case 398: return new ::Ifc2x3::IfcGrid(data);
            case 399: return new ::Ifc2x3::IfcGridAxis(data);
            case 400: return new ::Ifc2x3::IfcGridPlacement(data);
            case 401: return new ::Ifc2x3::IfcGroup(data);
            case 402: return new ::Ifc2x3::IfcHalfSpaceSolid(data);
            case 404: return new ::Ifc2x3::IfcHeatExchangerType(data);
            case 405: return new ::Ifc2x3::IfcHeatExchangerTypeEnum(data);
            case 406: return new ::Ifc2x3::IfcHeatFluxDensityMeasure(data);
            case 407: return new ::Ifc2x3::IfcHeatingValueMeasure(data);
            case 408: return new ::Ifc2x3::IfcHourInDay(data);
            case 409: return new ::Ifc2x3::IfcHumidifierType(data);
            case 410: return new ::Ifc2x3::IfcHumidifierTypeEnum(data);
            case 411: return new ::Ifc2x3::IfcHygroscopicMaterialProperties(data);
            case 412: return new ::Ifc2x3::IfcIdentifier(data);
            case 413: return new ::Ifc2x3::IfcIlluminanceMeasure(data);
            case 414: return new ::Ifc2x3::IfcImageTexture(data);
            case 415: return new ::Ifc2x3::IfcInductanceMeasure(data);
            case 416: return new ::Ifc2x3::IfcInteger(data);
            case 417: return new ::Ifc2x3::IfcIntegerCountRateMeasure(data);
            case 418: return new ::Ifc2x3::IfcInternalOrExternalEnum(data);
            case 419: return new ::Ifc2x3::IfcInventory(data);
            case 420: return new ::Ifc2x3::IfcInventoryTypeEnum(data);
            case 421: return new ::Ifc2x3::IfcIonConcentrationMeasure(data);
            case 422: return new ::Ifc2x3::IfcIrregularTimeSeries(data);
            case 423: return new ::Ifc2x3::IfcIrregularTimeSeriesValue(data);
            case 424: return new ::Ifc2x3::IfcIShapeProfileDef(data);
            case 425: return new ::Ifc2x3::IfcIsothermalMoistureCapacityMeasure(data);
            case 426: return new ::Ifc2x3::IfcJunctionBoxType(data);
            case 427: return new ::Ifc2x3::IfcJunctionBoxTypeEnum(data);
            case 428: return new ::Ifc2x3::IfcKinematicViscosityMeasure(data);
            case 429: return new ::Ifc2x3::IfcLabel(data);
            case 430: return new ::Ifc2x3::IfcLaborResource(data);
            case 431: return new ::Ifc2x3::IfcLampType(data);
            case 432: return new ::Ifc2x3::IfcLampTypeEnum(data);
            case 434: return new ::Ifc2x3::IfcLayerSetDirectionEnum(data);
            case 435: return new ::Ifc2x3::IfcLengthMeasure(data);
            case 436: return new ::Ifc2x3::IfcLibraryInformation(data);
            case 437: return new ::Ifc2x3::IfcLibraryReference(data);
            case 439: return new ::Ifc2x3::IfcLightDistributionCurveEnum(data);
            case 440: return new ::Ifc2x3::IfcLightDistributionData(data);
            case 442: return new ::Ifc2x3::IfcLightEmissionSourceEnum(data);
            case 443: return new ::Ifc2x3::IfcLightFixtureType(data);
            case 444: return new ::Ifc2x3::IfcLightFixtureTypeEnum(data);
            case 445: return new ::Ifc2x3::IfcLightIntensityDistribution(data);
            case 446: return new ::Ifc2x3::IfcLightSource(data);
            case 447: return new ::Ifc2x3::IfcLightSourceAmbient(data);
            case 448: return new ::Ifc2x3::IfcLightSourceDirectional(data);
            case 449: return new ::Ifc2x3::IfcLightSourceGoniometric(data);
            case 450: return new ::Ifc2x3::IfcLightSourcePositional(data);
            case 451: return new ::Ifc2x3::IfcLightSourceSpot(data);
            case 452: return new ::Ifc2x3::IfcLine(data);
            case 453: return new ::Ifc2x3::IfcLinearDimension(data);
            case 454: return new ::Ifc2x3::IfcLinearForceMeasure(data);
            case 455: return new ::Ifc2x3::IfcLinearMomentMeasure(data);
            case 456: return new ::Ifc2x3::IfcLinearStiffnessMeasure(data);
            case 457: return new ::Ifc2x3::IfcLinearVelocityMeasure(data);
            case 458: return new ::Ifc2x3::IfcLoadGroupTypeEnum(data);
            case 459: return new ::Ifc2x3::IfcLocalPlacement(data);
            case 460: return new ::Ifc2x3::IfcLocalTime(data);
            case 461: return new ::Ifc2x3::IfcLogical(data);
            case 462: return new ::Ifc2x3::IfcLogicalOperatorEnum(data);
            case 463: return new ::Ifc2x3::IfcLoop(data);
            case 464: return new ::Ifc2x3::IfcLShapeProfileDef(data);
            case 465: return new ::Ifc2x3::IfcLuminousFluxMeasure(data);
            case 466: return new ::Ifc2x3::IfcLuminousIntensityDistributionMeasure(data);
            case 467: return new ::Ifc2x3::IfcLuminousIntensityMeasure(data);
            case 468: return new ::Ifc2x3::IfcMagneticFluxDensityMeasure(data);
            case 469: return new ::Ifc2x3::IfcMagneticFluxMeasure(data);
            case 470: return new ::Ifc2x3::IfcManifoldSolidBrep(data);
            case 471: return new ::Ifc2x3::IfcMappedItem(data);
            case 472: return new ::Ifc2x3::IfcMassDensityMeasure(data);
            case 473: return new ::Ifc2x3::IfcMassFlowRateMeasure(data);
            case 474: return new ::Ifc2x3::IfcMassMeasure(data);
            case 475: return new ::Ifc2x3::IfcMassPerLengthMeasure(data);
            case 476: return new ::Ifc2x3::IfcMaterial(data);
            case 477: return new ::Ifc2x3::IfcMaterialClassificationRelationship(data);
            case 478: return new ::Ifc2x3::IfcMaterialDefinitionRepresentation(data);
            case 479: return new ::Ifc2x3::IfcMaterialLayer(data);
            case 480: return new ::Ifc2x3::IfcMaterialLayerSet(data);
            case 481: return new ::Ifc2x3::IfcMaterialLayerSetUsage(data);
            case 482: return new ::Ifc2x3::IfcMaterialList(data);
            case 483: return new ::Ifc2x3::IfcMaterialProperties(data);
            case 486: return new ::Ifc2x3::IfcMeasureWithUnit(data);
            case 487: return new ::Ifc2x3::IfcMechanicalConcreteMaterialProperties(data);
            case 488: return new ::Ifc2x3::IfcMechanicalFastener(data);
            case 489: return new ::Ifc2x3::IfcMechanicalFastenerType(data);
            case 490: return new ::Ifc2x3::IfcMechanicalMaterialProperties(data);
            case 491: return new ::Ifc2x3::IfcMechanicalSteelMaterialProperties(data);
            case 492: return new ::Ifc2x3::IfcMember(data);
            case 493: return new ::Ifc2x3::IfcMemberType(data);
            case 494: return new ::Ifc2x3::IfcMemberTypeEnum(data);
            case 495: return new ::Ifc2x3::IfcMetric(data);
            case 497: return new ::Ifc2x3::IfcMinuteInHour(data);
            case 498: return new ::Ifc2x3::IfcModulusOfElasticityMeasure(data);
            case 499: return new ::Ifc2x3::IfcModulusOfLinearSubgradeReactionMeasure(data);
            case 500: return new ::Ifc2x3::IfcModulusOfRotationalSubgradeReactionMeasure(data);
            case 501: return new ::Ifc2x3::IfcModulusOfSubgradeReactionMeasure(data);
            case 502: return new ::Ifc2x3::IfcMoistureDiffusivityMeasure(data);
            case 503: return new ::Ifc2x3::IfcMolecularWeightMeasure(data);
            case 504: return new ::Ifc2x3::IfcMomentOfInertiaMeasure(data);
            case 505: return new ::Ifc2x3::IfcMonetaryMeasure(data);
            case 506: return new ::Ifc2x3::IfcMonetaryUnit(data);
            case 507: return new ::Ifc2x3::IfcMonthInYearNumber(data);
            case 508: return new ::Ifc2x3::IfcMotorConnectionType(data);
            case 509: return new ::Ifc2x3::IfcMotorConnectionTypeEnum(data);
            case 510: return new ::Ifc2x3::IfcMove(data);
            case 511: return new ::Ifc2x3::IfcNamedUnit(data);
            case 512: return new ::Ifc2x3::IfcNormalisedRatioMeasure(data);
            case 513: return new ::Ifc2x3::IfcNullStyle(data);
            case 514: return new ::Ifc2x3::IfcNumericMeasure(data);
            case 515: return new ::Ifc2x3::IfcObject(data);
            case 516: return new ::Ifc2x3::IfcObjectDefinition(data);
            case 517: return new ::Ifc2x3::IfcObjective(data);
            case 518: return new ::Ifc2x3::IfcObjectiveEnum(data);
            case 519: return new ::Ifc2x3::IfcObjectPlacement(data);
            case 521: return new ::Ifc2x3::IfcObjectTypeEnum(data);
            case 522: return new ::Ifc2x3::IfcOccupant(data);
            case 523: return new ::Ifc2x3::IfcOccupantTypeEnum(data);
            case 524: return new ::Ifc2x3::IfcOffsetCurve2D(data);
            case 525: return new ::Ifc2x3::IfcOffsetCurve3D(data);
            case 526: return new ::Ifc2x3::IfcOneDirectionRepeatFactor(data);
            case 527: return new ::Ifc2x3::IfcOpeningElement(data);
            case 528: return new ::Ifc2x3::IfcOpenShell(data);
            case 529: return new ::Ifc2x3::IfcOpticalMaterialProperties(data);
            case 530: return new ::Ifc2x3::IfcOrderAction(data);
            case 531: return new ::Ifc2x3::IfcOrganization(data);
            case 532: return new ::Ifc2x3::IfcOrganizationRelationship(data);
            case 534: return new ::Ifc2x3::IfcOrientedEdge(data);
            case 535: return new ::Ifc2x3::IfcOutletType(data);
            case 536: return new ::Ifc2x3::IfcOutletTypeEnum(data);
            case 537: return new ::Ifc2x3::IfcOwnerHistory(data);
            case 538: return new ::Ifc2x3::IfcParameterizedProfileDef(data);
            case 539: return new ::Ifc2x3::IfcParameterValue(data);
            case 540: return new ::Ifc2x3::IfcPath(data);
            case 541: return new ::Ifc2x3::IfcPerformanceHistory(data);
            case 542: return new ::Ifc2x3::IfcPermeableCoveringOperationEnum(data);
            case 543: return new ::Ifc2x3::IfcPermeableCoveringProperties(data);
            case 544: return new ::Ifc2x3::IfcPermit(data);
            case 545: return new ::Ifc2x3::IfcPerson(data);
            case 546: return new ::Ifc2x3::IfcPersonAndOrganization(data);
            case 547: return new ::Ifc2x3::IfcPHMeasure(data);
            case 548: return new ::Ifc2x3::IfcPhysicalComplexQuantity(data);
            case 549: return new ::Ifc2x3::IfcPhysicalOrVirtualEnum(data);
            case 550: return new ::Ifc2x3::IfcPhysicalQuantity(data);
            case 551: return new ::Ifc2x3::IfcPhysicalSimpleQuantity(data);
            case 552: return new ::Ifc2x3::IfcPile(data);
            case 553: return new ::Ifc2x3::IfcPileConstructionEnum(data);
            case 554: return new ::Ifc2x3::IfcPileTypeEnum(data);
            case 555: return new ::Ifc2x3::IfcPipeFittingType(data);
            case 556: return new ::Ifc2x3::IfcPipeFittingTypeEnum(data);
            case 557: return new ::Ifc2x3::IfcPipeSegmentType(data);
            case 558: return new ::Ifc2x3::IfcPipeSegmentTypeEnum(data);
            case 559: return new ::Ifc2x3::IfcPixelTexture(data);
            case 560: return new ::Ifc2x3::IfcPlacement(data);
            case 561: return new ::Ifc2x3::IfcPlanarBox(data);
            case 562: return new ::Ifc2x3::IfcPlanarExtent(data);
            case 563: return new ::Ifc2x3::IfcPlanarForceMeasure(data);
            case 564: return new ::Ifc2x3::IfcPlane(data);
            case 565: return new ::Ifc2x3::IfcPlaneAngleMeasure(data);
            case 566: return new ::Ifc2x3::IfcPlate(data);
            case 567: return new ::Ifc2x3::IfcPlateType(data);
            case 568: return new ::Ifc2x3::IfcPlateTypeEnum(data);
            case 569: return new ::Ifc2x3::IfcPoint(data);
            case 570: return new ::Ifc2x3::IfcPointOnCurve(data);
            case 571: return new ::Ifc2x3::IfcPointOnSurface(data);
            case 573: return new ::Ifc2x3::IfcPolygonalBoundedHalfSpace(data);
            case 574: return new ::Ifc2x3::IfcPolyline(data);
            case 575: return new ::Ifc2x3::IfcPolyLoop(data);
            case 576: return new ::Ifc2x3::IfcPort(data);
            case 577: return new ::Ifc2x3::IfcPositiveLengthMeasure(data);
            case 578: return new ::Ifc2x3::IfcPositivePlaneAngleMeasure(data);
            case 579: return new ::Ifc2x3::IfcPositiveRatioMeasure(data);
            case 580: return new ::Ifc2x3::IfcPostalAddress(data);
            case 581: return new ::Ifc2x3::IfcPowerMeasure(data);
            case 582: return new ::Ifc2x3::IfcPreDefinedColour(data);
            case 583: return new ::Ifc2x3::IfcPreDefinedCurveFont(data);
            case 584: return new ::Ifc2x3::IfcPreDefinedDimensionSymbol(data);
            case 585: return new ::Ifc2x3::IfcPreDefinedItem(data);
            case 586: return new ::Ifc2x3::IfcPreDefinedPointMarkerSymbol(data);
            case 587: return new ::Ifc2x3::IfcPreDefinedSymbol(data);
            case 588: return new ::Ifc2x3::IfcPreDefinedTerminatorSymbol(data);
            case 589: return new ::Ifc2x3::IfcPreDefinedTextFont(data);
            case 590: return new ::Ifc2x3::IfcPresentableText(data);
            case 591: return new ::Ifc2x3::IfcPresentationLayerAssignment(data);
            case 592: return new ::Ifc2x3::IfcPresentationLayerWithStyle(data);
            case 593: return new ::Ifc2x3::IfcPresentationStyle(data);
            case 594: return new ::Ifc2x3::IfcPresentationStyleAssignment(data);
            case 596: return new ::Ifc2x3::IfcPressureMeasure(data);
            case 597: return new ::Ifc2x3::IfcProcedure(data);
            case 598: return new ::Ifc2x3::IfcProcedureTypeEnum(data);
            case 599: return new ::Ifc2x3::IfcProcess(data);
            case 600: return new ::Ifc2x3::IfcProduct(data);
            case 601: return new ::Ifc2x3::IfcProductDefinitionShape(data);
            case 602: return new ::Ifc2x3::IfcProductRepresentation(data);
            case 603: return new ::Ifc2x3::IfcProductsOfCombustionProperties(data);
            case 604: return new ::Ifc2x3::IfcProfileDef(data);
            case 605: return new ::Ifc2x3::IfcProfileProperties(data);
            case 606: return new ::Ifc2x3::IfcProfileTypeEnum(data);
            case 607: return new ::Ifc2x3::IfcProject(data);
            case 608: return new ::Ifc2x3::IfcProjectedOrTrueLengthEnum(data);
            case 609: return new ::Ifc2x3::IfcProjectionCurve(data);
            case 610: return new ::Ifc2x3::IfcProjectionElement(data);
            case 611: return new ::Ifc2x3::IfcProjectOrder(data);
            case 612: return new ::Ifc2x3::IfcProjectOrderRecord(data);
            case 613: return new ::Ifc2x3::IfcProjectOrderRecordTypeEnum(data);
            case 614: return new ::Ifc2x3::IfcProjectOrderTypeEnum(data);
            case 615: return new ::Ifc2x3::IfcProperty(data);
            case 616: return new ::Ifc2x3::IfcPropertyBoundedValue(data);
            case 617: return new ::Ifc2x3::IfcPropertyConstraintRelationship(data);
            case 618: return new ::Ifc2x3::IfcPropertyDefinition(data);
            case 619: return new ::Ifc2x3::IfcPropertyDependencyRelationship(data);
            case 620: return new ::Ifc2x3::IfcPropertyEnumeratedValue(data);
            case 621: return new ::Ifc2x3::IfcPropertyEnumeration(data);
            case 622: return new ::Ifc2x3::IfcPropertyListValue(data);
            case 623: return new ::Ifc2x3::IfcPropertyReferenceValue(data);
            case 624: return new ::Ifc2x3::IfcPropertySet(data);
            case 625: return new ::Ifc2x3::IfcPropertySetDefinition(data);
            case 626: return new ::Ifc2x3::IfcPropertySingleValue(data);
            case 627: return new ::Ifc2x3::IfcPropertySourceEnum(data);
            case 628: return new ::Ifc2x3::IfcPropertyTableValue(data);
            case 629: return new ::Ifc2x3::IfcProtectiveDeviceType(data);
            case 630: return new ::Ifc2x3::IfcProtectiveDeviceTypeEnum(data);
            case 631: return new ::Ifc2x3::IfcProxy(data);
            case 632: return new ::Ifc2x3::IfcPumpType(data);
            case 633: return new ::Ifc2x3::IfcPumpTypeEnum(data);
            case 634: return new ::Ifc2x3::IfcQuantityArea(data);
            case 635: return new ::Ifc2x3::IfcQuantityCount(data);
            case 636: return new ::Ifc2x3::IfcQuantityLength(data);
            case 637: return new ::Ifc2x3::IfcQuantityTime(data);
            case 638: return new ::Ifc2x3::IfcQuantityVolume(data);
            case 639: return new ::Ifc2x3::IfcQuantityWeight(data);
            case 640: return new ::Ifc2x3::IfcRadioActivityMeasure(data);
            case 641: return new ::Ifc2x3::IfcRadiusDimension(data);
            case 642: return new ::Ifc2x3::IfcRailing(data);
            case 643: return new ::Ifc2x3::IfcRailingType(data);
            case 644: return new ::Ifc2x3::IfcRailingTypeEnum(data);
            case 645: return new ::Ifc2x3::IfcRamp(data);
            case 646: return new ::Ifc2x3::IfcRampFlight(data);
            case 647: return new ::Ifc2x3::IfcRampFlightType(data);
            case 648: return new ::Ifc2x3::IfcRampFlightTypeEnum(data);
            case 649: return new ::Ifc2x3::IfcRampTypeEnum(data);
            case 650: return new ::Ifc2x3::IfcRatioMeasure(data);
            case 651: return new ::Ifc2x3::IfcRationalBezierCurve(data);
            case 652: return new ::Ifc2x3::IfcReal(data);
            case 653: return new ::Ifc2x3::IfcRectangleHollowProfileDef(data);
            case 654: return new ::Ifc2x3::IfcRectangleProfileDef(data);
            case 655: return new ::Ifc2x3::IfcRectangularPyramid(data);
            case 656: return new ::Ifc2x3::IfcRectangularTrimmedSurface(data);
            case 657: return new ::Ifc2x3::IfcReferencesValueDocument(data);
            case 658: return new ::Ifc2x3::IfcReflectanceMethodEnum(data);
            case 659: return new ::Ifc2x3::IfcRegularTimeSeries(data);
            case 660: return new ::Ifc2x3::IfcReinforcementBarProperties(data);
            case 661: return new ::Ifc2x3::IfcReinforcementDefinitionProperties(data);
            case 662: return new ::Ifc2x3::IfcReinforcingBar(data);
            case 663: return new ::Ifc2x3::IfcReinforcingBarRoleEnum(data);
            case 664: return new ::Ifc2x3::IfcReinforcingBarSurfaceEnum(data);
            case 665: return new ::Ifc2x3::IfcReinforcingElement(data);
            case 666: return new ::Ifc2x3::IfcReinforcingMesh(data);
            case 667: return new ::Ifc2x3::IfcRelAggregates(data);
            case 668: return new ::Ifc2x3::IfcRelAssigns(data);
            case 669: return new ::Ifc2x3::IfcRelAssignsTasks(data);
            case 670: return new ::Ifc2x3::IfcRelAssignsToActor(data);
            case 671: return new ::Ifc2x3::IfcRelAssignsToControl(data);
            case 672: return new ::Ifc2x3::IfcRelAssignsToGroup(data);
            case 673: return new ::Ifc2x3::IfcRelAssignsToProcess(data);
            case 674: return new ::Ifc2x3::IfcRelAssignsToProduct(data);
            case 675: return new ::Ifc2x3::IfcRelAssignsToProjectOrder(data);
            case 676: return new ::Ifc2x3::IfcRelAssignsToResource(data);
            case 677: return new ::Ifc2x3::IfcRelAssociates(data);
            case 678: return new ::Ifc2x3::IfcRelAssociatesAppliedValue(data);
            case 679: return new ::Ifc2x3::IfcRelAssociatesApproval(data);
            case 680: return new ::Ifc2x3::IfcRelAssociatesClassification(data);
            case 681: return new ::Ifc2x3::IfcRelAssociatesConstraint(data);
            case 682: return new ::Ifc2x3::IfcRelAssociatesDocument(data);
            case 683: return new ::Ifc2x3::IfcRelAssociatesLibrary(data);
            case 684: return new ::Ifc2x3::IfcRelAssociatesMaterial(data);
            case 685: return new ::Ifc2x3::IfcRelAssociatesProfileProperties(data);
            case 686: return new ::Ifc2x3::IfcRelationship(data);
            case 687: return new ::Ifc2x3::IfcRelaxation(data);
            case 688: return new ::Ifc2x3::IfcRelConnects(data);
            case 689: return new ::Ifc2x3::IfcRelConnectsElements(data);
            case 690: return new ::Ifc2x3::IfcRelConnectsPathElements(data);
            case 691: return new ::Ifc2x3::IfcRelConnectsPorts(data);
            case 692: return new ::Ifc2x3::IfcRelConnectsPortToElement(data);
            case 693: return new ::Ifc2x3::IfcRelConnectsStructuralActivity(data);
            case 694: return new ::Ifc2x3::IfcRelConnectsStructuralElement(data);
            case 695: return new ::Ifc2x3::IfcRelConnectsStructuralMember(data);
            case 696: return new ::Ifc2x3::IfcRelConnectsWithEccentricity(data);
            case 697: return new ::Ifc2x3::IfcRelConnectsWithRealizingElements(data);
            case 698: return new ::Ifc2x3::IfcRelContainedInSpatialStructure(data);
            case 699: return new ::Ifc2x3::IfcRelCoversBldgElements(data);
            case 700: return new ::Ifc2x3::IfcRelCoversSpaces(data);
            case 701: return new ::Ifc2x3::IfcRelDecomposes(data);
            case 702: return new ::Ifc2x3::IfcRelDefines(data);
            case 703: return new ::Ifc2x3::IfcRelDefinesByProperties(data);
            case 704: return new ::Ifc2x3::IfcRelDefinesByType(data);
            case 705: return new ::Ifc2x3::IfcRelFillsElement(data);
            case 706: return new ::Ifc2x3::IfcRelFlowControlElements(data);
            case 707: return new ::Ifc2x3::IfcRelInteractionRequirements(data);
            case 708: return new ::Ifc2x3::IfcRelNests(data);
            case 709: return new ::Ifc2x3::IfcRelOccupiesSpaces(data);
            case 710: return new ::Ifc2x3::IfcRelOverridesProperties(data);
            case 711: return new ::Ifc2x3::IfcRelProjectsElement(data);
            case 712: return new ::Ifc2x3::IfcRelReferencedInSpatialStructure(data);
            case 713: return new ::Ifc2x3::IfcRelSchedulesCostItems(data);
            case 714: return new ::Ifc2x3::IfcRelSequence(data);
            case 715: return new ::Ifc2x3::IfcRelServicesBuildings(data);
            case 716: return new ::Ifc2x3::IfcRelSpaceBoundary(data);
            case 717: return new ::Ifc2x3::IfcRelVoidsElement(data);
            case 718: return new ::Ifc2x3::IfcRepresentation(data);
            case 719: return new ::Ifc2x3::IfcRepresentationContext(data);
            case 720: return new ::Ifc2x3::IfcRepresentationItem(data);
            case 721: return new ::Ifc2x3::IfcRepresentationMap(data);
            case 722: return new ::Ifc2x3::IfcResource(data);
            case 723: return new ::Ifc2x3::IfcResourceConsumptionEnum(data);
            case 724: return new ::Ifc2x3::IfcRevolvedAreaSolid(data);
            case 725: return new ::Ifc2x3::IfcRibPlateDirectionEnum(data);
            case 726: return new ::Ifc2x3::IfcRibPlateProfileProperties(data);
            case 727: return new ::Ifc2x3::IfcRightCircularCone(data);
            case 728: return new ::Ifc2x3::IfcRightCircularCylinder(data);
            case 729: return new ::Ifc2x3::IfcRoleEnum(data);
            case 730: return new ::Ifc2x3::IfcRoof(data);
            case 731: return new ::Ifc2x3::IfcRoofTypeEnum(data);
            case 732: return new ::Ifc2x3::IfcRoot(data);
            case 733: return new ::Ifc2x3::IfcRotationalFrequencyMeasure(data);
            case 734: return new ::Ifc2x3::IfcRotationalMassMeasure(data);
            case 735: return new ::Ifc2x3::IfcRotationalStiffnessMeasure(data);
            case 736: return new ::Ifc2x3::IfcRoundedEdgeFeature(data);
            case 737: return new ::Ifc2x3::IfcRoundedRectangleProfileDef(data);
            case 738: return new ::Ifc2x3::IfcSanitaryTerminalType(data);
            case 739: return new ::Ifc2x3::IfcSanitaryTerminalTypeEnum(data);
            case 740: return new ::Ifc2x3::IfcScheduleTimeControl(data);
            case 741: return new ::Ifc2x3::IfcSecondInMinute(data);
            case 742: return new ::Ifc2x3::IfcSectionalAreaIntegralMeasure(data);
            case 743: return new ::Ifc2x3::IfcSectionedSpine(data);
            case 744: return new ::Ifc2x3::IfcSectionModulusMeasure(data);
            case 745: return new ::Ifc2x3::IfcSectionProperties(data);
            case 746: return new ::Ifc2x3::IfcSectionReinforcementProperties(data);
            case 747: return new ::Ifc2x3::IfcSectionTypeEnum(data);
            case 748: return new ::Ifc2x3::IfcSensorType(data);
            case 749: return new ::Ifc2x3::IfcSensorTypeEnum(data);
            case 750: return new ::Ifc2x3::IfcSequenceEnum(data);
            case 751: return new ::Ifc2x3::IfcServiceLife(data);
            case 752: return new ::Ifc2x3::IfcServiceLifeFactor(data);
            case 753: return new ::Ifc2x3::IfcServiceLifeFactorTypeEnum(data);
            case 754: return new ::Ifc2x3::IfcServiceLifeTypeEnum(data);
            case 755: return new ::Ifc2x3::IfcShapeAspect(data);
            case 756: return new ::Ifc2x3::IfcShapeModel(data);
            case 757: return new ::Ifc2x3::IfcShapeRepresentation(data);
            case 758: return new ::Ifc2x3::IfcShearModulusMeasure(data);
            case 760: return new ::Ifc2x3::IfcShellBasedSurfaceModel(data);
            case 761: return new ::Ifc2x3::IfcSimpleProperty(data);
            case 763: return new ::Ifc2x3::IfcSIPrefix(data);
            case 764: return new ::Ifc2x3::IfcSite(data);
            case 765: return new ::Ifc2x3::IfcSIUnit(data);
            case 766: return new ::Ifc2x3::IfcSIUnitName(data);
            case 768: return new ::Ifc2x3::IfcSlab(data);
            case 769: return new ::Ifc2x3::IfcSlabType(data);
            case 770: return new ::Ifc2x3::IfcSlabTypeEnum(data);
            case 771: return new ::Ifc2x3::IfcSlippageConnectionCondition(data);
            case 772: return new ::Ifc2x3::IfcSolidAngleMeasure(data);
            case 773: return new ::Ifc2x3::IfcSolidModel(data);
            case 774: return new ::Ifc2x3::IfcSoundPowerMeasure(data);
            case 775: return new ::Ifc2x3::IfcSoundPressureMeasure(data);
            case 776: return new ::Ifc2x3::IfcSoundProperties(data);
            case 777: return new ::Ifc2x3::IfcSoundScaleEnum(data);
            case 778: return new ::Ifc2x3::IfcSoundValue(data);
            case 779: return new ::Ifc2x3::IfcSpace(data);
            case 780: return new ::Ifc2x3::IfcSpaceHeaterType(data);
            case 781: return new ::Ifc2x3::IfcSpaceHeaterTypeEnum(data);
            case 782: return new ::Ifc2x3::IfcSpaceProgram(data);
            case 783: return new ::Ifc2x3::IfcSpaceThermalLoadProperties(data);
            case 784: return new ::Ifc2x3::IfcSpaceType(data);
            case 785: return new ::Ifc2x3::IfcSpaceTypeEnum(data);
            case 786: return new ::Ifc2x3::IfcSpatialStructureElement(data);
            case 787: return new ::Ifc2x3::IfcSpatialStructureElementType(data);
            case 788: return new ::Ifc2x3::IfcSpecificHeatCapacityMeasure(data);
            case 789: return new ::Ifc2x3::IfcSpecularExponent(data);
            case 791: return new ::Ifc2x3::IfcSpecularRoughness(data);
            case 792: return new ::Ifc2x3::IfcSphere(data);
            case 793: return new ::Ifc2x3::IfcStackTerminalType(data);
            case 794: return new ::Ifc2x3::IfcStackTerminalTypeEnum(data);
            case 795: return new ::Ifc2x3::IfcStair(data);
            case 796: return new ::Ifc2x3::IfcStairFlight(data);
            case 797: return new ::Ifc2x3::IfcStairFlightType(data);
            case 798: return new ::Ifc2x3::IfcStairFlightTypeEnum(data);
            case 799: return new ::Ifc2x3::IfcStairTypeEnum(data);
            case 800: return new ::Ifc2x3::IfcStateEnum(data);
            case 801: return new ::Ifc2x3::IfcStructuralAction(data);
            case 802: return new ::Ifc2x3::IfcStructuralActivity(data);
            case 804: return new ::Ifc2x3::IfcStructuralAnalysisModel(data);
            case 805: return new ::Ifc2x3::IfcStructuralConnection(data);
            case 806: return new ::Ifc2x3::IfcStructuralConnectionCondition(data);
            case 807: return new ::Ifc2x3::IfcStructuralCurveConnection(data);
            case 808: return new ::Ifc2x3::IfcStructuralCurveMember(data);
            case 809: return new ::Ifc2x3::IfcStructuralCurveMemberVarying(data);
            case 810: return new ::Ifc2x3::IfcStructuralCurveTypeEnum(data);
            case 811: return new ::Ifc2x3::IfcStructuralItem(data);
            case 812: return new ::Ifc2x3::IfcStructuralLinearAction(data);
            case 813: return new ::Ifc2x3::IfcStructuralLinearActionVarying(data);
            case 814: return new ::Ifc2x3::IfcStructuralLoad(data);
            case 815: return new ::Ifc2x3::IfcStructuralLoadGroup(data);
            case 816: return new ::Ifc2x3::IfcStructuralLoadLinearForce(data);
            case 817: return new ::Ifc2x3::IfcStructuralLoadPlanarForce(data);
            case 818: return new ::Ifc2x3::IfcStructuralLoadSingleDisplacement(data);
            case 819: return new ::Ifc2x3::IfcStructuralLoadSingleDisplacementDistortion(data);
            case 820: return new ::Ifc2x3::IfcStructuralLoadSingleForce(data);
            case 821: return new ::Ifc2x3::IfcStructuralLoadSingleForceWarping(data);
            case 822: return new ::Ifc2x3::IfcStructuralLoadStatic(data);
            case 823: return new ::Ifc2x3::IfcStructuralLoadTemperature(data);
            case 824: return new ::Ifc2x3::IfcStructuralMember(data);
            case 825: return new ::Ifc2x3::IfcStructuralPlanarAction(data);
            case 826: return new ::Ifc2x3::IfcStructuralPlanarActionVarying(data);
            case 827: return new ::Ifc2x3::IfcStructuralPointAction(data);
            case 828: return new ::Ifc2x3::IfcStructuralPointConnection(data);
            case 829: return new ::Ifc2x3::IfcStructuralPointReaction(data);
            case 830: return new ::Ifc2x3::IfcStructuralProfileProperties(data);
            case 831: return new ::Ifc2x3::IfcStructuralReaction(data);
            case 832: return new ::Ifc2x3::IfcStructuralResultGroup(data);
            case 833: return new ::Ifc2x3::IfcStructuralSteelProfileProperties(data);
            case 834: return new ::Ifc2x3::IfcStructuralSurfaceConnection(data);
            case 835: return new ::Ifc2x3::IfcStructuralSurfaceMember(data);
            case 836: return new ::Ifc2x3::IfcStructuralSurfaceMemberVarying(data);
            case 837: return new ::Ifc2x3::IfcStructuralSurfaceTypeEnum(data);
            case 838: return new ::Ifc2x3::IfcStructuredDimensionCallout(data);
            case 839: return new ::Ifc2x3::IfcStyledItem(data);
            case 840: return new ::Ifc2x3::IfcStyledRepresentation(data);
            case 841: return new ::Ifc2x3::IfcStyleModel(data);
            case 842: return new ::Ifc2x3::IfcSubContractResource(data);
            case 843: return new ::Ifc2x3::IfcSubedge(data);
            case 844: return new ::Ifc2x3::IfcSurface(data);
            case 845: return new ::Ifc2x3::IfcSurfaceCurveSweptAreaSolid(data);
            case 846: return new ::Ifc2x3::IfcSurfaceOfLinearExtrusion(data);
            case 847: return new ::Ifc2x3::IfcSurfaceOfRevolution(data);
            case 849: return new ::Ifc2x3::IfcSurfaceSide(data);
            case 850: return new ::Ifc2x3::IfcSurfaceStyle(data);
            case 852: return new ::Ifc2x3::IfcSurfaceStyleLighting(data);
            case 853: return new ::Ifc2x3::IfcSurfaceStyleRefraction(data);
            case 854: return new ::Ifc2x3::IfcSurfaceStyleRendering(data);
            case 855: return new ::Ifc2x3::IfcSurfaceStyleShading(data);
            case 856: return new ::Ifc2x3::IfcSurfaceStyleWithTextures(data);
            case 857: return new ::Ifc2x3::IfcSurfaceTexture(data);
            case 858: return new ::Ifc2x3::IfcSurfaceTextureEnum(data);
            case 859: return new ::Ifc2x3::IfcSweptAreaSolid(data);
            case 860: return new ::Ifc2x3::IfcSweptDiskSolid(data);
            case 861: return new ::Ifc2x3::IfcSweptSurface(data);
            case 862: return new ::Ifc2x3::IfcSwitchingDeviceType(data);
            case 863: return new ::Ifc2x3::IfcSwitchingDeviceTypeEnum(data);
            case 864: return new ::Ifc2x3::IfcSymbolStyle(data);
            case 866: return new ::Ifc2x3::IfcSystem(data);
            case 867: return new ::Ifc2x3::IfcSystemFurnitureElementType(data);
            case 868: return new ::Ifc2x3::IfcTable(data);
            case 869: return new ::Ifc2x3::IfcTableRow(data);
            case 870: return new ::Ifc2x3::IfcTankType(data);
            case 871: return new ::Ifc2x3::IfcTankTypeEnum(data);
            case 872: return new ::Ifc2x3::IfcTask(data);
            case 873: return new ::Ifc2x3::IfcTelecomAddress(data);
            case 874: return new ::Ifc2x3::IfcTemperatureGradientMeasure(data);
            case 875: return new ::Ifc2x3::IfcTendon(data);
            case 876: return new ::Ifc2x3::IfcTendonAnchor(data);
            case 877: return new ::Ifc2x3::IfcTendonTypeEnum(data);
            case 878: return new ::Ifc2x3::IfcTerminatorSymbol(data);
            case 879: return new ::Ifc2x3::IfcText(data);
            case 880: return new ::Ifc2x3::IfcTextAlignment(data);
            case 881: return new ::Ifc2x3::IfcTextDecoration(data);
            case 882: return new ::Ifc2x3::IfcTextFontName(data);
            case 884: return new ::Ifc2x3::IfcTextLiteral(data);
            case 885: return new ::Ifc2x3::IfcTextLiteralWithExtent(data);
            case 886: return new ::Ifc2x3::IfcTextPath(data);
            case 887: return new ::Ifc2x3::IfcTextStyle(data);
            case 888: return new ::Ifc2x3::IfcTextStyleFontModel(data);
            case 889: return new ::Ifc2x3::IfcTextStyleForDefinedFont(data);
            case 891: return new ::Ifc2x3::IfcTextStyleTextModel(data);
            case 892: return new ::Ifc2x3::IfcTextStyleWithBoxCharacteristics(data);
            case 893: return new ::Ifc2x3::IfcTextTransformation(data);
            case 894: return new ::Ifc2x3::IfcTextureCoordinate(data);
            case 895: return new ::Ifc2x3::IfcTextureCoordinateGenerator(data);
            case 896: return new ::Ifc2x3::IfcTextureMap(data);
            case 897: return new ::Ifc2x3::IfcTextureVertex(data);
            case 898: return new ::Ifc2x3::IfcThermalAdmittanceMeasure(data);
            case 899: return new ::Ifc2x3::IfcThermalConductivityMeasure(data);
            case 900: return new ::Ifc2x3::IfcThermalExpansionCoefficientMeasure(data);
            case 901: return new ::Ifc2x3::IfcThermalLoadSourceEnum(data);
            case 902: return new ::Ifc2x3::IfcThermalLoadTypeEnum(data);
            case 903: return new ::Ifc2x3::IfcThermalMaterialProperties(data);
            case 904: return new ::Ifc2x3::IfcThermalResistanceMeasure(data);
            case 905: return new ::Ifc2x3::IfcThermalTransmittanceMeasure(data);
            case 906: return new ::Ifc2x3::IfcThermodynamicTemperatureMeasure(data);
            case 907: return new ::Ifc2x3::IfcTimeMeasure(data);
            case 908: return new ::Ifc2x3::IfcTimeSeries(data);
            case 909: return new ::Ifc2x3::IfcTimeSeriesDataTypeEnum(data);
            case 910: return new ::Ifc2x3::IfcTimeSeriesReferenceRelationship(data);
            case 911: return new ::Ifc2x3::IfcTimeSeriesSchedule(data);
            case 912: return new ::Ifc2x3::IfcTimeSeriesScheduleTypeEnum(data);
            case 913: return new ::Ifc2x3::IfcTimeSeriesValue(data);
            case 914: return new ::Ifc2x3::IfcTimeStamp(data);
            case 915: return new ::Ifc2x3::IfcTopologicalRepresentationItem(data);
            case 916: return new ::Ifc2x3::IfcTopologyRepresentation(data);
            case 917: return new ::Ifc2x3::IfcTorqueMeasure(data);
            case 918: return new ::Ifc2x3::IfcTransformerType(data);
            case 919: return new ::Ifc2x3::IfcTransformerTypeEnum(data);
            case 920: return new ::Ifc2x3::IfcTransitionCode(data);
            case 921: return new ::Ifc2x3::IfcTransportElement(data);
            case 922: return new ::Ifc2x3::IfcTransportElementType(data);
            case 923: return new ::Ifc2x3::IfcTransportElementTypeEnum(data);
            case 924: return new ::Ifc2x3::IfcTrapeziumProfileDef(data);
            case 925: return new ::Ifc2x3::IfcTrimmedCurve(data);
            case 926: return new ::Ifc2x3::IfcTrimmingPreference(data);
            case 928: return new ::Ifc2x3::IfcTShapeProfileDef(data);
            case 929: return new ::Ifc2x3::IfcTubeBundleType(data);
            case 930: return new ::Ifc2x3::IfcTubeBundleTypeEnum(data);
            case 931: return new ::Ifc2x3::IfcTwoDirectionRepeatFactor(data);
            case 932: return new ::Ifc2x3::IfcTypeObject(data);
            case 933: return new ::Ifc2x3::IfcTypeProduct(data);
            case 935: return new ::Ifc2x3::IfcUnitaryEquipmentType(data);
            case 936: return new ::Ifc2x3::IfcUnitaryEquipmentTypeEnum(data);
            case 937: return new ::Ifc2x3::IfcUnitAssignment(data);
            case 938: return new ::Ifc2x3::IfcUnitEnum(data);
            case 939: return new ::Ifc2x3::IfcUShapeProfileDef(data);
            case 941: return new ::Ifc2x3::IfcValveType(data);
            case 942: return new ::Ifc2x3::IfcValveTypeEnum(data);
            case 943: return new ::Ifc2x3::IfcVaporPermeabilityMeasure(data);
            case 944: return new ::Ifc2x3::IfcVector(data);
            case 946: return new ::Ifc2x3::IfcVertex(data);
            case 947: return new ::Ifc2x3::IfcVertexBasedTextureMap(data);
            case 948: return new ::Ifc2x3::IfcVertexLoop(data);
            case 949: return new ::Ifc2x3::IfcVertexPoint(data);
            case 950: return new ::Ifc2x3::IfcVibrationIsolatorType(data);
            case 951: return new ::Ifc2x3::IfcVibrationIsolatorTypeEnum(data);
            case 952: return new ::Ifc2x3::IfcVirtualElement(data);
            case 953: return new ::Ifc2x3::IfcVirtualGridIntersection(data);
            case 954: return new ::Ifc2x3::IfcVolumeMeasure(data);
            case 955: return new ::Ifc2x3::IfcVolumetricFlowRateMeasure(data);
            case 956: return new ::Ifc2x3::IfcWall(data);
            case 957: return new ::Ifc2x3::IfcWallStandardCase(data);
            case 958: return new ::Ifc2x3::IfcWallType(data);
            case 959: return new ::Ifc2x3::IfcWallTypeEnum(data);
            case 960: return new ::Ifc2x3::IfcWarpingConstantMeasure(data);
            case 961: return new ::Ifc2x3::IfcWarpingMomentMeasure(data);
            case 962: return new ::Ifc2x3::IfcWasteTerminalType(data);
            case 963: return new ::Ifc2x3::IfcWasteTerminalTypeEnum(data);
            case 964: return new ::Ifc2x3::IfcWaterProperties(data);
            case 965: return new ::Ifc2x3::IfcWindow(data);
            case 966: return new ::Ifc2x3::IfcWindowLiningProperties(data);
            case 967: return new ::Ifc2x3::IfcWindowPanelOperationEnum(data);
            case 968: return new ::Ifc2x3::IfcWindowPanelPositionEnum(data);
            case 969: return new ::Ifc2x3::IfcWindowPanelProperties(data);
            case 970: return new ::Ifc2x3::IfcWindowStyle(data);
            case 971: return new ::Ifc2x3::IfcWindowStyleConstructionEnum(data);
            case 972: return new ::Ifc2x3::IfcWindowStyleOperationEnum(data);
            case 973: return new ::Ifc2x3::IfcWorkControl(data);
            case 974: return new ::Ifc2x3::IfcWorkControlTypeEnum(data);
            case 975: return new ::Ifc2x3::IfcWorkPlan(data);
            case 976: return new ::Ifc2x3::IfcWorkSchedule(data);
            case 977: return new ::Ifc2x3::IfcYearNumber(data);
            case 978: return new ::Ifc2x3::IfcZone(data);
            case 979: return new ::Ifc2x3::IfcZShapeProfileDef(data);
            default: throw IfcParse::IfcException(data->type()->name() + " cannot be instantiated");
        }

    }
};

using namespace std::string_literals;
static std::string strings[] = {"IfcAbsorbedDoseMeasure"s,
"IfcAccelerationMeasure"s,
"IfcActionSourceTypeEnum"s,
"DEAD_LOAD_G"s,
"COMPLETION_G1"s,
"LIVE_LOAD_Q"s,
"SNOW_S"s,
"WIND_W"s,
"PRESTRESSING_P"s,
"SETTLEMENT_U"s,
"TEMPERATURE_T"s,
"EARTHQUAKE_E"s,
"FIRE"s,
"IMPULSE"s,
"IMPACT"s,
"TRANSPORT"s,
"ERECTION"s,
"PROPPING"s,
"SYSTEM_IMPERFECTION"s,
"SHRINKAGE"s,
"CREEP"s,
"LACK_OF_FIT"s,
"BUOYANCY"s,
"ICE"s,
"CURRENT"s,
"WAVE"s,
"RAIN"s,
"BRAKES"s,
"USERDEFINED"s,
"NOTDEFINED"s,
"IfcActionTypeEnum"s,
"PERMANENT_G"s,
"VARIABLE_Q"s,
"EXTRAORDINARY_A"s,
"IfcActuatorTypeEnum"s,
"ELECTRICACTUATOR"s,
"HANDOPERATEDACTUATOR"s,
"HYDRAULICACTUATOR"s,
"PNEUMATICACTUATOR"s,
"THERMOSTATICACTUATOR"s,
"IfcAddressTypeEnum"s,
"OFFICE"s,
"SITE"s,
"HOME"s,
"DISTRIBUTIONPOINT"s,
"IfcAheadOrBehind"s,
"AHEAD"s,
"BEHIND"s,
"IfcAirTerminalBoxTypeEnum"s,
"CONSTANTFLOW"s,
"VARIABLEFLOWPRESSUREDEPENDANT"s,
"VARIABLEFLOWPRESSUREINDEPENDANT"s,
"IfcAirTerminalTypeEnum"s,
"GRILLE"s,
"REGISTER"s,
"DIFFUSER"s,
"EYEBALL"s,
"IRIS"s,
"LINEARGRILLE"s,
"LINEARDIFFUSER"s,
"IfcAirToAirHeatRecoveryTypeEnum"s,
"FIXEDPLATECOUNTERFLOWEXCHANGER"s,
"FIXEDPLATECROSSFLOWEXCHANGER"s,
"FIXEDPLATEPARALLELFLOWEXCHANGER"s,
"ROTARYWHEEL"s,
"RUNAROUNDCOILLOOP"s,
"HEATPIPE"s,
"TWINTOWERENTHALPYRECOVERYLOOPS"s,
"THERMOSIPHONSEALEDTUBEHEATEXCHANGERS"s,
"THERMOSIPHONCOILTYPEHEATEXCHANGERS"s,
"IfcAlarmTypeEnum"s,
"BELL"s,
"BREAKGLASSBUTTON"s,
"LIGHT"s,
"MANUALPULLBOX"s,
"SIREN"s,
"WHISTLE"s,
"IfcAmountOfSubstanceMeasure"s,
"IfcAnalysisModelTypeEnum"s,
"IN_PLANE_LOADING_2D"s,
"OUT_PLANE_LOADING_2D"s,
"LOADING_3D"s,
"IfcAnalysisTheoryTypeEnum"s,
"FIRST_ORDER_THEORY"s,
"SECOND_ORDER_THEORY"s,
"THIRD_ORDER_THEORY"s,
"FULL_NONLINEAR_THEORY"s,
"IfcAngularVelocityMeasure"s,
"IfcAreaMeasure"s,
"IfcArithmeticOperatorEnum"s,
"ADD"s,
"DIVIDE"s,
"MULTIPLY"s,
"SUBTRACT"s,
"IfcAssemblyPlaceEnum"s,
"FACTORY"s,
"IfcBSplineCurveForm"s,
"POLYLINE_FORM"s,
"CIRCULAR_ARC"s,
"ELLIPTIC_ARC"s,
"PARABOLIC_ARC"s,
"HYPERBOLIC_ARC"s,
"UNSPECIFIED"s,
"IfcBeamTypeEnum"s,
"BEAM"s,
"JOIST"s,
"LINTEL"s,
"T_BEAM"s,
"IfcBenchmarkEnum"s,
"GREATERTHAN"s,
"GREATERTHANOREQUALTO"s,
"LESSTHAN"s,
"LESSTHANOREQUALTO"s,
"EQUALTO"s,
"NOTEQUALTO"s,
"IfcBoilerTypeEnum"s,
"WATER"s,
"STEAM"s,
"IfcBoolean"s,
"IfcBooleanOperator"s,
"UNION"s,
"INTERSECTION"s,
"DIFFERENCE"s,
"IfcBuildingElementProxyTypeEnum"s,
"IfcCableCarrierFittingTypeEnum"s,
"BEND"s,
"CROSS"s,
"REDUCER"s,
"TEE"s,
"IfcCableCarrierSegmentTypeEnum"s,
"CABLELADDERSEGMENT"s,
"CABLETRAYSEGMENT"s,
"CABLETRUNKINGSEGMENT"s,
"CONDUITSEGMENT"s,
"IfcCableSegmentTypeEnum"s,
"CABLESEGMENT"s,
"CONDUCTORSEGMENT"s,
"IfcChangeActionEnum"s,
"NOCHANGE"s,
"MODIFIED"s,
"ADDED"s,
"DELETED"s,
"MODIFIEDADDED"s,
"MODIFIEDDELETED"s,
"IfcChillerTypeEnum"s,
"AIRCOOLED"s,
"WATERCOOLED"s,
"HEATRECOVERY"s,
"IfcCoilTypeEnum"s,
"DXCOOLINGCOIL"s,
"WATERCOOLINGCOIL"s,
"STEAMHEATINGCOIL"s,
"WATERHEATINGCOIL"s,
"ELECTRICHEATINGCOIL"s,
"GASHEATINGCOIL"s,
"IfcColumnTypeEnum"s,
"COLUMN"s,
"IfcComplexNumber"s,
"IfcCompoundPlaneAngleMeasure"s,
"IfcCompressorTypeEnum"s,
"DYNAMIC"s,
"RECIPROCATING"s,
"ROTARY"s,
"SCROLL"s,
"TROCHOIDAL"s,
"SINGLESTAGE"s,
"BOOSTER"s,
"OPENTYPE"s,
"HERMETIC"s,
"SEMIHERMETIC"s,
"WELDEDSHELLHERMETIC"s,
"ROLLINGPISTON"s,
"ROTARYVANE"s,
"SINGLESCREW"s,
"TWINSCREW"s,
"IfcCondenserTypeEnum"s,
"WATERCOOLEDSHELLTUBE"s,
"WATERCOOLEDSHELLCOIL"s,
"WATERCOOLEDTUBEINTUBE"s,
"WATERCOOLEDBRAZEDPLATE"s,
"EVAPORATIVECOOLED"s,
"IfcConnectionTypeEnum"s,
"ATPATH"s,
"ATSTART"s,
"ATEND"s,
"IfcConstraintEnum"s,
"HARD"s,
"SOFT"s,
"ADVISORY"s,
"IfcContextDependentMeasure"s,
"IfcControllerTypeEnum"s,
"FLOATING"s,
"PROPORTIONAL"s,
"PROPORTIONALINTEGRAL"s,
"PROPORTIONALINTEGRALDERIVATIVE"s,
"TIMEDTWOPOSITION"s,
"TWOPOSITION"s,
"IfcCooledBeamTypeEnum"s,
"ACTIVE"s,
"PASSIVE"s,
"IfcCoolingTowerTypeEnum"s,
"NATURALDRAFT"s,
"MECHANICALINDUCEDDRAFT"s,
"MECHANICALFORCEDDRAFT"s,
"IfcCostScheduleTypeEnum"s,
"BUDGET"s,
"COSTPLAN"s,
"ESTIMATE"s,
"TENDER"s,
"PRICEDBILLOFQUANTITIES"s,
"UNPRICEDBILLOFQUANTITIES"s,
"SCHEDULEOFRATES"s,
"IfcCountMeasure"s,
"IfcCoveringTypeEnum"s,
"CEILING"s,
"FLOORING"s,
"CLADDING"s,
"ROOFING"s,
"INSULATION"s,
"MEMBRANE"s,
"SLEEVING"s,
"WRAPPING"s,
"IfcCurrencyEnum"s,
"AED"s,
"AES"s,
"ATS"s,
"AUD"s,
"BBD"s,
"BEG"s,
"BGL"s,
"BHD"s,
"BMD"s,
"BND"s,
"BRL"s,
"BSD"s,
"BWP"s,
"BZD"s,
"CAD"s,
"CBD"s,
"CHF"s,
"CLP"s,
"CNY"s,
"CYS"s,
"CZK"s,
"DDP"s,
"DEM"s,
"DKK"s,
"EGL"s,
"EST"s,
"EUR"s,
"FAK"s,
"FIM"s,
"FJD"s,
"FKP"s,
"FRF"s,
"GBP"s,
"GIP"s,
"GMD"s,
"GRX"s,
"HKD"s,
"HUF"s,
"ICK"s,
"IDR"s,
"ILS"s,
"INR"s,
"IRP"s,
"ITL"s,
"JMD"s,
"JOD"s,
"JPY"s,
"KES"s,
"KRW"s,
"KWD"s,
"KYD"s,
"LKR"s,
"LUF"s,
"MTL"s,
"MUR"s,
"MXN"s,
"MYR"s,
"NLG"s,
"NZD"s,
"OMR"s,
"PGK"s,
"PHP"s,
"PKR"s,
"PLN"s,
"PTN"s,
"QAR"s,
"RUR"s,
"SAR"s,
"SCR"s,
"SEK"s,
"SGD"s,
"SKP"s,
"THB"s,
"TRL"s,
"TTD"s,
"TWD"s,
"USD"s,
"VEB"s,
"VND"s,
"XEU"s,
"ZAR"s,
"ZWD"s,
"NOK"s,
"IfcCurtainWallTypeEnum"s,
"IfcCurvatureMeasure"s,
"IfcDamperTypeEnum"s,
"CONTROLDAMPER"s,
"FIREDAMPER"s,
"SMOKEDAMPER"s,
"FIRESMOKEDAMPER"s,
"BACKDRAFTDAMPER"s,
"RELIEFDAMPER"s,
"BLASTDAMPER"s,
"GRAVITYDAMPER"s,
"GRAVITYRELIEFDAMPER"s,
"BALANCINGDAMPER"s,
"FUMEHOODEXHAUST"s,
"IfcDataOriginEnum"s,
"MEASURED"s,
"PREDICTED"s,
"SIMULATED"s,
"IfcDayInMonthNumber"s,
"IfcDaylightSavingHour"s,
"IfcDerivedUnitEnum"s,
"ANGULARVELOCITYUNIT"s,
"COMPOUNDPLANEANGLEUNIT"s,
"DYNAMICVISCOSITYUNIT"s,
"HEATFLUXDENSITYUNIT"s,
"INTEGERCOUNTRATEUNIT"s,
"ISOTHERMALMOISTURECAPACITYUNIT"s,
"KINEMATICVISCOSITYUNIT"s,
"LINEARVELOCITYUNIT"s,
"MASSDENSITYUNIT"s,
"MASSFLOWRATEUNIT"s,
"MOISTUREDIFFUSIVITYUNIT"s,
"MOLECULARWEIGHTUNIT"s,
"SPECIFICHEATCAPACITYUNIT"s,
"THERMALADMITTANCEUNIT"s,
"THERMALCONDUCTANCEUNIT"s,
"THERMALRESISTANCEUNIT"s,
"THERMALTRANSMITTANCEUNIT"s,
"VAPORPERMEABILITYUNIT"s,
"VOLUMETRICFLOWRATEUNIT"s,
"ROTATIONALFREQUENCYUNIT"s,
"TORQUEUNIT"s,
"MOMENTOFINERTIAUNIT"s,
"LINEARMOMENTUNIT"s,
"LINEARFORCEUNIT"s,
"PLANARFORCEUNIT"s,
"MODULUSOFELASTICITYUNIT"s,
"SHEARMODULUSUNIT"s,
"LINEARSTIFFNESSUNIT"s,
"ROTATIONALSTIFFNESSUNIT"s,
"MODULUSOFSUBGRADEREACTIONUNIT"s,
"ACCELERATIONUNIT"s,
"CURVATUREUNIT"s,
"HEATINGVALUEUNIT"s,
"IONCONCENTRATIONUNIT"s,
"LUMINOUSINTENSITYDISTRIBUTIONUNIT"s,
"MASSPERLENGTHUNIT"s,
"MODULUSOFLINEARSUBGRADEREACTIONUNIT"s,
"MODULUSOFROTATIONALSUBGRADEREACTIONUNIT"s,
"PHUNIT"s,
"ROTATIONALMASSUNIT"s,
"SECTIONAREAINTEGRALUNIT"s,
"SECTIONMODULUSUNIT"s,
"SOUNDPOWERUNIT"s,
"SOUNDPRESSUREUNIT"s,
"TEMPERATUREGRADIENTUNIT"s,
"THERMALEXPANSIONCOEFFICIENTUNIT"s,
"WARPINGCONSTANTUNIT"s,
"WARPINGMOMENTUNIT"s,
"IfcDescriptiveMeasure"s,
"IfcDimensionCount"s,
"IfcDimensionExtentUsage"s,
"ORIGIN"s,
"TARGET"s,
"IfcDirectionSenseEnum"s,
"POSITIVE"s,
"NEGATIVE"s,
"IfcDistributionChamberElementTypeEnum"s,
"FORMEDDUCT"s,
"INSPECTIONCHAMBER"s,
"INSPECTIONPIT"s,
"MANHOLE"s,
"METERCHAMBER"s,
"SUMP"s,
"TRENCH"s,
"VALVECHAMBER"s,
"IfcDocumentConfidentialityEnum"s,
"PUBLIC"s,
"RESTRICTED"s,
"CONFIDENTIAL"s,
"PERSONAL"s,
"IfcDocumentStatusEnum"s,
"DRAFT"s,
"FINALDRAFT"s,
"FINAL"s,
"REVISION"s,
"IfcDoorPanelOperationEnum"s,
"SWINGING"s,
"DOUBLE_ACTING"s,
"SLIDING"s,
"FOLDING"s,
"REVOLVING"s,
"ROLLINGUP"s,
"IfcDoorPanelPositionEnum"s,
"LEFT"s,
"MIDDLE"s,
"RIGHT"s,
"IfcDoorStyleConstructionEnum"s,
"ALUMINIUM"s,
"HIGH_GRADE_STEEL"s,
"STEEL"s,
"WOOD"s,
"ALUMINIUM_WOOD"s,
"ALUMINIUM_PLASTIC"s,
"PLASTIC"s,
"IfcDoorStyleOperationEnum"s,
"SINGLE_SWING_LEFT"s,
"SINGLE_SWING_RIGHT"s,
"DOUBLE_DOOR_SINGLE_SWING"s,
"DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_LEFT"s,
"DOUBLE_DOOR_SINGLE_SWING_OPPOSITE_RIGHT"s,
"DOUBLE_SWING_LEFT"s,
"DOUBLE_SWING_RIGHT"s,
"DOUBLE_DOOR_DOUBLE_SWING"s,
"SLIDING_TO_LEFT"s,
"SLIDING_TO_RIGHT"s,
"DOUBLE_DOOR_SLIDING"s,
"FOLDING_TO_LEFT"s,
"FOLDING_TO_RIGHT"s,
"DOUBLE_DOOR_FOLDING"s,
"IfcDoseEquivalentMeasure"s,
"IfcDuctFittingTypeEnum"s,
"CONNECTOR"s,
"ENTRY"s,
"EXIT"s,
"JUNCTION"s,
"OBSTRUCTION"s,
"TRANSITION"s,
"IfcDuctSegmentTypeEnum"s,
"RIGIDSEGMENT"s,
"FLEXIBLESEGMENT"s,
"IfcDuctSilencerTypeEnum"s,
"FLATOVAL"s,
"RECTANGULAR"s,
"ROUND"s,
"IfcDynamicViscosityMeasure"s,
"IfcElectricApplianceTypeEnum"s,
"COMPUTER"s,
"DIRECTWATERHEATER"s,
"DISHWASHER"s,
"ELECTRICCOOKER"s,
"ELECTRICHEATER"s,
"FACSIMILE"s,
"FREESTANDINGFAN"s,
"FREEZER"s,
"FRIDGE_FREEZER"s,
"HANDDRYER"s,
"INDIRECTWATERHEATER"s,
"MICROWAVE"s,
"PHOTOCOPIER"s,
"PRINTER"s,
"REFRIGERATOR"s,
"RADIANTHEATER"s,
"SCANNER"s,
"TELEPHONE"s,
"TUMBLEDRYER"s,
"TV"s,
"VENDINGMACHINE"s,
"WASHINGMACHINE"s,
"WATERHEATER"s,
"WATERCOOLER"s,
"IfcElectricCapacitanceMeasure"s,
"IfcElectricChargeMeasure"s,
"IfcElectricConductanceMeasure"s,
"IfcElectricCurrentEnum"s,
"ALTERNATING"s,
"DIRECT"s,
"IfcElectricCurrentMeasure"s,
"IfcElectricDistributionPointFunctionEnum"s,
"ALARMPANEL"s,
"CONSUMERUNIT"s,
"CONTROLPANEL"s,
"DISTRIBUTIONBOARD"s,
"GASDETECTORPANEL"s,
"INDICATORPANEL"s,
"MIMICPANEL"s,
"MOTORCONTROLCENTRE"s,
"SWITCHBOARD"s,
"IfcElectricFlowStorageDeviceTypeEnum"s,
"BATTERY"s,
"CAPACITORBANK"s,
"HARMONICFILTER"s,
"INDUCTORBANK"s,
"UPS"s,
"IfcElectricGeneratorTypeEnum"s,
"IfcElectricHeaterTypeEnum"s,
"ELECTRICPOINTHEATER"s,
"ELECTRICCABLEHEATER"s,
"ELECTRICMATHEATER"s,
"IfcElectricMotorTypeEnum"s,
"DC"s,
"INDUCTION"s,
"POLYPHASE"s,
"RELUCTANCESYNCHRONOUS"s,
"SYNCHRONOUS"s,
"IfcElectricResistanceMeasure"s,
"IfcElectricTimeControlTypeEnum"s,
"TIMECLOCK"s,
"TIMEDELAY"s,
"RELAY"s,
"IfcElectricVoltageMeasure"s,
"IfcElementAssemblyTypeEnum"s,
"ACCESSORY_ASSEMBLY"s,
"ARCH"s,
"BEAM_GRID"s,
"BRACED_FRAME"s,
"GIRDER"s,
"REINFORCEMENT_UNIT"s,
"RIGID_FRAME"s,
"SLAB_FIELD"s,
"TRUSS"s,
"IfcElementCompositionEnum"s,
"COMPLEX"s,
"ELEMENT"s,
"PARTIAL"s,
"IfcEnergyMeasure"s,
"IfcEnergySequenceEnum"s,
"PRIMARY"s,
"SECONDARY"s,
"TERTIARY"s,
"AUXILIARY"s,
"IfcEnvironmentalImpactCategoryEnum"s,
"COMBINEDVALUE"s,
"DISPOSAL"s,
"EXTRACTION"s,
"INSTALLATION"s,
"MANUFACTURE"s,
"TRANSPORTATION"s,
"IfcEvaporativeCoolerTypeEnum"s,
"DIRECTEVAPORATIVERANDOMMEDIAAIRCOOLER"s,
"DIRECTEVAPORATIVERIGIDMEDIAAIRCOOLER"s,
"DIRECTEVAPORATIVESLINGERSPACKAGEDAIRCOOLER"s,
"DIRECTEVAPORATIVEPACKAGEDROTARYAIRCOOLER"s,
"DIRECTEVAPORATIVEAIRWASHER"s,
"INDIRECTEVAPORATIVEPACKAGEAIRCOOLER"s,
"INDIRECTEVAPORATIVEWETCOIL"s,
"INDIRECTEVAPORATIVECOOLINGTOWERORCOILCOOLER"s,
"INDIRECTDIRECTCOMBINATION"s,
"IfcEvaporatorTypeEnum"s,
"DIRECTEXPANSIONSHELLANDTUBE"s,
"DIRECTEXPANSIONTUBEINTUBE"s,
"DIRECTEXPANSIONBRAZEDPLATE"s,
"FLOODEDSHELLANDTUBE"s,
"SHELLANDCOIL"s,
"IfcFanTypeEnum"s,
"CENTRIFUGALFORWARDCURVED"s,
"CENTRIFUGALRADIAL"s,
"CENTRIFUGALBACKWARDINCLINEDCURVED"s,
"CENTRIFUGALAIRFOIL"s,
"TUBEAXIAL"s,
"VANEAXIAL"s,
"PROPELLORAXIAL"s,
"IfcFilterTypeEnum"s,
"AIRPARTICLEFILTER"s,
"ODORFILTER"s,
"OILFILTER"s,
"STRAINER"s,
"WATERFILTER"s,
"IfcFireSuppressionTerminalTypeEnum"s,
"BREECHINGINLET"s,
"FIREHYDRANT"s,
"HOSEREEL"s,
"SPRINKLER"s,
"SPRINKLERDEFLECTOR"s,
"IfcFlowDirectionEnum"s,
"SOURCE"s,
"SINK"s,
"SOURCEANDSINK"s,
"IfcFlowInstrumentTypeEnum"s,
"PRESSUREGAUGE"s,
"THERMOMETER"s,
"AMMETER"s,
"FREQUENCYMETER"s,
"POWERFACTORMETER"s,
"PHASEANGLEMETER"s,
"VOLTMETER_PEAK"s,
"VOLTMETER_RMS"s,
"IfcFlowMeterTypeEnum"s,
"ELECTRICMETER"s,
"ENERGYMETER"s,
"FLOWMETER"s,
"GASMETER"s,
"OILMETER"s,
"WATERMETER"s,
"IfcFontStyle"s,
"IfcFontVariant"s,
"IfcFontWeight"s,
"IfcFootingTypeEnum"s,
"FOOTING_BEAM"s,
"PAD_FOOTING"s,
"PILE_CAP"s,
"STRIP_FOOTING"s,
"IfcForceMeasure"s,
"IfcFrequencyMeasure"s,
"IfcGasTerminalTypeEnum"s,
"GASAPPLIANCE"s,
"GASBOOSTER"s,
"GASBURNER"s,
"IfcGeometricProjectionEnum"s,
"GRAPH_VIEW"s,
"SKETCH_VIEW"s,
"MODEL_VIEW"s,
"PLAN_VIEW"s,
"REFLECTED_PLAN_VIEW"s,
"SECTION_VIEW"s,
"ELEVATION_VIEW"s,
"IfcGlobalOrLocalEnum"s,
"GLOBAL_COORDS"s,
"LOCAL_COORDS"s,
"IfcGloballyUniqueId"s,
"IfcHeatExchangerTypeEnum"s,
"PLATE"s,
"SHELLANDTUBE"s,
"IfcHeatFluxDensityMeasure"s,
"IfcHeatingValueMeasure"s,
"IfcHourInDay"s,
"IfcHumidifierTypeEnum"s,
"STEAMINJECTION"s,
"ADIABATICAIRWASHER"s,
"ADIABATICPAN"s,
"ADIABATICWETTEDELEMENT"s,
"ADIABATICATOMIZING"s,
"ADIABATICULTRASONIC"s,
"ADIABATICRIGIDMEDIA"s,
"ADIABATICCOMPRESSEDAIRNOZZLE"s,
"ASSISTEDELECTRIC"s,
"ASSISTEDNATURALGAS"s,
"ASSISTEDPROPANE"s,
"ASSISTEDBUTANE"s,
"ASSISTEDSTEAM"s,
"IfcIdentifier"s,
"IfcIlluminanceMeasure"s,
"IfcInductanceMeasure"s,
"IfcInteger"s,
"IfcIntegerCountRateMeasure"s,
"IfcInternalOrExternalEnum"s,
"INTERNAL"s,
"EXTERNAL"s,
"IfcInventoryTypeEnum"s,
"ASSETINVENTORY"s,
"SPACEINVENTORY"s,
"FURNITUREINVENTORY"s,
"IfcIonConcentrationMeasure"s,
"IfcIsothermalMoistureCapacityMeasure"s,
"IfcJunctionBoxTypeEnum"s,
"IfcKinematicViscosityMeasure"s,
"IfcLabel"s,
"IfcLampTypeEnum"s,
"COMPACTFLUORESCENT"s,
"FLUORESCENT"s,
"HIGHPRESSUREMERCURY"s,
"HIGHPRESSURESODIUM"s,
"METALHALIDE"s,
"TUNGSTENFILAMENT"s,
"IfcLayerSetDirectionEnum"s,
"AXIS1"s,
"AXIS2"s,
"AXIS3"s,
"IfcLengthMeasure"s,
"IfcLightDistributionCurveEnum"s,
"TYPE_A"s,
"TYPE_B"s,
"TYPE_C"s,
"IfcLightEmissionSourceEnum"s,
"LIGHTEMITTINGDIODE"s,
"LOWPRESSURESODIUM"s,
"LOWVOLTAGEHALOGEN"s,
"MAINVOLTAGEHALOGEN"s,
"IfcLightFixtureTypeEnum"s,
"POINTSOURCE"s,
"DIRECTIONSOURCE"s,
"IfcLinearForceMeasure"s,
"IfcLinearMomentMeasure"s,
"IfcLinearStiffnessMeasure"s,
"IfcLinearVelocityMeasure"s,
"IfcLoadGroupTypeEnum"s,
"LOAD_GROUP"s,
"LOAD_CASE"s,
"LOAD_COMBINATION_GROUP"s,
"LOAD_COMBINATION"s,
"IfcLogical"s,
"IfcLogicalOperatorEnum"s,
"LOGICALAND"s,
"LOGICALOR"s,
"IfcLuminousFluxMeasure"s,
"IfcLuminousIntensityDistributionMeasure"s,
"IfcLuminousIntensityMeasure"s,
"IfcMagneticFluxDensityMeasure"s,
"IfcMagneticFluxMeasure"s,
"IfcMassDensityMeasure"s,
"IfcMassFlowRateMeasure"s,
"IfcMassMeasure"s,
"IfcMassPerLengthMeasure"s,
"IfcMemberTypeEnum"s,
"BRACE"s,
"CHORD"s,
"COLLAR"s,
"MEMBER"s,
"MULLION"s,
"POST"s,
"PURLIN"s,
"RAFTER"s,
"STRINGER"s,
"STRUT"s,
"STUD"s,
"IfcMinuteInHour"s,
"IfcModulusOfElasticityMeasure"s,
"IfcModulusOfLinearSubgradeReactionMeasure"s,
"IfcModulusOfRotationalSubgradeReactionMeasure"s,
"IfcModulusOfSubgradeReactionMeasure"s,
"IfcMoistureDiffusivityMeasure"s,
"IfcMolecularWeightMeasure"s,
"IfcMomentOfInertiaMeasure"s,
"IfcMonetaryMeasure"s,
"IfcMonthInYearNumber"s,
"IfcMotorConnectionTypeEnum"s,
"BELTDRIVE"s,
"COUPLING"s,
"DIRECTDRIVE"s,
"IfcNullStyle"s,
"NULL"s,
"IfcNumericMeasure"s,
"IfcObjectTypeEnum"s,
"PRODUCT"s,
"PROCESS"s,
"CONTROL"s,
"RESOURCE"s,
"ACTOR"s,
"GROUP"s,
"PROJECT"s,
"IfcObjectiveEnum"s,
"CODECOMPLIANCE"s,
"DESIGNINTENT"s,
"HEALTHANDSAFETY"s,
"REQUIREMENT"s,
"SPECIFICATION"s,
"TRIGGERCONDITION"s,
"IfcOccupantTypeEnum"s,
"ASSIGNEE"s,
"ASSIGNOR"s,
"LESSEE"s,
"LESSOR"s,
"LETTINGAGENT"s,
"OWNER"s,
"TENANT"s,
"IfcOutletTypeEnum"s,
"AUDIOVISUALOUTLET"s,
"COMMUNICATIONSOUTLET"s,
"POWEROUTLET"s,
"IfcPHMeasure"s,
"IfcParameterValue"s,
"IfcPermeableCoveringOperationEnum"s,
"GRILL"s,
"LOUVER"s,
"SCREEN"s,
"IfcPhysicalOrVirtualEnum"s,
"PHYSICAL"s,
"VIRTUAL"s,
"IfcPileConstructionEnum"s,
"CAST_IN_PLACE"s,
"COMPOSITE"s,
"PRECAST_CONCRETE"s,
"PREFAB_STEEL"s,
"IfcPileTypeEnum"s,
"COHESION"s,
"FRICTION"s,
"SUPPORT"s,
"IfcPipeFittingTypeEnum"s,
"IfcPipeSegmentTypeEnum"s,
"GUTTER"s,
"SPOOL"s,
"IfcPlanarForceMeasure"s,
"IfcPlaneAngleMeasure"s,
"IfcPlateTypeEnum"s,
"CURTAIN_PANEL"s,
"SHEET"s,
"IfcPositiveLengthMeasure"s,
"IfcPositivePlaneAngleMeasure"s,
"IfcPowerMeasure"s,
"IfcPresentableText"s,
"IfcPressureMeasure"s,
"IfcProcedureTypeEnum"s,
"ADVICE_CAUTION"s,
"ADVICE_NOTE"s,
"ADVICE_WARNING"s,
"CALIBRATION"s,
"DIAGNOSTIC"s,
"SHUTDOWN"s,
"STARTUP"s,
"IfcProfileTypeEnum"s,
"CURVE"s,
"AREA"s,
"IfcProjectOrderRecordTypeEnum"s,
"CHANGE"s,
"MAINTENANCE"s,
"MOVE"s,
"PURCHASE"s,
"WORK"s,
"IfcProjectOrderTypeEnum"s,
"CHANGEORDER"s,
"MAINTENANCEWORKORDER"s,
"MOVEORDER"s,
"PURCHASEORDER"s,
"WORKORDER"s,
"IfcProjectedOrTrueLengthEnum"s,
"PROJECTED_LENGTH"s,
"TRUE_LENGTH"s,
"IfcPropertySourceEnum"s,
"DESIGN"s,
"DESIGNMAXIMUM"s,
"DESIGNMINIMUM"s,
"ASBUILT"s,
"COMMISSIONING"s,
"NOTKNOWN"s,
"IfcProtectiveDeviceTypeEnum"s,
"FUSEDISCONNECTOR"s,
"CIRCUITBREAKER"s,
"EARTHFAILUREDEVICE"s,
"RESIDUALCURRENTCIRCUITBREAKER"s,
"RESIDUALCURRENTSWITCH"s,
"VARISTOR"s,
"IfcPumpTypeEnum"s,
"CIRCULATOR"s,
"ENDSUCTION"s,
"SPLITCASE"s,
"VERTICALINLINE"s,
"VERTICALTURBINE"s,
"IfcRadioActivityMeasure"s,
"IfcRailingTypeEnum"s,
"HANDRAIL"s,
"GUARDRAIL"s,
"BALUSTRADE"s,
"IfcRampFlightTypeEnum"s,
"STRAIGHT"s,
"SPIRAL"s,
"IfcRampTypeEnum"s,
"STRAIGHT_RUN_RAMP"s,
"TWO_STRAIGHT_RUN_RAMP"s,
"QUARTER_TURN_RAMP"s,
"TWO_QUARTER_TURN_RAMP"s,
"HALF_TURN_RAMP"s,
"SPIRAL_RAMP"s,
"IfcRatioMeasure"s,
"IfcReal"s,
"IfcReflectanceMethodEnum"s,
"BLINN"s,
"FLAT"s,
"GLASS"s,
"MATT"s,
"METAL"s,
"MIRROR"s,
"PHONG"s,
"STRAUSS"s,
"IfcReinforcingBarRoleEnum"s,
"MAIN"s,
"SHEAR"s,
"LIGATURE"s,
"PUNCHING"s,
"EDGE"s,
"RING"s,
"IfcReinforcingBarSurfaceEnum"s,
"PLAIN"s,
"TEXTURED"s,
"IfcResourceConsumptionEnum"s,
"CONSUMED"s,
"PARTIALLYCONSUMED"s,
"NOTCONSUMED"s,
"OCCUPIED"s,
"PARTIALLYOCCUPIED"s,
"NOTOCCUPIED"s,
"IfcRibPlateDirectionEnum"s,
"DIRECTION_X"s,
"DIRECTION_Y"s,
"IfcRoleEnum"s,
"SUPPLIER"s,
"MANUFACTURER"s,
"CONTRACTOR"s,
"SUBCONTRACTOR"s,
"ARCHITECT"s,
"STRUCTURALENGINEER"s,
"COSTENGINEER"s,
"CLIENT"s,
"BUILDINGOWNER"s,
"BUILDINGOPERATOR"s,
"MECHANICALENGINEER"s,
"ELECTRICALENGINEER"s,
"PROJECTMANAGER"s,
"FACILITIESMANAGER"s,
"CIVILENGINEER"s,
"COMISSIONINGENGINEER"s,
"ENGINEER"s,
"CONSULTANT"s,
"CONSTRUCTIONMANAGER"s,
"FIELDCONSTRUCTIONMANAGER"s,
"RESELLER"s,
"IfcRoofTypeEnum"s,
"FLAT_ROOF"s,
"SHED_ROOF"s,
"GABLE_ROOF"s,
"HIP_ROOF"s,
"HIPPED_GABLE_ROOF"s,
"GAMBREL_ROOF"s,
"MANSARD_ROOF"s,
"BARREL_ROOF"s,
"RAINBOW_ROOF"s,
"BUTTERFLY_ROOF"s,
"PAVILION_ROOF"s,
"DOME_ROOF"s,
"FREEFORM"s,
"IfcRotationalFrequencyMeasure"s,
"IfcRotationalMassMeasure"s,
"IfcRotationalStiffnessMeasure"s,
"IfcSIPrefix"s,
"EXA"s,
"PETA"s,
"TERA"s,
"GIGA"s,
"MEGA"s,
"KILO"s,
"HECTO"s,
"DECA"s,
"DECI"s,
"CENTI"s,
"MILLI"s,
"MICRO"s,
"NANO"s,
"PICO"s,
"FEMTO"s,
"ATTO"s,
"IfcSIUnitName"s,
"AMPERE"s,
"BECQUEREL"s,
"CANDELA"s,
"COULOMB"s,
"CUBIC_METRE"s,
"DEGREE_CELSIUS"s,
"FARAD"s,
"GRAM"s,
"GRAY"s,
"HENRY"s,
"HERTZ"s,
"JOULE"s,
"KELVIN"s,
"LUMEN"s,
"LUX"s,
"METRE"s,
"MOLE"s,
"NEWTON"s,
"OHM"s,
"PASCAL"s,
"RADIAN"s,
"SECOND"s,
"SIEMENS"s,
"SIEVERT"s,
"SQUARE_METRE"s,
"STERADIAN"s,
"TESLA"s,
"VOLT"s,
"WATT"s,
"WEBER"s,
"IfcSanitaryTerminalTypeEnum"s,
"BATH"s,
"BIDET"s,
"CISTERN"s,
"SHOWER"s,
"SANITARYFOUNTAIN"s,
"TOILETPAN"s,
"URINAL"s,
"WASHHANDBASIN"s,
"WCSEAT"s,
"IfcSecondInMinute"s,
"IfcSectionModulusMeasure"s,
"IfcSectionTypeEnum"s,
"UNIFORM"s,
"TAPERED"s,
"IfcSectionalAreaIntegralMeasure"s,
"IfcSensorTypeEnum"s,
"CO2SENSOR"s,
"FIRESENSOR"s,
"FLOWSENSOR"s,
"GASSENSOR"s,
"HEATSENSOR"s,
"HUMIDITYSENSOR"s,
"LIGHTSENSOR"s,
"MOISTURESENSOR"s,
"MOVEMENTSENSOR"s,
"PRESSURESENSOR"s,
"SMOKESENSOR"s,
"SOUNDSENSOR"s,
"TEMPERATURESENSOR"s,
"IfcSequenceEnum"s,
"START_START"s,
"START_FINISH"s,
"FINISH_START"s,
"FINISH_FINISH"s,
"IfcServiceLifeFactorTypeEnum"s,
"A_QUALITYOFCOMPONENTS"s,
"B_DESIGNLEVEL"s,
"C_WORKEXECUTIONLEVEL"s,
"D_INDOORENVIRONMENT"s,
"E_OUTDOORENVIRONMENT"s,
"F_INUSECONDITIONS"s,
"G_MAINTENANCELEVEL"s,
"IfcServiceLifeTypeEnum"s,
"ACTUALSERVICELIFE"s,
"EXPECTEDSERVICELIFE"s,
"OPTIMISTICREFERENCESERVICELIFE"s,
"PESSIMISTICREFERENCESERVICELIFE"s,
"REFERENCESERVICELIFE"s,
"IfcShearModulusMeasure"s,
"IfcSlabTypeEnum"s,
"FLOOR"s,
"ROOF"s,
"LANDING"s,
"BASESLAB"s,
"IfcSolidAngleMeasure"s,
"IfcSoundPowerMeasure"s,
"IfcSoundPressureMeasure"s,
"IfcSoundScaleEnum"s,
"DBA"s,
"DBB"s,
"DBC"s,
"NC"s,
"NR"s,
"IfcSpaceHeaterTypeEnum"s,
"SECTIONALRADIATOR"s,
"PANELRADIATOR"s,
"TUBULARRADIATOR"s,
"CONVECTOR"s,
"BASEBOARDHEATER"s,
"FINNEDTUBEUNIT"s,
"UNITHEATER"s,
"IfcSpaceTypeEnum"s,
"IfcSpecificHeatCapacityMeasure"s,
"IfcSpecularExponent"s,
"IfcSpecularRoughness"s,
"IfcStackTerminalTypeEnum"s,
"BIRDCAGE"s,
"COWL"s,
"RAINWATERHOPPER"s,
"IfcStairFlightTypeEnum"s,
"WINDER"s,
"CURVED"s,
"IfcStairTypeEnum"s,
"STRAIGHT_RUN_STAIR"s,
"TWO_STRAIGHT_RUN_STAIR"s,
"QUARTER_WINDING_STAIR"s,
"QUARTER_TURN_STAIR"s,
"HALF_WINDING_STAIR"s,
"HALF_TURN_STAIR"s,
"TWO_QUARTER_WINDING_STAIR"s,
"TWO_QUARTER_TURN_STAIR"s,
"THREE_QUARTER_WINDING_STAIR"s,
"THREE_QUARTER_TURN_STAIR"s,
"SPIRAL_STAIR"s,
"DOUBLE_RETURN_STAIR"s,
"CURVED_RUN_STAIR"s,
"TWO_CURVED_RUN_STAIR"s,
"IfcStateEnum"s,
"READWRITE"s,
"READONLY"s,
"LOCKED"s,
"READWRITELOCKED"s,
"READONLYLOCKED"s,
"IfcStructuralCurveTypeEnum"s,
"RIGID_JOINED_MEMBER"s,
"PIN_JOINED_MEMBER"s,
"CABLE"s,
"TENSION_MEMBER"s,
"COMPRESSION_MEMBER"s,
"IfcStructuralSurfaceTypeEnum"s,
"BENDING_ELEMENT"s,
"MEMBRANE_ELEMENT"s,
"SHELL"s,
"IfcSurfaceSide"s,
"BOTH"s,
"IfcSurfaceTextureEnum"s,
"BUMP"s,
"OPACITY"s,
"REFLECTION"s,
"SELFILLUMINATION"s,
"SHININESS"s,
"SPECULAR"s,
"TEXTURE"s,
"TRANSPARENCYMAP"s,
"IfcSwitchingDeviceTypeEnum"s,
"CONTACTOR"s,
"EMERGENCYSTOP"s,
"STARTER"s,
"SWITCHDISCONNECTOR"s,
"TOGGLESWITCH"s,
"IfcTankTypeEnum"s,
"PREFORMED"s,
"SECTIONAL"s,
"EXPANSION"s,
"PRESSUREVESSEL"s,
"IfcTemperatureGradientMeasure"s,
"IfcTendonTypeEnum"s,
"STRAND"s,
"WIRE"s,
"BAR"s,
"COATED"s,
"IfcText"s,
"IfcTextAlignment"s,
"IfcTextDecoration"s,
"IfcTextFontName"s,
"IfcTextPath"s,
"UP"s,
"DOWN"s,
"IfcTextTransformation"s,
"IfcThermalAdmittanceMeasure"s,
"IfcThermalConductivityMeasure"s,
"IfcThermalExpansionCoefficientMeasure"s,
"IfcThermalLoadSourceEnum"s,
"PEOPLE"s,
"LIGHTING"s,
"EQUIPMENT"s,
"VENTILATIONINDOORAIR"s,
"VENTILATIONOUTSIDEAIR"s,
"RECIRCULATEDAIR"s,
"EXHAUSTAIR"s,
"AIREXCHANGERATE"s,
"DRYBULBTEMPERATURE"s,
"RELATIVEHUMIDITY"s,
"INFILTRATION"s,
"IfcThermalLoadTypeEnum"s,
"SENSIBLE"s,
"LATENT"s,
"RADIANT"s,
"IfcThermalResistanceMeasure"s,
"IfcThermalTransmittanceMeasure"s,
"IfcThermodynamicTemperatureMeasure"s,
"IfcTimeMeasure"s,
"IfcTimeSeriesDataTypeEnum"s,
"CONTINUOUS"s,
"DISCRETE"s,
"DISCRETEBINARY"s,
"PIECEWISEBINARY"s,
"PIECEWISECONSTANT"s,
"PIECEWISECONTINUOUS"s,
"IfcTimeSeriesScheduleTypeEnum"s,
"ANNUAL"s,
"MONTHLY"s,
"WEEKLY"s,
"DAILY"s,
"IfcTimeStamp"s,
"IfcTorqueMeasure"s,
"IfcTransformerTypeEnum"s,
"FREQUENCY"s,
"VOLTAGE"s,
"IfcTransitionCode"s,
"DISCONTINUOUS"s,
"CONTSAMEGRADIENT"s,
"CONTSAMEGRADIENTSAMECURVATURE"s,
"IfcTransportElementTypeEnum"s,
"ELEVATOR"s,
"ESCALATOR"s,
"MOVINGWALKWAY"s,
"IfcTrimmingPreference"s,
"CARTESIAN"s,
"PARAMETER"s,
"IfcTubeBundleTypeEnum"s,
"FINNED"s,
"IfcUnitEnum"s,
"ABSORBEDDOSEUNIT"s,
"AMOUNTOFSUBSTANCEUNIT"s,
"AREAUNIT"s,
"DOSEEQUIVALENTUNIT"s,
"ELECTRICCAPACITANCEUNIT"s,
"ELECTRICCHARGEUNIT"s,
"ELECTRICCONDUCTANCEUNIT"s,
"ELECTRICCURRENTUNIT"s,
"ELECTRICRESISTANCEUNIT"s,
"ELECTRICVOLTAGEUNIT"s,
"ENERGYUNIT"s,
"FORCEUNIT"s,
"FREQUENCYUNIT"s,
"ILLUMINANCEUNIT"s,
"INDUCTANCEUNIT"s,
"LENGTHUNIT"s,
"LUMINOUSFLUXUNIT"s,
"LUMINOUSINTENSITYUNIT"s,
"MAGNETICFLUXDENSITYUNIT"s,
"MAGNETICFLUXUNIT"s,
"MASSUNIT"s,
"PLANEANGLEUNIT"s,
"POWERUNIT"s,
"PRESSUREUNIT"s,
"RADIOACTIVITYUNIT"s,
"SOLIDANGLEUNIT"s,
"THERMODYNAMICTEMPERATUREUNIT"s,
"TIMEUNIT"s,
"VOLUMEUNIT"s,
"IfcUnitaryEquipmentTypeEnum"s,
"AIRHANDLER"s,
"AIRCONDITIONINGUNIT"s,
"SPLITSYSTEM"s,
"ROOFTOPUNIT"s,
"IfcValveTypeEnum"s,
"AIRRELEASE"s,
"ANTIVACUUM"s,
"CHANGEOVER"s,
"CHECK"s,
"DIVERTING"s,
"DRAWOFFCOCK"s,
"DOUBLECHECK"s,
"DOUBLEREGULATING"s,
"FAUCET"s,
"FLUSHING"s,
"GASCOCK"s,
"GASTAP"s,
"ISOLATING"s,
"MIXING"s,
"PRESSUREREDUCING"s,
"PRESSURERELIEF"s,
"REGULATING"s,
"SAFETYCUTOFF"s,
"STEAMTRAP"s,
"STOPCOCK"s,
"IfcVaporPermeabilityMeasure"s,
"IfcVibrationIsolatorTypeEnum"s,
"COMPRESSION"s,
"SPRING"s,
"IfcVolumeMeasure"s,
"IfcVolumetricFlowRateMeasure"s,
"IfcWallTypeEnum"s,
"STANDARD"s,
"POLYGONAL"s,
"ELEMENTEDWALL"s,
"PLUMBINGWALL"s,
"IfcWarpingConstantMeasure"s,
"IfcWarpingMomentMeasure"s,
"IfcWasteTerminalTypeEnum"s,
"FLOORTRAP"s,
"FLOORWASTE"s,
"GULLYSUMP"s,
"GULLYTRAP"s,
"GREASEINTERCEPTOR"s,
"OILINTERCEPTOR"s,
"PETROLINTERCEPTOR"s,
"ROOFDRAIN"s,
"WASTEDISPOSALUNIT"s,
"WASTETRAP"s,
"IfcWindowPanelOperationEnum"s,
"SIDEHUNGRIGHTHAND"s,
"SIDEHUNGLEFTHAND"s,
"TILTANDTURNRIGHTHAND"s,
"TILTANDTURNLEFTHAND"s,
"TOPHUNG"s,
"BOTTOMHUNG"s,
"PIVOTHORIZONTAL"s,
"PIVOTVERTICAL"s,
"SLIDINGHORIZONTAL"s,
"SLIDINGVERTICAL"s,
"REMOVABLECASEMENT"s,
"FIXEDCASEMENT"s,
"OTHEROPERATION"s,
"IfcWindowPanelPositionEnum"s,
"BOTTOM"s,
"TOP"s,
"IfcWindowStyleConstructionEnum"s,
"OTHER_CONSTRUCTION"s,
"IfcWindowStyleOperationEnum"s,
"SINGLE_PANEL"s,
"DOUBLE_PANEL_VERTICAL"s,
"DOUBLE_PANEL_HORIZONTAL"s,
"TRIPLE_PANEL_VERTICAL"s,
"TRIPLE_PANEL_BOTTOM"s,
"TRIPLE_PANEL_TOP"s,
"TRIPLE_PANEL_LEFT"s,
"TRIPLE_PANEL_RIGHT"s,
"TRIPLE_PANEL_HORIZONTAL"s,
"IfcWorkControlTypeEnum"s,
"ACTUAL"s,
"BASELINE"s,
"PLANNED"s,
"IfcYearNumber"s,
"IfcActorRole"s,
"IfcAddress"s,
"IfcApplication"s,
"IfcAppliedValue"s,
"IfcAppliedValueRelationship"s,
"IfcApproval"s,
"IfcApprovalActorRelationship"s,
"IfcApprovalPropertyRelationship"s,
"IfcApprovalRelationship"s,
"IfcBoundaryCondition"s,
"IfcBoundaryEdgeCondition"s,
"IfcBoundaryFaceCondition"s,
"IfcBoundaryNodeCondition"s,
"IfcBoundaryNodeConditionWarping"s,
"IfcCalendarDate"s,
"IfcClassification"s,
"IfcClassificationItem"s,
"IfcClassificationItemRelationship"s,
"IfcClassificationNotation"s,
"IfcClassificationNotationFacet"s,
"IfcColourSpecification"s,
"IfcConnectionGeometry"s,
"IfcConnectionPointGeometry"s,
"IfcConnectionPortGeometry"s,
"IfcConnectionSurfaceGeometry"s,
"IfcConstraint"s,
"IfcConstraintAggregationRelationship"s,
"IfcConstraintClassificationRelationship"s,
"IfcConstraintRelationship"s,
"IfcCoordinatedUniversalTimeOffset"s,
"IfcCostValue"s,
"IfcCurrencyRelationship"s,
"IfcCurveStyleFont"s,
"IfcCurveStyleFontAndScaling"s,
"IfcCurveStyleFontPattern"s,
"IfcDateAndTime"s,
"IfcDerivedUnit"s,
"IfcDerivedUnitElement"s,
"IfcDimensionalExponents"s,
"IfcDocumentElectronicFormat"s,
"IfcDocumentInformation"s,
"IfcDocumentInformationRelationship"s,
"IfcDraughtingCalloutRelationship"s,
"IfcEnvironmentalImpactValue"s,
"IfcExternalReference"s,
"IfcExternallyDefinedHatchStyle"s,
"IfcExternallyDefinedSurfaceStyle"s,
"IfcExternallyDefinedSymbol"s,
"IfcExternallyDefinedTextFont"s,
"IfcGridAxis"s,
"IfcIrregularTimeSeriesValue"s,
"IfcLibraryInformation"s,
"IfcLibraryReference"s,
"IfcLightDistributionData"s,
"IfcLightIntensityDistribution"s,
"IfcLocalTime"s,
"IfcMaterial"s,
"IfcMaterialClassificationRelationship"s,
"IfcMaterialLayer"s,
"IfcMaterialLayerSet"s,
"IfcMaterialLayerSetUsage"s,
"IfcMaterialList"s,
"IfcMaterialProperties"s,
"IfcMeasureWithUnit"s,
"IfcMechanicalMaterialProperties"s,
"IfcMechanicalSteelMaterialProperties"s,
"IfcMetric"s,
"IfcMonetaryUnit"s,
"IfcNamedUnit"s,
"IfcObjectPlacement"s,
"IfcObjective"s,
"IfcOpticalMaterialProperties"s,
"IfcOrganization"s,
"IfcOrganizationRelationship"s,
"IfcOwnerHistory"s,
"IfcPerson"s,
"IfcPersonAndOrganization"s,
"IfcPhysicalQuantity"s,
"IfcPhysicalSimpleQuantity"s,
"IfcPostalAddress"s,
"IfcPreDefinedItem"s,
"IfcPreDefinedSymbol"s,
"IfcPreDefinedTerminatorSymbol"s,
"IfcPreDefinedTextFont"s,
"IfcPresentationLayerAssignment"s,
"IfcPresentationLayerWithStyle"s,
"IfcPresentationStyle"s,
"IfcPresentationStyleAssignment"s,
"IfcProductRepresentation"s,
"IfcProductsOfCombustionProperties"s,
"IfcProfileDef"s,
"IfcProfileProperties"s,
"IfcProperty"s,
"IfcPropertyConstraintRelationship"s,
"IfcPropertyDependencyRelationship"s,
"IfcPropertyEnumeration"s,
"IfcQuantityArea"s,
"IfcQuantityCount"s,
"IfcQuantityLength"s,
"IfcQuantityTime"s,
"IfcQuantityVolume"s,
"IfcQuantityWeight"s,
"IfcReferencesValueDocument"s,
"IfcReinforcementBarProperties"s,
"IfcRelaxation"s,
"IfcRepresentation"s,
"IfcRepresentationContext"s,
"IfcRepresentationItem"s,
"IfcRepresentationMap"s,
"IfcRibPlateProfileProperties"s,
"IfcRoot"s,
"IfcSIUnit"s,
"IfcSectionProperties"s,
"IfcSectionReinforcementProperties"s,
"IfcShapeAspect"s,
"IfcShapeModel"s,
"IfcShapeRepresentation"s,
"IfcSimpleProperty"s,
"IfcStructuralConnectionCondition"s,
"IfcStructuralLoad"s,
"IfcStructuralLoadStatic"s,
"IfcStructuralLoadTemperature"s,
"IfcStyleModel"s,
"IfcStyledItem"s,
"IfcStyledRepresentation"s,
"IfcSurfaceStyle"s,
"IfcSurfaceStyleLighting"s,
"IfcSurfaceStyleRefraction"s,
"IfcSurfaceStyleShading"s,
"IfcSurfaceStyleWithTextures"s,
"IfcSurfaceTexture"s,
"IfcSymbolStyle"s,
"IfcTable"s,
"IfcTableRow"s,
"IfcTelecomAddress"s,
"IfcTextStyle"s,
"IfcTextStyleFontModel"s,
"IfcTextStyleForDefinedFont"s,
"IfcTextStyleTextModel"s,
"IfcTextStyleWithBoxCharacteristics"s,
"IfcTextureCoordinate"s,
"IfcTextureCoordinateGenerator"s,
"IfcTextureMap"s,
"IfcTextureVertex"s,
"IfcThermalMaterialProperties"s,
"IfcTimeSeries"s,
"IfcTimeSeriesReferenceRelationship"s,
"IfcTimeSeriesValue"s,
"IfcTopologicalRepresentationItem"s,
"IfcTopologyRepresentation"s,
"IfcUnitAssignment"s,
"IfcVertex"s,
"IfcVertexBasedTextureMap"s,
"IfcVertexPoint"s,
"IfcVirtualGridIntersection"s,
"IfcWaterProperties"s,
"IfcActorSelect"s,
"IfcAppliedValueSelect"s,
"IfcBoxAlignment"s,
"IfcCharacterStyleSelect"s,
"IfcConditionCriterionSelect"s,
"IfcDateTimeSelect"s,
"IfcDefinedSymbolSelect"s,
"IfcDerivedMeasureValue"s,
"IfcLayeredItem"s,
"IfcLibrarySelect"s,
"IfcLightDistributionDataSourceSelect"s,
"IfcMaterialSelect"s,
"IfcMetricValueSelect"s,
"IfcNormalisedRatioMeasure"s,
"IfcObjectReferenceSelect"s,
"IfcPositiveRatioMeasure"s,
"IfcSimpleValue"s,
"IfcSizeSelect"s,
"IfcSpecularHighlightSelect"s,
"IfcSurfaceStyleElementSelect"s,
"IfcTextFontSelect"s,
"IfcTextStyleSelect"s,
"IfcUnit"s,
"IfcAnnotationOccurrence"s,
"IfcAnnotationSurfaceOccurrence"s,
"IfcAnnotationSymbolOccurrence"s,
"IfcAnnotationTextOccurrence"s,
"IfcArbitraryClosedProfileDef"s,
"IfcArbitraryOpenProfileDef"s,
"IfcArbitraryProfileDefWithVoids"s,
"IfcBlobTexture"s,
"IfcCenterLineProfileDef"s,
"IfcClassificationReference"s,
"IfcColourRgb"s,
"IfcComplexProperty"s,
"IfcCompositeProfileDef"s,
"IfcConnectedFaceSet"s,
"IfcConnectionCurveGeometry"s,
"IfcConnectionPointEccentricity"s,
"IfcContextDependentUnit"s,
"IfcConversionBasedUnit"s,
"IfcCurveStyle"s,
"IfcDerivedProfileDef"s,
"IfcDimensionCalloutRelationship"s,
"IfcDimensionPair"s,
"IfcDocumentReference"s,
"IfcDraughtingPreDefinedTextFont"s,
"IfcEdge"s,
"IfcEdgeCurve"s,
"IfcExtendedMaterialProperties"s,
"IfcFace"s,
"IfcFaceBound"s,
"IfcFaceOuterBound"s,
"IfcFaceSurface"s,
"IfcFailureConnectionCondition"s,
"IfcFillAreaStyle"s,
"IfcFuelProperties"s,
"IfcGeneralMaterialProperties"s,
"IfcGeneralProfileProperties"s,
"IfcGeometricRepresentationContext"s,
"IfcGeometricRepresentationItem"s,
"IfcGeometricRepresentationSubContext"s,
"IfcGeometricSet"s,
"IfcGridPlacement"s,
"IfcHalfSpaceSolid"s,
"IfcHygroscopicMaterialProperties"s,
"IfcImageTexture"s,
"IfcIrregularTimeSeries"s,
"IfcLightSource"s,
"IfcLightSourceAmbient"s,
"IfcLightSourceDirectional"s,
"IfcLightSourceGoniometric"s,
"IfcLightSourcePositional"s,
"IfcLightSourceSpot"s,
"IfcLocalPlacement"s,
"IfcLoop"s,
"IfcMappedItem"s,
"IfcMaterialDefinitionRepresentation"s,
"IfcMechanicalConcreteMaterialProperties"s,
"IfcObjectDefinition"s,
"IfcOneDirectionRepeatFactor"s,
"IfcOpenShell"s,
"IfcOrientedEdge"s,
"IfcParameterizedProfileDef"s,
"IfcPath"s,
"IfcPhysicalComplexQuantity"s,
"IfcPixelTexture"s,
"IfcPlacement"s,
"IfcPlanarExtent"s,
"IfcPoint"s,
"IfcPointOnCurve"s,
"IfcPointOnSurface"s,
"IfcPolyLoop"s,
"IfcPolygonalBoundedHalfSpace"s,
"IfcPreDefinedColour"s,
"IfcPreDefinedCurveFont"s,
"IfcPreDefinedDimensionSymbol"s,
"IfcPreDefinedPointMarkerSymbol"s,
"IfcProductDefinitionShape"s,
"IfcPropertyBoundedValue"s,
"IfcPropertyDefinition"s,
"IfcPropertyEnumeratedValue"s,
"IfcPropertyListValue"s,
"IfcPropertyReferenceValue"s,
"IfcPropertySetDefinition"s,
"IfcPropertySingleValue"s,
"IfcPropertyTableValue"s,
"IfcRectangleProfileDef"s,
"IfcRegularTimeSeries"s,
"IfcReinforcementDefinitionProperties"s,
"IfcRelationship"s,
"IfcRoundedRectangleProfileDef"s,
"IfcSectionedSpine"s,
"IfcServiceLifeFactor"s,
"IfcShellBasedSurfaceModel"s,
"IfcSlippageConnectionCondition"s,
"IfcSolidModel"s,
"IfcSoundProperties"s,
"IfcSoundValue"s,
"IfcSpaceThermalLoadProperties"s,
"IfcStructuralLoadLinearForce"s,
"IfcStructuralLoadPlanarForce"s,
"IfcStructuralLoadSingleDisplacement"s,
"IfcStructuralLoadSingleDisplacementDistortion"s,
"IfcStructuralLoadSingleForce"s,
"IfcStructuralLoadSingleForceWarping"s,
"IfcStructuralProfileProperties"s,
"IfcStructuralSteelProfileProperties"s,
"IfcSubedge"s,
"IfcSurface"s,
"IfcSurfaceStyleRendering"s,
"IfcSweptAreaSolid"s,
"IfcSweptDiskSolid"s,
"IfcSweptSurface"s,
"IfcTShapeProfileDef"s,
"IfcTerminatorSymbol"s,
"IfcTextLiteral"s,
"IfcTextLiteralWithExtent"s,
"IfcTrapeziumProfileDef"s,
"IfcTwoDirectionRepeatFactor"s,
"IfcTypeObject"s,
"IfcTypeProduct"s,
"IfcUShapeProfileDef"s,
"IfcVector"s,
"IfcVertexLoop"s,
"IfcWindowLiningProperties"s,
"IfcWindowPanelProperties"s,
"IfcWindowStyle"s,
"IfcZShapeProfileDef"s,
"IfcClassificationNotationSelect"s,
"IfcColour"s,
"IfcColourOrFactor"s,
"IfcCurveStyleFontSelect"s,
"IfcDocumentSelect"s,
"IfcHatchLineDistanceSelect"s,
"IfcMeasureValue"s,
"IfcPointOrVertexPoint"s,
"IfcPresentationStyleSelect"s,
"IfcSymbolStyleSelect"s,
"IfcValue"s,
"IfcAnnotationCurveOccurrence"s,
"IfcAnnotationFillArea"s,
"IfcAnnotationFillAreaOccurrence"s,
"IfcAnnotationSurface"s,
"IfcAxis1Placement"s,
"IfcAxis2Placement2D"s,
"IfcAxis2Placement3D"s,
"IfcBooleanResult"s,
"IfcBoundedSurface"s,
"IfcBoundingBox"s,
"IfcBoxedHalfSpace"s,
"IfcCShapeProfileDef"s,
"IfcCartesianPoint"s,
"IfcCartesianTransformationOperator"s,
"IfcCartesianTransformationOperator2D"s,
"IfcCartesianTransformationOperator2DnonUniform"s,
"IfcCartesianTransformationOperator3D"s,
"IfcCartesianTransformationOperator3DnonUniform"s,
"IfcCircleProfileDef"s,
"IfcClosedShell"s,
"IfcCompositeCurveSegment"s,
"IfcCraneRailAShapeProfileDef"s,
"IfcCraneRailFShapeProfileDef"s,
"IfcCsgPrimitive3D"s,
"IfcCsgSolid"s,
"IfcCurve"s,
"IfcCurveBoundedPlane"s,
"IfcDefinedSymbol"s,
"IfcDimensionCurve"s,
"IfcDimensionCurveTerminator"s,
"IfcDirection"s,
"IfcDoorLiningProperties"s,
"IfcDoorPanelProperties"s,
"IfcDoorStyle"s,
"IfcDraughtingCallout"s,
"IfcDraughtingPreDefinedColour"s,
"IfcDraughtingPreDefinedCurveFont"s,
"IfcEdgeLoop"s,
"IfcElementQuantity"s,
"IfcElementType"s,
"IfcElementarySurface"s,
"IfcEllipseProfileDef"s,
"IfcEnergyProperties"s,
"IfcExtrudedAreaSolid"s,
"IfcFaceBasedSurfaceModel"s,
"IfcFillAreaStyleHatching"s,
"IfcFillAreaStyleTileSymbolWithStyle"s,
"IfcFillAreaStyleTiles"s,
"IfcFluidFlowProperties"s,
"IfcFurnishingElementType"s,
"IfcFurnitureType"s,
"IfcGeometricCurveSet"s,
"IfcIShapeProfileDef"s,
"IfcLShapeProfileDef"s,
"IfcLine"s,
"IfcManifoldSolidBrep"s,
"IfcObject"s,
"IfcOffsetCurve2D"s,
"IfcOffsetCurve3D"s,
"IfcPermeableCoveringProperties"s,
"IfcPlanarBox"s,
"IfcPlane"s,
"IfcProcess"s,
"IfcProduct"s,
"IfcProject"s,
"IfcProjectionCurve"s,
"IfcPropertySet"s,
"IfcProxy"s,
"IfcRectangleHollowProfileDef"s,
"IfcRectangularPyramid"s,
"IfcRectangularTrimmedSurface"s,
"IfcRelAssigns"s,
"IfcRelAssignsToActor"s,
"IfcRelAssignsToControl"s,
"IfcRelAssignsToGroup"s,
"IfcRelAssignsToProcess"s,
"IfcRelAssignsToProduct"s,
"IfcRelAssignsToProjectOrder"s,
"IfcRelAssignsToResource"s,
"IfcRelAssociates"s,
"IfcRelAssociatesAppliedValue"s,
"IfcRelAssociatesApproval"s,
"IfcRelAssociatesClassification"s,
"IfcRelAssociatesConstraint"s,
"IfcRelAssociatesDocument"s,
"IfcRelAssociatesLibrary"s,
"IfcRelAssociatesMaterial"s,
"IfcRelAssociatesProfileProperties"s,
"IfcRelConnects"s,
"IfcRelConnectsElements"s,
"IfcRelConnectsPathElements"s,
"IfcRelConnectsPortToElement"s,
"IfcRelConnectsPorts"s,
"IfcRelConnectsStructuralActivity"s,
"IfcRelConnectsStructuralElement"s,
"IfcRelConnectsStructuralMember"s,
"IfcRelConnectsWithEccentricity"s,
"IfcRelConnectsWithRealizingElements"s,
"IfcRelContainedInSpatialStructure"s,
"IfcRelCoversBldgElements"s,
"IfcRelCoversSpaces"s,
"IfcRelDecomposes"s,
"IfcRelDefines"s,
"IfcRelDefinesByProperties"s,
"IfcRelDefinesByType"s,
"IfcRelFillsElement"s,
"IfcRelFlowControlElements"s,
"IfcRelInteractionRequirements"s,
"IfcRelNests"s,
"IfcRelOccupiesSpaces"s,
"IfcRelOverridesProperties"s,
"IfcRelProjectsElement"s,
"IfcRelReferencedInSpatialStructure"s,
"IfcRelSchedulesCostItems"s,
"IfcRelSequence"s,
"IfcRelServicesBuildings"s,
"IfcRelSpaceBoundary"s,
"IfcRelVoidsElement"s,
"IfcResource"s,
"IfcRevolvedAreaSolid"s,
"IfcRightCircularCone"s,
"IfcRightCircularCylinder"s,
"IfcSpatialStructureElement"s,
"IfcSpatialStructureElementType"s,
"IfcSphere"s,
"IfcStructuralActivity"s,
"IfcStructuralItem"s,
"IfcStructuralMember"s,
"IfcStructuralReaction"s,
"IfcStructuralSurfaceMember"s,
"IfcStructuralSurfaceMemberVarying"s,
"IfcStructuredDimensionCallout"s,
"IfcSurfaceCurveSweptAreaSolid"s,
"IfcSurfaceOfLinearExtrusion"s,
"IfcSurfaceOfRevolution"s,
"IfcSystemFurnitureElementType"s,
"IfcTask"s,
"IfcTransportElementType"s,
"IfcAxis2Placement"s,
"IfcBooleanOperand"s,
"IfcCsgSelect"s,
"IfcCurveFontOrScaledCurveFontSelect"s,
"IfcDraughtingCalloutElement"s,
"IfcFillAreaStyleTileShapeSelect"s,
"IfcFillStyleSelect"s,
"IfcGeometricSetSelect"s,
"IfcOrientationSelect"s,
"IfcShell"s,
"IfcSurfaceOrFaceSurface"s,
"IfcTrimmingSelect"s,
"IfcVectorOrDirection"s,
"IfcActor"s,
"IfcAnnotation"s,
"IfcAsymmetricIShapeProfileDef"s,
"IfcBlock"s,
"IfcBooleanClippingResult"s,
"IfcBoundedCurve"s,
"IfcBuilding"s,
"IfcBuildingElementType"s,
"IfcBuildingStorey"s,
"IfcCircleHollowProfileDef"s,
"IfcColumnType"s,
"IfcCompositeCurve"s,
"IfcConic"s,
"IfcConstructionResource"s,
"IfcControl"s,
"IfcCostItem"s,
"IfcCostSchedule"s,
"IfcCoveringType"s,
"IfcCrewResource"s,
"IfcCurtainWallType"s,
"IfcDimensionCurveDirectedCallout"s,
"IfcDistributionElementType"s,
"IfcDistributionFlowElementType"s,
"IfcElectricalBaseProperties"s,
"IfcElement"s,
"IfcElementAssembly"s,
"IfcElementComponent"s,
"IfcElementComponentType"s,
"IfcEllipse"s,
"IfcEnergyConversionDeviceType"s,
"IfcEquipmentElement"s,
"IfcEquipmentStandard"s,
"IfcEvaporativeCoolerType"s,
"IfcEvaporatorType"s,
"IfcFacetedBrep"s,
"IfcFacetedBrepWithVoids"s,
"IfcFastener"s,
"IfcFastenerType"s,
"IfcFeatureElement"s,
"IfcFeatureElementAddition"s,
"IfcFeatureElementSubtraction"s,
"IfcFlowControllerType"s,
"IfcFlowFittingType"s,
"IfcFlowMeterType"s,
"IfcFlowMovingDeviceType"s,
"IfcFlowSegmentType"s,
"IfcFlowStorageDeviceType"s,
"IfcFlowTerminalType"s,
"IfcFlowTreatmentDeviceType"s,
"IfcFurnishingElement"s,
"IfcFurnitureStandard"s,
"IfcGasTerminalType"s,
"IfcGrid"s,
"IfcGroup"s,
"IfcHeatExchangerType"s,
"IfcHumidifierType"s,
"IfcInventory"s,
"IfcJunctionBoxType"s,
"IfcLaborResource"s,
"IfcLampType"s,
"IfcLightFixtureType"s,
"IfcLinearDimension"s,
"IfcMechanicalFastener"s,
"IfcMechanicalFastenerType"s,
"IfcMemberType"s,
"IfcMotorConnectionType"s,
"IfcMove"s,
"IfcOccupant"s,
"IfcOpeningElement"s,
"IfcOrderAction"s,
"IfcOutletType"s,
"IfcPerformanceHistory"s,
"IfcPermit"s,
"IfcPipeFittingType"s,
"IfcPipeSegmentType"s,
"IfcPlateType"s,
"IfcPolyline"s,
"IfcPort"s,
"IfcProcedure"s,
"IfcProjectOrder"s,
"IfcProjectOrderRecord"s,
"IfcProjectionElement"s,
"IfcProtectiveDeviceType"s,
"IfcPumpType"s,
"IfcRadiusDimension"s,
"IfcRailingType"s,
"IfcRampFlightType"s,
"IfcRelAggregates"s,
"IfcRelAssignsTasks"s,
"IfcSanitaryTerminalType"s,
"IfcScheduleTimeControl"s,
"IfcServiceLife"s,
"IfcSite"s,
"IfcSlabType"s,
"IfcSpace"s,
"IfcSpaceHeaterType"s,
"IfcSpaceProgram"s,
"IfcSpaceType"s,
"IfcStackTerminalType"s,
"IfcStairFlightType"s,
"IfcStructuralAction"s,
"IfcStructuralConnection"s,
"IfcStructuralCurveConnection"s,
"IfcStructuralCurveMember"s,
"IfcStructuralCurveMemberVarying"s,
"IfcStructuralLinearAction"s,
"IfcStructuralLinearActionVarying"s,
"IfcStructuralLoadGroup"s,
"IfcStructuralPlanarAction"s,
"IfcStructuralPlanarActionVarying"s,
"IfcStructuralPointAction"s,
"IfcStructuralPointConnection"s,
"IfcStructuralPointReaction"s,
"IfcStructuralResultGroup"s,
"IfcStructuralSurfaceConnection"s,
"IfcSubContractResource"s,
"IfcSwitchingDeviceType"s,
"IfcSystem"s,
"IfcTankType"s,
"IfcTimeSeriesSchedule"s,
"IfcTransformerType"s,
"IfcTransportElement"s,
"IfcTrimmedCurve"s,
"IfcTubeBundleType"s,
"IfcUnitaryEquipmentType"s,
"IfcValveType"s,
"IfcVirtualElement"s,
"IfcWallType"s,
"IfcWasteTerminalType"s,
"IfcWorkControl"s,
"IfcWorkPlan"s,
"IfcWorkSchedule"s,
"IfcZone"s,
"IfcCurveOrEdgeCurve"s,
"IfcStructuralActivityAssignmentSelect"s,
"Ifc2DCompositeCurve"s,
"IfcActionRequest"s,
"IfcAirTerminalBoxType"s,
"IfcAirTerminalType"s,
"IfcAirToAirHeatRecoveryType"s,
"IfcAngularDimension"s,
"IfcAsset"s,
"IfcBSplineCurve"s,
"IfcBeamType"s,
"IfcBezierCurve"s,
"IfcBoilerType"s,
"IfcBuildingElement"s,
"IfcBuildingElementComponent"s,
"IfcBuildingElementPart"s,
"IfcBuildingElementProxy"s,
"IfcBuildingElementProxyType"s,
"IfcCableCarrierFittingType"s,
"IfcCableCarrierSegmentType"s,
"IfcCableSegmentType"s,
"IfcChillerType"s,
"IfcCircle"s,
"IfcCoilType"s,
"IfcColumn"s,
"IfcCompressorType"s,
"IfcCondenserType"s,
"IfcCondition"s,
"IfcConditionCriterion"s,
"IfcConstructionEquipmentResource"s,
"IfcConstructionMaterialResource"s,
"IfcConstructionProductResource"s,
"IfcCooledBeamType"s,
"IfcCoolingTowerType"s,
"IfcCovering"s,
"IfcCurtainWall"s,
"IfcDamperType"s,
"IfcDiameterDimension"s,
"IfcDiscreteAccessory"s,
"IfcDiscreteAccessoryType"s,
"IfcDistributionChamberElementType"s,
"IfcDistributionControlElementType"s,
"IfcDistributionElement"s,
"IfcDistributionFlowElement"s,
"IfcDistributionPort"s,
"IfcDoor"s,
"IfcDuctFittingType"s,
"IfcDuctSegmentType"s,
"IfcDuctSilencerType"s,
"IfcEdgeFeature"s,
"IfcElectricApplianceType"s,
"IfcElectricFlowStorageDeviceType"s,
"IfcElectricGeneratorType"s,
"IfcElectricHeaterType"s,
"IfcElectricMotorType"s,
"IfcElectricTimeControlType"s,
"IfcElectricalCircuit"s,
"IfcElectricalElement"s,
"IfcEnergyConversionDevice"s,
"IfcFanType"s,
"IfcFilterType"s,
"IfcFireSuppressionTerminalType"s,
"IfcFlowController"s,
"IfcFlowFitting"s,
"IfcFlowInstrumentType"s,
"IfcFlowMovingDevice"s,
"IfcFlowSegment"s,
"IfcFlowStorageDevice"s,
"IfcFlowTerminal"s,
"IfcFlowTreatmentDevice"s,
"IfcFooting"s,
"IfcMember"s,
"IfcPile"s,
"IfcPlate"s,
"IfcRailing"s,
"IfcRamp"s,
"IfcRampFlight"s,
"IfcRationalBezierCurve"s,
"IfcReinforcingElement"s,
"IfcReinforcingMesh"s,
"IfcRoof"s,
"IfcRoundedEdgeFeature"s,
"IfcSensorType"s,
"IfcSlab"s,
"IfcStair"s,
"IfcStairFlight"s,
"IfcStructuralAnalysisModel"s,
"IfcTendon"s,
"IfcTendonAnchor"s,
"IfcVibrationIsolatorType"s,
"IfcWall"s,
"IfcWallStandardCase"s,
"IfcWindow"s,
"IfcActuatorType"s,
"IfcAlarmType"s,
"IfcBeam"s,
"IfcChamferEdgeFeature"s,
"IfcControllerType"s,
"IfcDistributionChamberElement"s,
"IfcDistributionControlElement"s,
"IfcElectricDistributionPoint"s,
"IfcReinforcingBar"s,
"RequestID"s,
"TheActor"s,
"Role"s,
"UserDefinedRole"s,
"Description"s,
"PredefinedType"s,
"Purpose"s,
"UserDefinedPurpose"s,
"OuterBoundary"s,
"InnerBoundaries"s,
"FillStyleTarget"s,
"GlobalOrLocal"s,
"Item"s,
"TextureCoordinates"s,
"ApplicationDeveloper"s,
"Version"s,
"ApplicationFullName"s,
"ApplicationIdentifier"s,
"Name"s,
"AppliedValue"s,
"UnitBasis"s,
"ApplicableDate"s,
"FixedUntilDate"s,
"ComponentOfTotal"s,
"Components"s,
"ArithmeticOperator"s,
"ApprovalDateTime"s,
"ApprovalStatus"s,
"ApprovalLevel"s,
"ApprovalQualifier"s,
"Identifier"s,
"Actor"s,
"Approval"s,
"ApprovedProperties"s,
"RelatedApproval"s,
"RelatingApproval"s,
"OuterCurve"s,
"Curve"s,
"InnerCurves"s,
"AssetID"s,
"OriginalValue"s,
"CurrentValue"s,
"TotalReplacementCost"s,
"Owner"s,
"User"s,
"ResponsiblePerson"s,
"IncorporationDate"s,
"DepreciatedValue"s,
"TopFlangeWidth"s,
"TopFlangeThickness"s,
"TopFlangeFilletRadius"s,
"CentreOfGravityInY"s,
"Axis"s,
"RefDirection"s,
"Degree"s,
"ControlPointsList"s,
"CurveForm"s,
"ClosedCurve"s,
"SelfIntersect"s,
"RasterFormat"s,
"RasterCode"s,
"XLength"s,
"YLength"s,
"ZLength"s,
"Operator"s,
"FirstOperand"s,
"SecondOperand"s,
"LinearStiffnessByLengthX"s,
"LinearStiffnessByLengthY"s,
"LinearStiffnessByLengthZ"s,
"RotationalStiffnessByLengthX"s,
"RotationalStiffnessByLengthY"s,
"RotationalStiffnessByLengthZ"s,
"LinearStiffnessByAreaX"s,
"LinearStiffnessByAreaY"s,
"LinearStiffnessByAreaZ"s,
"LinearStiffnessX"s,
"LinearStiffnessY"s,
"LinearStiffnessZ"s,
"RotationalStiffnessX"s,
"RotationalStiffnessY"s,
"RotationalStiffnessZ"s,
"WarpingStiffness"s,
"Corner"s,
"XDim"s,
"YDim"s,
"ZDim"s,
"Enclosure"s,
"ElevationOfRefHeight"s,
"ElevationOfTerrain"s,
"BuildingAddress"s,
"CompositionType"s,
"Elevation"s,
"Depth"s,
"Width"s,
"WallThickness"s,
"Girth"s,
"InternalFilletRadius"s,
"CentreOfGravityInX"s,
"DayComponent"s,
"MonthComponent"s,
"YearComponent"s,
"Coordinates"s,
"Axis1"s,
"Axis2"s,
"LocalOrigin"s,
"Scale"s,
"Scale2"s,
"Axis3"s,
"Scale3"s,
"Thickness"s,
"Height"s,
"Radius"s,
"Source"s,
"Edition"s,
"EditionDate"s,
"Notation"s,
"ItemOf"s,
"Title"s,
"RelatingItem"s,
"RelatedItems"s,
"NotationFacets"s,
"NotationValue"s,
"ReferencedSource"s,
"Red"s,
"Green"s,
"Blue"s,
"UsageName"s,
"HasProperties"s,
"Segments"s,
"Transition"s,
"SameSense"s,
"ParentCurve"s,
"Profiles"s,
"Label"s,
"Criterion"s,
"CriterionDateTime"s,
"Position"s,
"CfsFaces"s,
"CurveOnRelatingElement"s,
"CurveOnRelatedElement"s,
"EccentricityInX"s,
"EccentricityInY"s,
"EccentricityInZ"s,
"PointOnRelatingElement"s,
"PointOnRelatedElement"s,
"LocationAtRelatingElement"s,
"LocationAtRelatedElement"s,
"ProfileOfPort"s,
"SurfaceOnRelatingElement"s,
"SurfaceOnRelatedElement"s,
"ConstraintGrade"s,
"ConstraintSource"s,
"CreatingActor"s,
"CreationTime"s,
"UserDefinedGrade"s,
"RelatingConstraint"s,
"RelatedConstraints"s,
"LogicalAggregator"s,
"ClassifiedConstraint"s,
"RelatedClassifications"s,
"Suppliers"s,
"UsageRatio"s,
"ResourceIdentifier"s,
"ResourceGroup"s,
"ResourceConsumption"s,
"BaseQuantity"s,
"ConversionFactor"s,
"HourOffset"s,
"MinuteOffset"s,
"Sense"s,
"SubmittedBy"s,
"PreparedBy"s,
"SubmittedOn"s,
"Status"s,
"TargetUsers"s,
"UpdateDate"s,
"ID"s,
"CostType"s,
"Condition"s,
"OverallHeight"s,
"BaseWidth2"s,
"HeadWidth"s,
"HeadDepth2"s,
"HeadDepth3"s,
"WebThickness"s,
"BaseWidth4"s,
"BaseDepth1"s,
"BaseDepth2"s,
"BaseDepth3"s,
"TreeRootExpression"s,
"RelatingMonetaryUnit"s,
"RelatedMonetaryUnit"s,
"ExchangeRate"s,
"RateDateTime"s,
"RateSource"s,
"BasisSurface"s,
"CurveFont"s,
"CurveWidth"s,
"CurveColour"s,
"PatternList"s,
"CurveFontScaling"s,
"VisibleSegmentLength"s,
"InvisibleSegmentLength"s,
"DateComponent"s,
"TimeComponent"s,
"Definition"s,
"Target"s,
"ParentProfile"s,
"Elements"s,
"UnitType"s,
"UserDefinedType"s,
"Unit"s,
"Exponent"s,
"LengthExponent"s,
"MassExponent"s,
"TimeExponent"s,
"ElectricCurrentExponent"s,
"ThermodynamicTemperatureExponent"s,
"AmountOfSubstanceExponent"s,
"LuminousIntensityExponent"s,
"DirectionRatios"s,
"ControlElementId"s,
"FlowDirection"s,
"FileExtension"s,
"MimeContentType"s,
"MimeSubtype"s,
"DocumentId"s,
"DocumentReferences"s,
"IntendedUse"s,
"Scope"s,
"Revision"s,
"DocumentOwner"s,
"Editors"s,
"LastRevisionTime"s,
"ElectronicFormat"s,
"ValidFrom"s,
"ValidUntil"s,
"Confidentiality"s,
"RelatingDocument"s,
"RelatedDocuments"s,
"RelationshipType"s,
"OverallWidth"s,
"LiningDepth"s,
"LiningThickness"s,
"ThresholdDepth"s,
"ThresholdThickness"s,
"TransomThickness"s,
"TransomOffset"s,
"LiningOffset"s,
"ThresholdOffset"s,
"CasingThickness"s,
"CasingDepth"s,
"ShapeAspectStyle"s,
"PanelDepth"s,
"PanelOperation"s,
"PanelWidth"s,
"PanelPosition"s,
"OperationType"s,
"ConstructionType"s,
"ParameterTakesPrecedence"s,
"Sizeable"s,
"Contents"s,
"RelatingDraughtingCallout"s,
"RelatedDraughtingCallout"s,
"EdgeStart"s,
"EdgeEnd"s,
"EdgeGeometry"s,
"FeatureLength"s,
"EdgeList"s,
"DistributionPointFunction"s,
"UserDefinedFunction"s,
"ElectricCurrentType"s,
"InputVoltage"s,
"InputFrequency"s,
"FullLoadCurrent"s,
"MinimumCircuitCurrent"s,
"MaximumPowerInput"s,
"RatedPowerInput"s,
"InputPhase"s,
"Tag"s,
"AssemblyPlace"s,
"MethodOfMeasurement"s,
"Quantities"s,
"ElementType"s,
"SemiAxis1"s,
"SemiAxis2"s,
"EnergySequence"s,
"UserDefinedEnergySequence"s,
"ImpactType"s,
"Category"s,
"UserDefinedCategory"s,
"ExtendedProperties"s,
"Location"s,
"ItemReference"s,
"ExtrudedDirection"s,
"Bounds"s,
"FbsmFaces"s,
"Bound"s,
"Orientation"s,
"FaceSurface"s,
"Voids"s,
"TensionFailureX"s,
"TensionFailureY"s,
"TensionFailureZ"s,
"CompressionFailureX"s,
"CompressionFailureY"s,
"CompressionFailureZ"s,
"FillStyles"s,
"HatchLineAppearance"s,
"StartOfNextHatchLine"s,
"PointOfReferenceHatchLine"s,
"PatternStart"s,
"HatchLineAngle"s,
"Symbol"s,
"TilingPattern"s,
"Tiles"s,
"TilingScale"s,
"PropertySource"s,
"FlowConditionTimeSeries"s,
"VelocityTimeSeries"s,
"FlowrateTimeSeries"s,
"Fluid"s,
"PressureTimeSeries"s,
"UserDefinedPropertySource"s,
"TemperatureSingleValue"s,
"WetBulbTemperatureSingleValue"s,
"WetBulbTemperatureTimeSeries"s,
"TemperatureTimeSeries"s,
"FlowrateSingleValue"s,
"FlowConditionSingleValue"s,
"VelocitySingleValue"s,
"PressureSingleValue"s,
"CombustionTemperature"s,
"CarbonContent"s,
"LowerHeatingValue"s,
"HigherHeatingValue"s,
"MolecularWeight"s,
"Porosity"s,
"MassDensity"s,
"PhysicalWeight"s,
"Perimeter"s,
"MinimumPlateThickness"s,
"MaximumPlateThickness"s,
"CrossSectionArea"s,
"CoordinateSpaceDimension"s,
"Precision"s,
"WorldCoordinateSystem"s,
"TrueNorth"s,
"ParentContext"s,
"TargetScale"s,
"TargetView"s,
"UserDefinedTargetView"s,
"UAxes"s,
"VAxes"s,
"WAxes"s,
"AxisTag"s,
"AxisCurve"s,
"PlacementLocation"s,
"PlacementRefDirection"s,
"BaseSurface"s,
"AgreementFlag"s,
"UpperVaporResistanceFactor"s,
"LowerVaporResistanceFactor"s,
"IsothermalMoistureCapacity"s,
"VaporPermeability"s,
"MoistureDiffusivity"s,
"OverallDepth"s,
"FlangeThickness"s,
"FilletRadius"s,
"UrlReference"s,
"InventoryType"s,
"Jurisdiction"s,
"ResponsiblePersons"s,
"LastUpdateDate"s,
"Values"s,
"TimeStamp"s,
"ListValues"s,
"EdgeRadius"s,
"LegSlope"s,
"SkillSet"s,
"Publisher"s,
"VersionDate"s,
"LibraryReference"s,
"MainPlaneAngle"s,
"SecondaryPlaneAngle"s,
"LuminousIntensity"s,
"LightDistributionCurve"s,
"DistributionData"s,
"LightColour"s,
"AmbientIntensity"s,
"Intensity"s,
"ColourAppearance"s,
"ColourTemperature"s,
"LuminousFlux"s,
"LightEmissionSource"s,
"LightDistributionDataSource"s,
"ConstantAttenuation"s,
"DistanceAttenuation"s,
"QuadricAttenuation"s,
"ConcentrationExponent"s,
"SpreadAngle"s,
"BeamWidthAngle"s,
"Pnt"s,
"Dir"s,
"PlacementRelTo"s,
"RelativePlacement"s,
"HourComponent"s,
"MinuteComponent"s,
"SecondComponent"s,
"Zone"s,
"DaylightSavingOffset"s,
"Outer"s,
"MappingSource"s,
"MappingTarget"s,
"MaterialClassifications"s,
"ClassifiedMaterial"s,
"RepresentedMaterial"s,
"Material"s,
"LayerThickness"s,
"IsVentilated"s,
"MaterialLayers"s,
"LayerSetName"s,
"ForLayerSet"s,
"LayerSetDirection"s,
"DirectionSense"s,
"OffsetFromReferenceLine"s,
"Materials"s,
"ValueComponent"s,
"UnitComponent"s,
"CompressiveStrength"s,
"MaxAggregateSize"s,
"AdmixturesDescription"s,
"Workability"s,
"ProtectivePoreRatio"s,
"WaterImpermeability"s,
"NominalDiameter"s,
"NominalLength"s,
"DynamicViscosity"s,
"YoungModulus"s,
"ShearModulus"s,
"PoissonRatio"s,
"ThermalExpansionCoefficient"s,
"YieldStress"s,
"UltimateStress"s,
"UltimateStrain"s,
"HardeningModule"s,
"ProportionalStress"s,
"PlasticStrain"s,
"Relaxations"s,
"Benchmark"s,
"ValueSource"s,
"DataValue"s,
"Currency"s,
"MoveFrom"s,
"MoveTo"s,
"PunchList"s,
"Dimensions"s,
"ObjectType"s,
"BenchmarkValues"s,
"ResultValues"s,
"ObjectiveQualifier"s,
"UserDefinedQualifier"s,
"BasisCurve"s,
"Distance"s,
"RepeatFactor"s,
"VisibleTransmittance"s,
"SolarTransmittance"s,
"ThermalIrTransmittance"s,
"ThermalIrEmissivityBack"s,
"ThermalIrEmissivityFront"s,
"VisibleReflectanceBack"s,
"VisibleReflectanceFront"s,
"SolarReflectanceFront"s,
"SolarReflectanceBack"s,
"ActionID"s,
"Id"s,
"Roles"s,
"Addresses"s,
"RelatingOrganization"s,
"RelatedOrganizations"s,
"EdgeElement"s,
"OwningUser"s,
"OwningApplication"s,
"State"s,
"ChangeAction"s,
"LastModifiedDate"s,
"LastModifyingUser"s,
"LastModifyingApplication"s,
"CreationDate"s,
"LifeCyclePhase"s,
"FrameDepth"s,
"FrameThickness"s,
"PermitID"s,
"FamilyName"s,
"GivenName"s,
"MiddleNames"s,
"PrefixTitles"s,
"SuffixTitles"s,
"ThePerson"s,
"TheOrganization"s,
"HasQuantities"s,
"Discrimination"s,
"Quality"s,
"Usage"s,
"ColourComponents"s,
"Pixel"s,
"Placement"s,
"SizeInX"s,
"SizeInY"s,
"PointParameter"s,
"PointParameterU"s,
"PointParameterV"s,
"Polygon"s,
"PolygonalBoundary"s,
"Points"s,
"InternalLocation"s,
"AddressLines"s,
"PostalBox"s,
"Town"s,
"Region"s,
"PostalCode"s,
"Country"s,
"AssignedItems"s,
"LayerOn"s,
"LayerFrozen"s,
"LayerBlocked"s,
"LayerStyles"s,
"Styles"s,
"ProcedureID"s,
"ProcedureType"s,
"UserDefinedProcedureType"s,
"ObjectPlacement"s,
"Representation"s,
"Representations"s,
"SpecificHeatCapacity"s,
"N20Content"s,
"COContent"s,
"CO2Content"s,
"ProfileType"s,
"ProfileName"s,
"ProfileDefinition"s,
"LongName"s,
"Phase"s,
"RepresentationContexts"s,
"UnitsInContext"s,
"Records"s,
"UpperBoundValue"s,
"LowerBoundValue"s,
"RelatedProperties"s,
"DependingProperty"s,
"DependantProperty"s,
"Expression"s,
"EnumerationValues"s,
"EnumerationReference"s,
"PropertyReference"s,
"NominalValue"s,
"DefiningValues"s,
"DefinedValues"s,
"DefiningUnit"s,
"DefinedUnit"s,
"ProxyType"s,
"AreaValue"s,
"CountValue"s,
"LengthValue"s,
"TimeValue"s,
"VolumeValue"s,
"WeightValue"s,
"ShapeType"s,
"WeightsData"s,
"InnerFilletRadius"s,
"OuterFilletRadius"s,
"U1"s,
"V1"s,
"U2"s,
"V2"s,
"Usense"s,
"Vsense"s,
"ReferencedDocument"s,
"ReferencingValues"s,
"TimeStep"s,
"TotalCrossSectionArea"s,
"SteelGrade"s,
"BarSurface"s,
"EffectiveDepth"s,
"NominalBarDiameter"s,
"BarCount"s,
"DefinitionType"s,
"ReinforcementSectionDefinitions"s,
"BarLength"s,
"BarRole"s,
"MeshLength"s,
"MeshWidth"s,
"LongitudinalBarNominalDiameter"s,
"TransverseBarNominalDiameter"s,
"LongitudinalBarCrossSectionArea"s,
"TransverseBarCrossSectionArea"s,
"LongitudinalBarSpacing"s,
"TransverseBarSpacing"s,
"RelatedObjects"s,
"RelatedObjectsType"s,
"TimeForTask"s,
"RelatingActor"s,
"ActingRole"s,
"RelatingControl"s,
"RelatingGroup"s,
"RelatingProcess"s,
"QuantityInProcess"s,
"RelatingProduct"s,
"RelatingResource"s,
"RelatingAppliedValue"s,
"RelatingClassification"s,
"Intent"s,
"RelatingLibrary"s,
"RelatingMaterial"s,
"RelatingProfileProperties"s,
"ProfileSectionLocation"s,
"ProfileOrientation"s,
"ConnectionGeometry"s,
"RelatingElement"s,
"RelatedElement"s,
"RelatingPriorities"s,
"RelatedPriorities"s,
"RelatedConnectionType"s,
"RelatingConnectionType"s,
"RelatingPort"s,
"RelatedPort"s,
"RealizingElement"s,
"RelatedStructuralActivity"s,
"RelatedStructuralMember"s,
"RelatingStructuralMember"s,
"RelatedStructuralConnection"s,
"AppliedCondition"s,
"AdditionalConditions"s,
"SupportedLength"s,
"ConditionCoordinateSystem"s,
"ConnectionConstraint"s,
"RealizingElements"s,
"ConnectionType"s,
"RelatedElements"s,
"RelatingStructure"s,
"RelatingBuildingElement"s,
"RelatedCoverings"s,
"RelatedSpace"s,
"RelatingObject"s,
"RelatingPropertyDefinition"s,
"RelatingType"s,
"RelatingOpeningElement"s,
"RelatedBuildingElement"s,
"RelatedControlElements"s,
"RelatingFlowElement"s,
"DailyInteraction"s,
"ImportanceRating"s,
"LocationOfInteraction"s,
"RelatedSpaceProgram"s,
"RelatingSpaceProgram"s,
"OverridingProperties"s,
"RelatedFeatureElement"s,
"RelatedProcess"s,
"TimeLag"s,
"SequenceType"s,
"RelatingSystem"s,
"RelatedBuildings"s,
"RelatingSpace"s,
"PhysicalOrVirtualBoundary"s,
"InternalOrExternalBoundary"s,
"RelatedOpeningElement"s,
"RelaxationValue"s,
"InitialStress"s,
"ContextOfItems"s,
"RepresentationIdentifier"s,
"RepresentationType"s,
"Items"s,
"ContextIdentifier"s,
"ContextType"s,
"MappingOrigin"s,
"MappedRepresentation"s,
"Angle"s,
"RibHeight"s,
"RibWidth"s,
"RibSpacing"s,
"Direction"s,
"BottomRadius"s,
"GlobalId"s,
"OwnerHistory"s,
"RoundingRadius"s,
"Prefix"s,
"ActualStart"s,
"EarlyStart"s,
"LateStart"s,
"ScheduleStart"s,
"ActualFinish"s,
"EarlyFinish"s,
"LateFinish"s,
"ScheduleFinish"s,
"ScheduleDuration"s,
"ActualDuration"s,
"RemainingTime"s,
"FreeFloat"s,
"TotalFloat"s,
"IsCritical"s,
"StatusTime"s,
"StartFloat"s,
"FinishFloat"s,
"Completion"s,
"SectionType"s,
"StartProfile"s,
"EndProfile"s,
"LongitudinalStartPosition"s,
"LongitudinalEndPosition"s,
"TransversePosition"s,
"ReinforcementRole"s,
"SectionDefinition"s,
"CrossSectionReinforcementDefinitions"s,
"SpineCurve"s,
"CrossSections"s,
"CrossSectionPositions"s,
"ServiceLifeType"s,
"ServiceLifeDuration"s,
"UpperValue"s,
"MostUsedValue"s,
"LowerValue"s,
"ShapeRepresentations"s,
"ProductDefinitional"s,
"PartOfProductDefinitionShape"s,
"SbsmBoundary"s,
"RefLatitude"s,
"RefLongitude"s,
"RefElevation"s,
"LandTitleNumber"s,
"SiteAddress"s,
"SlippageX"s,
"SlippageY"s,
"SlippageZ"s,
"IsAttenuating"s,
"SoundScale"s,
"SoundValues"s,
"SoundLevelTimeSeries"s,
"Frequency"s,
"SoundLevelSingleValue"s,
"InteriorOrExteriorSpace"s,
"ElevationWithFlooring"s,
"SpaceProgramIdentifier"s,
"MaxRequiredArea"s,
"MinRequiredArea"s,
"RequestedLocation"s,
"StandardRequiredArea"s,
"ApplicableValueRatio"s,
"ThermalLoadSource"s,
"SourceDescription"s,
"MaximumValue"s,
"MinimumValue"s,
"ThermalLoadTimeSeriesValues"s,
"UserDefinedThermalLoadSource"s,
"ThermalLoadType"s,
"NumberOfRiser"s,
"NumberOfTreads"s,
"RiserHeight"s,
"TreadLength"s,
"DestabilizingLoad"s,
"CausedBy"s,
"AppliedLoad"s,
"OrientationOf2DPlane"s,
"LoadedBy"s,
"HasResults"s,
"ProjectedOrTrue"s,
"VaryingAppliedLoadLocation"s,
"SubsequentAppliedLoads"s,
"ActionType"s,
"ActionSource"s,
"Coefficient"s,
"LinearForceX"s,
"LinearForceY"s,
"LinearForceZ"s,
"LinearMomentX"s,
"LinearMomentY"s,
"LinearMomentZ"s,
"PlanarForceX"s,
"PlanarForceY"s,
"PlanarForceZ"s,
"DisplacementX"s,
"DisplacementY"s,
"DisplacementZ"s,
"RotationalDisplacementRX"s,
"RotationalDisplacementRY"s,
"RotationalDisplacementRZ"s,
"Distortion"s,
"ForceX"s,
"ForceY"s,
"ForceZ"s,
"MomentX"s,
"MomentY"s,
"MomentZ"s,
"WarpingMoment"s,
"DeltaT_Constant"s,
"DeltaT_Y"s,
"DeltaT_Z"s,
"TorsionalConstantX"s,
"MomentOfInertiaYZ"s,
"MomentOfInertiaY"s,
"MomentOfInertiaZ"s,
"WarpingConstant"s,
"ShearCentreZ"s,
"ShearCentreY"s,
"ShearDeformationAreaZ"s,
"ShearDeformationAreaY"s,
"MaximumSectionModulusY"s,
"MinimumSectionModulusY"s,
"MaximumSectionModulusZ"s,
"MinimumSectionModulusZ"s,
"TorsionalSectionModulus"s,
"TheoryType"s,
"ResultForLoadGroup"s,
"IsLinear"s,
"ShearAreaZ"s,
"ShearAreaY"s,
"PlasticShapeFactorY"s,
"PlasticShapeFactorZ"s,
"SubsequentThickness"s,
"VaryingThicknessLocation"s,
"SubContractor"s,
"JobDescription"s,
"ParentEdge"s,
"Directrix"s,
"StartParam"s,
"EndParam"s,
"ReferenceSurface"s,
"AxisPosition"s,
"Side"s,
"DiffuseTransmissionColour"s,
"DiffuseReflectionColour"s,
"TransmissionColour"s,
"ReflectanceColour"s,
"RefractionIndex"s,
"DispersionFactor"s,
"Transparency"s,
"DiffuseColour"s,
"ReflectionColour"s,
"SpecularColour"s,
"SpecularHighlight"s,
"ReflectanceMethod"s,
"SurfaceColour"s,
"Textures"s,
"RepeatS"s,
"RepeatT"s,
"TextureType"s,
"TextureTransform"s,
"SweptArea"s,
"InnerRadius"s,
"SweptCurve"s,
"StyleOfSymbol"s,
"FlangeWidth"s,
"FlangeEdgeRadius"s,
"WebEdgeRadius"s,
"WebSlope"s,
"FlangeSlope"s,
"Rows"s,
"RowCells"s,
"IsHeading"s,
"TaskId"s,
"WorkMethod"s,
"IsMilestone"s,
"Priority"s,
"TelephoneNumbers"s,
"FacsimileNumbers"s,
"PagerNumber"s,
"ElectronicMailAddresses"s,
"WWWHomePageURL"s,
"TensionForce"s,
"PreStress"s,
"FrictionCoefficient"s,
"AnchorageSlip"s,
"MinCurvatureRadius"s,
"AnnotatedCurve"s,
"Literal"s,
"Path"s,
"Extent"s,
"BoxAlignment"s,
"TextCharacterAppearance"s,
"TextStyle"s,
"TextFontStyle"s,
"FontFamily"s,
"FontStyle"s,
"FontVariant"s,
"FontWeight"s,
"FontSize"s,
"Colour"s,
"BackgroundColour"s,
"TextIndent"s,
"TextAlign"s,
"TextDecoration"s,
"LetterSpacing"s,
"WordSpacing"s,
"TextTransform"s,
"LineHeight"s,
"BoxHeight"s,
"BoxWidth"s,
"BoxSlantAngle"s,
"BoxRotateAngle"s,
"CharacterSpacing"s,
"Mode"s,
"Parameter"s,
"TextureMaps"s,
"BoilingPoint"s,
"FreezingPoint"s,
"ThermalConductivity"s,
"StartTime"s,
"EndTime"s,
"TimeSeriesDataType"s,
"DataOrigin"s,
"UserDefinedDataOrigin"s,
"ReferencedTimeSeries"s,
"TimeSeriesReferences"s,
"ApplicableDates"s,
"TimeSeriesScheduleType"s,
"TimeSeries"s,
"CapacityByWeight"s,
"CapacityByNumber"s,
"BottomXDim"s,
"TopXDim"s,
"TopXOffset"s,
"Trim1"s,
"Trim2"s,
"SenseAgreement"s,
"MasterRepresentation"s,
"SecondRepeatFactor"s,
"ApplicableOccurrence"s,
"HasPropertySets"s,
"RepresentationMaps"s,
"Units"s,
"Magnitude"s,
"TextureVertices"s,
"TexturePoints"s,
"LoopVertex"s,
"VertexGeometry"s,
"IntersectingAxes"s,
"OffsetDistances"s,
"IsPotable"s,
"Hardness"s,
"AlkalinityConcentration"s,
"AcidityConcentration"s,
"ImpuritiesContent"s,
"PHLevel"s,
"DissolvedSolidsContent"s,
"MullionThickness"s,
"FirstTransomOffset"s,
"SecondTransomOffset"s,
"FirstMullionOffset"s,
"SecondMullionOffset"s,
"Creators"s,
"Duration"s,
"FinishTime"s,
"WorkControlType"s,
"UserDefinedControlType"s,
"IsActingUpon"s,
"OfPerson"s,
"OfOrganization"s,
"ContainedInStructure"s,
"ValuesReferenced"s,
"ValueOfComponents"s,
"IsComponentIn"s,
"Actors"s,
"IsRelatedWith"s,
"Relates"s,
"Contains"s,
"IsClassifiedItemIn"s,
"IsClassifyingItemIn"s,
"UsingCurves"s,
"ClassifiedAs"s,
"RelatesConstraints"s,
"PropertiesForConstraint"s,
"Aggregates"s,
"IsAggregatedIn"s,
"Controls"s,
"CoversSpaces"s,
"Covers"s,
"AnnotatedBySymbols"s,
"AssignedToFlowElement"s,
"HasControlElements"s,
"IsPointedTo"s,
"IsPointer"s,
"ReferenceToDocument"s,
"IsRelatedFromCallout"s,
"IsRelatedToCallout"s,
"HasStructuralMember"s,
"FillsVoids"s,
"ConnectedTo"s,
"HasCoverings"s,
"HasProjections"s,
"ReferencedInStructures"s,
"HasPorts"s,
"HasOpenings"s,
"IsConnectionRealization"s,
"ProvidesBoundaries"s,
"ConnectedFrom"s,
"ProjectsElements"s,
"VoidsElements"s,
"HasSubContexts"s,
"PartOfW"s,
"PartOfV"s,
"PartOfU"s,
"HasIntersections"s,
"IsGroupedBy"s,
"ReferenceIntoLibrary"s,
"HasRepresentation"s,
"ToMaterialLayerSet"s,
"IsDefinedBy"s,
"HasAssignments"s,
"IsDecomposedBy"s,
"Decomposes"s,
"HasAssociations"s,
"PlacesObject"s,
"ReferencedByPlacements"s,
"HasFillings"s,
"IsRelatedBy"s,
"Engages"s,
"EngagedIn"s,
"PartOfComplex"s,
"ContainedIn"s,
"OperatesOn"s,
"IsSuccessorFrom"s,
"IsPredecessorTo"s,
"ReferencedBy"s,
"ShapeOfProduct"s,
"HasShapeAspects"s,
"PropertyForDependance"s,
"PropertyDependsOn"s,
"PropertyDefinitionOf"s,
"DefinesType"s,
"RepresentationMap"s,
"LayerAssignments"s,
"OfProductRepresentation"s,
"RepresentationsInContext"s,
"StyledByItem"s,
"MapUsage"s,
"ResourceOf"s,
"ScheduleTimeControlAssigned"s,
"OfShapeAspect"s,
"BoundedBy"s,
"HasInteractionReqsFrom"s,
"HasInteractionReqsTo"s,
"ReferencesElements"s,
"ServicedBySystems"s,
"ContainsElements"s,
"AssignedToStructuralItem"s,
"ConnectsStructuralMembers"s,
"AssignedStructuralActivity"s,
"SourceOfResultGroup"s,
"LoadGroupFor"s,
"ReferencesElement"s,
"ConnectedBy"s,
"Causes"s,
"ResultGroupFor"s,
"ServicesBuildings"s,
"OfTable"s,
"AnnotatedSurface"s,
"DocumentedBy"s,
"ObjectTypeOf"s,
"IFC2X3"s};

#if defined(__clang__)
__attribute__((optnone))
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC push_options
#pragma GCC optimize ("O0")
#elif defined(_MSC_VER)
#pragma optimize("", off)
#endif
        
IfcParse::schema_definition* IFC2X3_populate_schema() {
    IFC2X3_IfcAbsorbedDoseMeasure_type = new type_declaration(strings[0], 1, new simple_type(simple_type::real_type));
    IFC2X3_IfcAccelerationMeasure_type = new type_declaration(strings[1], 2, new simple_type(simple_type::real_type));
    IFC2X3_IfcActionSourceTypeEnum_type = new enumeration_type(strings[2], 4, {
        strings[3],
        strings[4],
        strings[5],
        strings[6],
        strings[7],
        strings[8],
        strings[9],
        strings[10],
        strings[11],
        strings[12],
        strings[13],
        strings[14],
        strings[15],
        strings[16],
        strings[17],
        strings[18],
        strings[19],
        strings[20],
        strings[21],
        strings[22],
        strings[23],
        strings[24],
        strings[25],
        strings[26],
        strings[27],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcActionTypeEnum_type = new enumeration_type(strings[30], 5, {
        strings[31],
        strings[32],
        strings[33],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcActuatorTypeEnum_type = new enumeration_type(strings[34], 10, {
        strings[35],
        strings[36],
        strings[37],
        strings[38],
        strings[39],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcAddressTypeEnum_type = new enumeration_type(strings[40], 12, {
        strings[41],
        strings[42],
        strings[43],
        strings[44],
        strings[28]
    });
    IFC2X3_IfcAheadOrBehind_type = new enumeration_type(strings[45], 13, {
        strings[46],
        strings[47]
    });
    IFC2X3_IfcAirTerminalBoxTypeEnum_type = new enumeration_type(strings[48], 15, {
        strings[49],
        strings[50],
        strings[51],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcAirTerminalTypeEnum_type = new enumeration_type(strings[52], 17, {
        strings[53],
        strings[54],
        strings[55],
        strings[56],
        strings[57],
        strings[58],
        strings[59],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcAirToAirHeatRecoveryTypeEnum_type = new enumeration_type(strings[60], 19, {
        strings[61],
        strings[62],
        strings[63],
        strings[64],
        strings[65],
        strings[66],
        strings[67],
        strings[68],
        strings[69],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcAlarmTypeEnum_type = new enumeration_type(strings[70], 21, {
        strings[71],
        strings[72],
        strings[73],
        strings[74],
        strings[75],
        strings[76],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcAmountOfSubstanceMeasure_type = new type_declaration(strings[77], 22, new simple_type(simple_type::real_type));
    IFC2X3_IfcAnalysisModelTypeEnum_type = new enumeration_type(strings[78], 23, {
        strings[79],
        strings[80],
        strings[81],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcAnalysisTheoryTypeEnum_type = new enumeration_type(strings[82], 24, {
        strings[83],
        strings[84],
        strings[85],
        strings[86],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcAngularVelocityMeasure_type = new type_declaration(strings[87], 26, new simple_type(simple_type::real_type));
    IFC2X3_IfcAreaMeasure_type = new type_declaration(strings[88], 47, new simple_type(simple_type::real_type));
    IFC2X3_IfcArithmeticOperatorEnum_type = new enumeration_type(strings[89], 48, {
        strings[90],
        strings[91],
        strings[92],
        strings[93]
    });
    IFC2X3_IfcAssemblyPlaceEnum_type = new enumeration_type(strings[94], 49, {
        strings[42],
        strings[95],
        strings[29]
    });
    IFC2X3_IfcBSplineCurveForm_type = new enumeration_type(strings[96], 81, {
        strings[97],
        strings[98],
        strings[99],
        strings[100],
        strings[101],
        strings[102]
    });
    IFC2X3_IfcBeamTypeEnum_type = new enumeration_type(strings[103], 58, {
        strings[104],
        strings[105],
        strings[106],
        strings[107],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcBenchmarkEnum_type = new enumeration_type(strings[108], 59, {
        strings[109],
        strings[110],
        strings[111],
        strings[112],
        strings[113],
        strings[114]
    });
    IFC2X3_IfcBoilerTypeEnum_type = new enumeration_type(strings[115], 64, {
        strings[116],
        strings[117],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcBoolean_type = new type_declaration(strings[118], 65, new simple_type(simple_type::boolean_type));
    IFC2X3_IfcBooleanOperator_type = new enumeration_type(strings[119], 68, {
        strings[120],
        strings[121],
        strings[122]
    });
    IFC2X3_IfcBuildingElementProxyTypeEnum_type = new enumeration_type(strings[123], 88, {
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCableCarrierFittingTypeEnum_type = new enumeration_type(strings[124], 92, {
        strings[125],
        strings[126],
        strings[127],
        strings[128],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCableCarrierSegmentTypeEnum_type = new enumeration_type(strings[129], 94, {
        strings[130],
        strings[131],
        strings[132],
        strings[133],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCableSegmentTypeEnum_type = new enumeration_type(strings[134], 96, {
        strings[135],
        strings[136],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcChangeActionEnum_type = new enumeration_type(strings[137], 106, {
        strings[138],
        strings[139],
        strings[140],
        strings[141],
        strings[142],
        strings[143]
    });
    IFC2X3_IfcChillerTypeEnum_type = new enumeration_type(strings[144], 109, {
        strings[145],
        strings[146],
        strings[147],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCoilTypeEnum_type = new enumeration_type(strings[148], 122, {
        strings[149],
        strings[150],
        strings[151],
        strings[152],
        strings[153],
        strings[154],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcColumnTypeEnum_type = new enumeration_type(strings[155], 129, {
        strings[156],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcComplexNumber_type = new type_declaration(strings[157], 130, new aggregation_type(aggregation_type::array_type, 1, 2, new simple_type(simple_type::real_type)));
    IFC2X3_IfcCompoundPlaneAngleMeasure_type = new type_declaration(strings[158], 135, new aggregation_type(aggregation_type::list_type, 3, 4, new simple_type(simple_type::integer_type)));
    IFC2X3_IfcCompressorTypeEnum_type = new enumeration_type(strings[159], 137, {
        strings[160],
        strings[161],
        strings[162],
        strings[163],
        strings[164],
        strings[165],
        strings[166],
        strings[167],
        strings[168],
        strings[169],
        strings[170],
        strings[171],
        strings[172],
        strings[173],
        strings[174],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCondenserTypeEnum_type = new enumeration_type(strings[175], 139, {
        strings[176],
        strings[177],
        strings[178],
        strings[179],
        strings[145],
        strings[180],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcConnectionTypeEnum_type = new enumeration_type(strings[181], 151, {
        strings[182],
        strings[183],
        strings[184],
        strings[29]
    });
    IFC2X3_IfcConstraintEnum_type = new enumeration_type(strings[185], 155, {
        strings[186],
        strings[187],
        strings[188],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcContextDependentMeasure_type = new type_declaration(strings[189], 161, new simple_type(simple_type::real_type));
    IFC2X3_IfcControllerTypeEnum_type = new enumeration_type(strings[190], 165, {
        strings[191],
        strings[192],
        strings[193],
        strings[194],
        strings[195],
        strings[196],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCooledBeamTypeEnum_type = new enumeration_type(strings[197], 168, {
        strings[198],
        strings[199],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCoolingTowerTypeEnum_type = new enumeration_type(strings[200], 170, {
        strings[201],
        strings[202],
        strings[203],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCostScheduleTypeEnum_type = new enumeration_type(strings[204], 174, {
        strings[205],
        strings[206],
        strings[207],
        strings[208],
        strings[209],
        strings[210],
        strings[211],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCountMeasure_type = new type_declaration(strings[212], 176, new simple_type(simple_type::number_type));
    IFC2X3_IfcCoveringTypeEnum_type = new enumeration_type(strings[213], 179, {
        strings[214],
        strings[215],
        strings[216],
        strings[217],
        strings[218],
        strings[219],
        strings[220],
        strings[221],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCurrencyEnum_type = new enumeration_type(strings[222], 187, {
        strings[223],
        strings[224],
        strings[225],
        strings[226],
        strings[227],
        strings[228],
        strings[229],
        strings[230],
        strings[231],
        strings[232],
        strings[233],
        strings[234],
        strings[235],
        strings[236],
        strings[237],
        strings[238],
        strings[239],
        strings[240],
        strings[241],
        strings[242],
        strings[243],
        strings[244],
        strings[245],
        strings[246],
        strings[247],
        strings[248],
        strings[249],
        strings[250],
        strings[251],
        strings[252],
        strings[253],
        strings[254],
        strings[255],
        strings[256],
        strings[257],
        strings[258],
        strings[259],
        strings[260],
        strings[261],
        strings[262],
        strings[263],
        strings[264],
        strings[265],
        strings[266],
        strings[267],
        strings[268],
        strings[269],
        strings[270],
        strings[271],
        strings[272],
        strings[273],
        strings[274],
        strings[275],
        strings[276],
        strings[277],
        strings[278],
        strings[279],
        strings[280],
        strings[281],
        strings[282],
        strings[283],
        strings[284],
        strings[285],
        strings[286],
        strings[287],
        strings[288],
        strings[289],
        strings[290],
        strings[291],
        strings[292],
        strings[293],
        strings[294],
        strings[295],
        strings[296],
        strings[297],
        strings[298],
        strings[299],
        strings[300],
        strings[301],
        strings[302],
        strings[303],
        strings[304],
        strings[305]
    });
    IFC2X3_IfcCurtainWallTypeEnum_type = new enumeration_type(strings[306], 191, {
        strings[28],
        strings[29]
    });
    IFC2X3_IfcCurvatureMeasure_type = new type_declaration(strings[307], 192, new simple_type(simple_type::real_type));
    IFC2X3_IfcDamperTypeEnum_type = new enumeration_type(strings[308], 203, {
        strings[309],
        strings[310],
        strings[311],
        strings[312],
        strings[313],
        strings[314],
        strings[315],
        strings[316],
        strings[317],
        strings[318],
        strings[319],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDataOriginEnum_type = new enumeration_type(strings[320], 204, {
        strings[321],
        strings[322],
        strings[323],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDayInMonthNumber_type = new type_declaration(strings[324], 207, new simple_type(simple_type::integer_type));
    IFC2X3_IfcDaylightSavingHour_type = new type_declaration(strings[325], 208, new simple_type(simple_type::integer_type));
    IFC2X3_IfcDerivedUnitEnum_type = new enumeration_type(strings[326], 215, {
        strings[327],
        strings[328],
        strings[329],
        strings[330],
        strings[331],
        strings[332],
        strings[333],
        strings[334],
        strings[335],
        strings[336],
        strings[337],
        strings[338],
        strings[339],
        strings[340],
        strings[341],
        strings[342],
        strings[343],
        strings[344],
        strings[345],
        strings[346],
        strings[347],
        strings[348],
        strings[349],
        strings[350],
        strings[351],
        strings[352],
        strings[353],
        strings[354],
        strings[355],
        strings[356],
        strings[357],
        strings[358],
        strings[359],
        strings[360],
        strings[361],
        strings[362],
        strings[363],
        strings[364],
        strings[365],
        strings[366],
        strings[367],
        strings[368],
        strings[369],
        strings[370],
        strings[371],
        strings[372],
        strings[373],
        strings[374],
        strings[28]
    });
    IFC2X3_IfcDescriptiveMeasure_type = new type_declaration(strings[375], 216, new simple_type(simple_type::string_type));
    IFC2X3_IfcDimensionCount_type = new type_declaration(strings[376], 220, new simple_type(simple_type::integer_type));
    IFC2X3_IfcDimensionExtentUsage_type = new enumeration_type(strings[377], 224, {
        strings[378],
        strings[379]
    });
    IFC2X3_IfcDirectionSenseEnum_type = new enumeration_type(strings[380], 227, {
        strings[381],
        strings[382]
    });
    IFC2X3_IfcDistributionChamberElementTypeEnum_type = new enumeration_type(strings[383], 232, {
        strings[384],
        strings[385],
        strings[386],
        strings[387],
        strings[388],
        strings[389],
        strings[390],
        strings[391],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDocumentConfidentialityEnum_type = new enumeration_type(strings[392], 240, {
        strings[393],
        strings[394],
        strings[395],
        strings[396],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDocumentStatusEnum_type = new enumeration_type(strings[397], 246, {
        strings[398],
        strings[399],
        strings[400],
        strings[401],
        strings[29]
    });
    IFC2X3_IfcDoorPanelOperationEnum_type = new enumeration_type(strings[402], 249, {
        strings[403],
        strings[404],
        strings[405],
        strings[406],
        strings[407],
        strings[408],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDoorPanelPositionEnum_type = new enumeration_type(strings[409], 250, {
        strings[410],
        strings[411],
        strings[412],
        strings[29]
    });
    IFC2X3_IfcDoorStyleConstructionEnum_type = new enumeration_type(strings[413], 253, {
        strings[414],
        strings[415],
        strings[416],
        strings[417],
        strings[418],
        strings[419],
        strings[420],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDoorStyleOperationEnum_type = new enumeration_type(strings[421], 254, {
        strings[422],
        strings[423],
        strings[424],
        strings[425],
        strings[426],
        strings[427],
        strings[428],
        strings[429],
        strings[430],
        strings[431],
        strings[432],
        strings[433],
        strings[434],
        strings[435],
        strings[407],
        strings[408],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDoseEquivalentMeasure_type = new type_declaration(strings[436], 255, new simple_type(simple_type::real_type));
    IFC2X3_IfcDuctFittingTypeEnum_type = new enumeration_type(strings[437], 263, {
        strings[125],
        strings[438],
        strings[439],
        strings[440],
        strings[441],
        strings[442],
        strings[443],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDuctSegmentTypeEnum_type = new enumeration_type(strings[444], 265, {
        strings[445],
        strings[446],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDuctSilencerTypeEnum_type = new enumeration_type(strings[447], 267, {
        strings[448],
        strings[449],
        strings[450],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcDynamicViscosityMeasure_type = new type_declaration(strings[451], 268, new simple_type(simple_type::real_type));
    IFC2X3_IfcElectricApplianceTypeEnum_type = new enumeration_type(strings[452], 277, {
        strings[453],
        strings[454],
        strings[455],
        strings[456],
        strings[457],
        strings[458],
        strings[459],
        strings[460],
        strings[461],
        strings[462],
        strings[463],
        strings[464],
        strings[465],
        strings[466],
        strings[467],
        strings[468],
        strings[469],
        strings[470],
        strings[471],
        strings[472],
        strings[473],
        strings[474],
        strings[475],
        strings[476],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcElectricCapacitanceMeasure_type = new type_declaration(strings[477], 278, new simple_type(simple_type::real_type));
    IFC2X3_IfcElectricChargeMeasure_type = new type_declaration(strings[478], 279, new simple_type(simple_type::real_type));
    IFC2X3_IfcElectricConductanceMeasure_type = new type_declaration(strings[479], 280, new simple_type(simple_type::real_type));
    IFC2X3_IfcElectricCurrentEnum_type = new enumeration_type(strings[480], 281, {
        strings[481],
        strings[482],
        strings[29]
    });
    IFC2X3_IfcElectricCurrentMeasure_type = new type_declaration(strings[483], 282, new simple_type(simple_type::real_type));
    IFC2X3_IfcElectricDistributionPointFunctionEnum_type = new enumeration_type(strings[484], 284, {
        strings[485],
        strings[486],
        strings[487],
        strings[488],
        strings[489],
        strings[490],
        strings[491],
        strings[492],
        strings[493],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcElectricFlowStorageDeviceTypeEnum_type = new enumeration_type(strings[494], 286, {
        strings[495],
        strings[496],
        strings[497],
        strings[498],
        strings[499],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcElectricGeneratorTypeEnum_type = new enumeration_type(strings[500], 288, {
        strings[28],
        strings[29]
    });
    IFC2X3_IfcElectricHeaterTypeEnum_type = new enumeration_type(strings[501], 290, {
        strings[502],
        strings[503],
        strings[504],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcElectricMotorTypeEnum_type = new enumeration_type(strings[505], 292, {
        strings[506],
        strings[507],
        strings[508],
        strings[509],
        strings[510],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcElectricResistanceMeasure_type = new type_declaration(strings[511], 293, new simple_type(simple_type::real_type));
    IFC2X3_IfcElectricTimeControlTypeEnum_type = new enumeration_type(strings[512], 295, {
        strings[513],
        strings[514],
        strings[515],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcElectricVoltageMeasure_type = new type_declaration(strings[516], 296, new simple_type(simple_type::real_type));
    IFC2X3_IfcElementAssemblyTypeEnum_type = new enumeration_type(strings[517], 300, {
        strings[518],
        strings[519],
        strings[520],
        strings[521],
        strings[522],
        strings[523],
        strings[524],
        strings[525],
        strings[526],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcElementCompositionEnum_type = new enumeration_type(strings[527], 303, {
        strings[528],
        strings[529],
        strings[530]
    });
    IFC2X3_IfcEnergyMeasure_type = new type_declaration(strings[531], 310, new simple_type(simple_type::real_type));
    IFC2X3_IfcEnergySequenceEnum_type = new enumeration_type(strings[532], 312, {
        strings[533],
        strings[534],
        strings[535],
        strings[536],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcEnvironmentalImpactCategoryEnum_type = new enumeration_type(strings[537], 313, {
        strings[538],
        strings[539],
        strings[540],
        strings[541],
        strings[542],
        strings[543],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcEvaporativeCoolerTypeEnum_type = new enumeration_type(strings[544], 318, {
        strings[545],
        strings[546],
        strings[547],
        strings[548],
        strings[549],
        strings[550],
        strings[551],
        strings[552],
        strings[553],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcEvaporatorTypeEnum_type = new enumeration_type(strings[554], 320, {
        strings[555],
        strings[556],
        strings[557],
        strings[558],
        strings[559],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcFanTypeEnum_type = new enumeration_type(strings[560], 337, {
        strings[561],
        strings[562],
        strings[563],
        strings[564],
        strings[565],
        strings[566],
        strings[567],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcFilterTypeEnum_type = new enumeration_type(strings[568], 350, {
        strings[569],
        strings[570],
        strings[571],
        strings[572],
        strings[573],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcFireSuppressionTerminalTypeEnum_type = new enumeration_type(strings[574], 352, {
        strings[575],
        strings[576],
        strings[577],
        strings[578],
        strings[579],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcFlowDirectionEnum_type = new enumeration_type(strings[580], 355, {
        strings[581],
        strings[582],
        strings[583],
        strings[29]
    });
    IFC2X3_IfcFlowInstrumentTypeEnum_type = new enumeration_type(strings[584], 359, {
        strings[585],
        strings[586],
        strings[587],
        strings[588],
        strings[589],
        strings[590],
        strings[591],
        strings[592],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcFlowMeterTypeEnum_type = new enumeration_type(strings[593], 361, {
        strings[594],
        strings[595],
        strings[596],
        strings[597],
        strings[598],
        strings[599],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcFontStyle_type = new type_declaration(strings[600], 373, new simple_type(simple_type::string_type));
    IFC2X3_IfcFontVariant_type = new type_declaration(strings[601], 374, new simple_type(simple_type::string_type));
    IFC2X3_IfcFontWeight_type = new type_declaration(strings[602], 375, new simple_type(simple_type::string_type));
    IFC2X3_IfcFootingTypeEnum_type = new enumeration_type(strings[603], 377, {
        strings[604],
        strings[605],
        strings[606],
        strings[607],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcForceMeasure_type = new type_declaration(strings[608], 378, new simple_type(simple_type::real_type));
    IFC2X3_IfcFrequencyMeasure_type = new type_declaration(strings[609], 379, new simple_type(simple_type::real_type));
    IFC2X3_IfcGasTerminalTypeEnum_type = new enumeration_type(strings[610], 386, {
        strings[611],
        strings[612],
        strings[613],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcGeometricProjectionEnum_type = new enumeration_type(strings[614], 390, {
        strings[615],
        strings[616],
        strings[617],
        strings[618],
        strings[619],
        strings[620],
        strings[621],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcGlobalOrLocalEnum_type = new enumeration_type(strings[622], 397, {
        strings[623],
        strings[624]
    });
    IFC2X3_IfcGloballyUniqueId_type = new type_declaration(strings[625], 396, new simple_type(simple_type::string_type));
    IFC2X3_IfcHeatExchangerTypeEnum_type = new enumeration_type(strings[626], 405, {
        strings[627],
        strings[628],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcHeatFluxDensityMeasure_type = new type_declaration(strings[629], 406, new simple_type(simple_type::real_type));
    IFC2X3_IfcHeatingValueMeasure_type = new type_declaration(strings[630], 407, new simple_type(simple_type::real_type));
    IFC2X3_IfcHourInDay_type = new type_declaration(strings[631], 408, new simple_type(simple_type::integer_type));
    IFC2X3_IfcHumidifierTypeEnum_type = new enumeration_type(strings[632], 410, {
        strings[633],
        strings[634],
        strings[635],
        strings[636],
        strings[637],
        strings[638],
        strings[639],
        strings[640],
        strings[641],
        strings[642],
        strings[643],
        strings[644],
        strings[645],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcIdentifier_type = new type_declaration(strings[646], 412, new simple_type(simple_type::string_type));
    IFC2X3_IfcIlluminanceMeasure_type = new type_declaration(strings[647], 413, new simple_type(simple_type::real_type));
    IFC2X3_IfcInductanceMeasure_type = new type_declaration(strings[648], 415, new simple_type(simple_type::real_type));
    IFC2X3_IfcInteger_type = new type_declaration(strings[649], 416, new simple_type(simple_type::integer_type));
    IFC2X3_IfcIntegerCountRateMeasure_type = new type_declaration(strings[650], 417, new simple_type(simple_type::integer_type));
    IFC2X3_IfcInternalOrExternalEnum_type = new enumeration_type(strings[651], 418, {
        strings[652],
        strings[653],
        strings[29]
    });
    IFC2X3_IfcInventoryTypeEnum_type = new enumeration_type(strings[654], 420, {
        strings[655],
        strings[656],
        strings[657],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcIonConcentrationMeasure_type = new type_declaration(strings[658], 421, new simple_type(simple_type::real_type));
    IFC2X3_IfcIsothermalMoistureCapacityMeasure_type = new type_declaration(strings[659], 425, new simple_type(simple_type::real_type));
    IFC2X3_IfcJunctionBoxTypeEnum_type = new enumeration_type(strings[660], 427, {
        strings[28],
        strings[29]
    });
    IFC2X3_IfcKinematicViscosityMeasure_type = new type_declaration(strings[661], 428, new simple_type(simple_type::real_type));
    IFC2X3_IfcLabel_type = new type_declaration(strings[662], 429, new simple_type(simple_type::string_type));
    IFC2X3_IfcLampTypeEnum_type = new enumeration_type(strings[663], 432, {
        strings[664],
        strings[665],
        strings[666],
        strings[667],
        strings[668],
        strings[669],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcLayerSetDirectionEnum_type = new enumeration_type(strings[670], 434, {
        strings[671],
        strings[672],
        strings[673]
    });
    IFC2X3_IfcLengthMeasure_type = new type_declaration(strings[674], 435, new simple_type(simple_type::real_type));
    IFC2X3_IfcLightDistributionCurveEnum_type = new enumeration_type(strings[675], 439, {
        strings[676],
        strings[677],
        strings[678],
        strings[29]
    });
    IFC2X3_IfcLightEmissionSourceEnum_type = new enumeration_type(strings[679], 442, {
        strings[664],
        strings[665],
        strings[666],
        strings[667],
        strings[680],
        strings[681],
        strings[682],
        strings[683],
        strings[668],
        strings[669],
        strings[29]
    });
    IFC2X3_IfcLightFixtureTypeEnum_type = new enumeration_type(strings[684], 444, {
        strings[685],
        strings[686],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcLinearForceMeasure_type = new type_declaration(strings[687], 454, new simple_type(simple_type::real_type));
    IFC2X3_IfcLinearMomentMeasure_type = new type_declaration(strings[688], 455, new simple_type(simple_type::real_type));
    IFC2X3_IfcLinearStiffnessMeasure_type = new type_declaration(strings[689], 456, new simple_type(simple_type::real_type));
    IFC2X3_IfcLinearVelocityMeasure_type = new type_declaration(strings[690], 457, new simple_type(simple_type::real_type));
    IFC2X3_IfcLoadGroupTypeEnum_type = new enumeration_type(strings[691], 458, {
        strings[692],
        strings[693],
        strings[694],
        strings[695],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcLogical_type = new type_declaration(strings[696], 461, new simple_type(simple_type::logical_type));
    IFC2X3_IfcLogicalOperatorEnum_type = new enumeration_type(strings[697], 462, {
        strings[698],
        strings[699]
    });
    IFC2X3_IfcLuminousFluxMeasure_type = new type_declaration(strings[700], 465, new simple_type(simple_type::real_type));
    IFC2X3_IfcLuminousIntensityDistributionMeasure_type = new type_declaration(strings[701], 466, new simple_type(simple_type::real_type));
    IFC2X3_IfcLuminousIntensityMeasure_type = new type_declaration(strings[702], 467, new simple_type(simple_type::real_type));
    IFC2X3_IfcMagneticFluxDensityMeasure_type = new type_declaration(strings[703], 468, new simple_type(simple_type::real_type));
    IFC2X3_IfcMagneticFluxMeasure_type = new type_declaration(strings[704], 469, new simple_type(simple_type::real_type));
    IFC2X3_IfcMassDensityMeasure_type = new type_declaration(strings[705], 472, new simple_type(simple_type::real_type));
    IFC2X3_IfcMassFlowRateMeasure_type = new type_declaration(strings[706], 473, new simple_type(simple_type::real_type));
    IFC2X3_IfcMassMeasure_type = new type_declaration(strings[707], 474, new simple_type(simple_type::real_type));
    IFC2X3_IfcMassPerLengthMeasure_type = new type_declaration(strings[708], 475, new simple_type(simple_type::real_type));
    IFC2X3_IfcMemberTypeEnum_type = new enumeration_type(strings[709], 494, {
        strings[710],
        strings[711],
        strings[712],
        strings[713],
        strings[714],
        strings[627],
        strings[715],
        strings[716],
        strings[717],
        strings[718],
        strings[719],
        strings[720],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcMinuteInHour_type = new type_declaration(strings[721], 497, new simple_type(simple_type::integer_type));
    IFC2X3_IfcModulusOfElasticityMeasure_type = new type_declaration(strings[722], 498, new simple_type(simple_type::real_type));
    IFC2X3_IfcModulusOfLinearSubgradeReactionMeasure_type = new type_declaration(strings[723], 499, new simple_type(simple_type::real_type));
    IFC2X3_IfcModulusOfRotationalSubgradeReactionMeasure_type = new type_declaration(strings[724], 500, new simple_type(simple_type::real_type));
    IFC2X3_IfcModulusOfSubgradeReactionMeasure_type = new type_declaration(strings[725], 501, new simple_type(simple_type::real_type));
    IFC2X3_IfcMoistureDiffusivityMeasure_type = new type_declaration(strings[726], 502, new simple_type(simple_type::real_type));
    IFC2X3_IfcMolecularWeightMeasure_type = new type_declaration(strings[727], 503, new simple_type(simple_type::real_type));
    IFC2X3_IfcMomentOfInertiaMeasure_type = new type_declaration(strings[728], 504, new simple_type(simple_type::real_type));
    IFC2X3_IfcMonetaryMeasure_type = new type_declaration(strings[729], 505, new simple_type(simple_type::real_type));
    IFC2X3_IfcMonthInYearNumber_type = new type_declaration(strings[730], 507, new simple_type(simple_type::integer_type));
    IFC2X3_IfcMotorConnectionTypeEnum_type = new enumeration_type(strings[731], 509, {
        strings[732],
        strings[733],
        strings[734],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcNullStyle_type = new enumeration_type(strings[735], 513, {
        strings[736]
    });
    IFC2X3_IfcNumericMeasure_type = new type_declaration(strings[737], 514, new simple_type(simple_type::number_type));
    IFC2X3_IfcObjectTypeEnum_type = new enumeration_type(strings[738], 521, {
        strings[739],
        strings[740],
        strings[741],
        strings[742],
        strings[743],
        strings[744],
        strings[745],
        strings[29]
    });
    IFC2X3_IfcObjectiveEnum_type = new enumeration_type(strings[746], 518, {
        strings[747],
        strings[748],
        strings[749],
        strings[750],
        strings[751],
        strings[752],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcOccupantTypeEnum_type = new enumeration_type(strings[753], 523, {
        strings[754],
        strings[755],
        strings[756],
        strings[757],
        strings[758],
        strings[759],
        strings[760],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcOutletTypeEnum_type = new enumeration_type(strings[761], 536, {
        strings[762],
        strings[763],
        strings[764],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcPHMeasure_type = new type_declaration(strings[765], 547, new simple_type(simple_type::real_type));
    IFC2X3_IfcParameterValue_type = new type_declaration(strings[766], 539, new simple_type(simple_type::real_type));
    IFC2X3_IfcPermeableCoveringOperationEnum_type = new enumeration_type(strings[767], 542, {
        strings[768],
        strings[769],
        strings[770],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcPhysicalOrVirtualEnum_type = new enumeration_type(strings[771], 549, {
        strings[772],
        strings[773],
        strings[29]
    });
    IFC2X3_IfcPileConstructionEnum_type = new enumeration_type(strings[774], 553, {
        strings[775],
        strings[776],
        strings[777],
        strings[778],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcPileTypeEnum_type = new enumeration_type(strings[779], 554, {
        strings[780],
        strings[781],
        strings[782],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcPipeFittingTypeEnum_type = new enumeration_type(strings[783], 556, {
        strings[125],
        strings[438],
        strings[439],
        strings[440],
        strings[441],
        strings[442],
        strings[443],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcPipeSegmentTypeEnum_type = new enumeration_type(strings[784], 558, {
        strings[446],
        strings[445],
        strings[785],
        strings[786],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcPlanarForceMeasure_type = new type_declaration(strings[787], 563, new simple_type(simple_type::real_type));
    IFC2X3_IfcPlaneAngleMeasure_type = new type_declaration(strings[788], 565, new simple_type(simple_type::real_type));
    IFC2X3_IfcPlateTypeEnum_type = new enumeration_type(strings[789], 568, {
        strings[790],
        strings[791],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcPositiveLengthMeasure_type = new type_declaration(strings[792], 577, new named_type(IFC2X3_IfcLengthMeasure_type));
    IFC2X3_IfcPositivePlaneAngleMeasure_type = new type_declaration(strings[793], 578, new named_type(IFC2X3_IfcPlaneAngleMeasure_type));
    IFC2X3_IfcPowerMeasure_type = new type_declaration(strings[794], 581, new simple_type(simple_type::real_type));
    IFC2X3_IfcPresentableText_type = new type_declaration(strings[795], 590, new simple_type(simple_type::string_type));
    IFC2X3_IfcPressureMeasure_type = new type_declaration(strings[796], 596, new simple_type(simple_type::real_type));
    IFC2X3_IfcProcedureTypeEnum_type = new enumeration_type(strings[797], 598, {
        strings[798],
        strings[799],
        strings[800],
        strings[801],
        strings[802],
        strings[803],
        strings[804],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcProfileTypeEnum_type = new enumeration_type(strings[805], 606, {
        strings[806],
        strings[807]
    });
    IFC2X3_IfcProjectOrderRecordTypeEnum_type = new enumeration_type(strings[808], 613, {
        strings[809],
        strings[810],
        strings[811],
        strings[812],
        strings[813],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcProjectOrderTypeEnum_type = new enumeration_type(strings[814], 614, {
        strings[815],
        strings[816],
        strings[817],
        strings[818],
        strings[819],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcProjectedOrTrueLengthEnum_type = new enumeration_type(strings[820], 608, {
        strings[821],
        strings[822]
    });
    IFC2X3_IfcPropertySourceEnum_type = new enumeration_type(strings[823], 627, {
        strings[824],
        strings[825],
        strings[826],
        strings[323],
        strings[827],
        strings[828],
        strings[321],
        strings[28],
        strings[829]
    });
    IFC2X3_IfcProtectiveDeviceTypeEnum_type = new enumeration_type(strings[830], 630, {
        strings[831],
        strings[832],
        strings[833],
        strings[834],
        strings[835],
        strings[836],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcPumpTypeEnum_type = new enumeration_type(strings[837], 633, {
        strings[838],
        strings[839],
        strings[840],
        strings[841],
        strings[842],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcRadioActivityMeasure_type = new type_declaration(strings[843], 640, new simple_type(simple_type::real_type));
    IFC2X3_IfcRailingTypeEnum_type = new enumeration_type(strings[844], 644, {
        strings[845],
        strings[846],
        strings[847],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcRampFlightTypeEnum_type = new enumeration_type(strings[848], 648, {
        strings[849],
        strings[850],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcRampTypeEnum_type = new enumeration_type(strings[851], 649, {
        strings[852],
        strings[853],
        strings[854],
        strings[855],
        strings[856],
        strings[857],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcRatioMeasure_type = new type_declaration(strings[858], 650, new simple_type(simple_type::real_type));
    IFC2X3_IfcReal_type = new type_declaration(strings[859], 652, new simple_type(simple_type::real_type));
    IFC2X3_IfcReflectanceMethodEnum_type = new enumeration_type(strings[860], 658, {
        strings[861],
        strings[862],
        strings[863],
        strings[864],
        strings[865],
        strings[866],
        strings[867],
        strings[420],
        strings[868],
        strings[29]
    });
    IFC2X3_IfcReinforcingBarRoleEnum_type = new enumeration_type(strings[869], 663, {
        strings[870],
        strings[871],
        strings[872],
        strings[720],
        strings[873],
        strings[874],
        strings[875],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcReinforcingBarSurfaceEnum_type = new enumeration_type(strings[876], 664, {
        strings[877],
        strings[878]
    });
    IFC2X3_IfcResourceConsumptionEnum_type = new enumeration_type(strings[879], 723, {
        strings[880],
        strings[881],
        strings[882],
        strings[883],
        strings[884],
        strings[885],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcRibPlateDirectionEnum_type = new enumeration_type(strings[886], 725, {
        strings[887],
        strings[888]
    });
    IFC2X3_IfcRoleEnum_type = new enumeration_type(strings[889], 729, {
        strings[890],
        strings[891],
        strings[892],
        strings[893],
        strings[894],
        strings[895],
        strings[896],
        strings[897],
        strings[898],
        strings[899],
        strings[900],
        strings[901],
        strings[902],
        strings[903],
        strings[904],
        strings[905],
        strings[906],
        strings[759],
        strings[907],
        strings[908],
        strings[909],
        strings[910],
        strings[28]
    });
    IFC2X3_IfcRoofTypeEnum_type = new enumeration_type(strings[911], 731, {
        strings[912],
        strings[913],
        strings[914],
        strings[915],
        strings[916],
        strings[917],
        strings[918],
        strings[919],
        strings[920],
        strings[921],
        strings[922],
        strings[923],
        strings[924],
        strings[29]
    });
    IFC2X3_IfcRotationalFrequencyMeasure_type = new type_declaration(strings[925], 733, new simple_type(simple_type::real_type));
    IFC2X3_IfcRotationalMassMeasure_type = new type_declaration(strings[926], 734, new simple_type(simple_type::real_type));
    IFC2X3_IfcRotationalStiffnessMeasure_type = new type_declaration(strings[927], 735, new simple_type(simple_type::real_type));
    IFC2X3_IfcSIPrefix_type = new enumeration_type(strings[928], 763, {
        strings[929],
        strings[930],
        strings[931],
        strings[932],
        strings[933],
        strings[934],
        strings[935],
        strings[936],
        strings[937],
        strings[938],
        strings[939],
        strings[940],
        strings[941],
        strings[942],
        strings[943],
        strings[944]
    });
    IFC2X3_IfcSIUnitName_type = new enumeration_type(strings[945], 766, {
        strings[946],
        strings[947],
        strings[948],
        strings[949],
        strings[950],
        strings[951],
        strings[952],
        strings[953],
        strings[954],
        strings[955],
        strings[956],
        strings[957],
        strings[958],
        strings[959],
        strings[960],
        strings[961],
        strings[962],
        strings[963],
        strings[964],
        strings[965],
        strings[966],
        strings[967],
        strings[968],
        strings[969],
        strings[970],
        strings[971],
        strings[972],
        strings[973],
        strings[974],
        strings[975]
    });
    IFC2X3_IfcSanitaryTerminalTypeEnum_type = new enumeration_type(strings[976], 739, {
        strings[977],
        strings[978],
        strings[979],
        strings[980],
        strings[582],
        strings[981],
        strings[982],
        strings[983],
        strings[984],
        strings[985],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcSecondInMinute_type = new type_declaration(strings[986], 741, new simple_type(simple_type::real_type));
    IFC2X3_IfcSectionModulusMeasure_type = new type_declaration(strings[987], 744, new simple_type(simple_type::real_type));
    IFC2X3_IfcSectionTypeEnum_type = new enumeration_type(strings[988], 747, {
        strings[989],
        strings[990]
    });
    IFC2X3_IfcSectionalAreaIntegralMeasure_type = new type_declaration(strings[991], 742, new simple_type(simple_type::real_type));
    IFC2X3_IfcSensorTypeEnum_type = new enumeration_type(strings[992], 749, {
        strings[993],
        strings[994],
        strings[995],
        strings[996],
        strings[997],
        strings[998],
        strings[999],
        strings[1000],
        strings[1001],
        strings[1002],
        strings[1003],
        strings[1004],
        strings[1005],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcSequenceEnum_type = new enumeration_type(strings[1006], 750, {
        strings[1007],
        strings[1008],
        strings[1009],
        strings[1010],
        strings[29]
    });
    IFC2X3_IfcServiceLifeFactorTypeEnum_type = new enumeration_type(strings[1011], 753, {
        strings[1012],
        strings[1013],
        strings[1014],
        strings[1015],
        strings[1016],
        strings[1017],
        strings[1018],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcServiceLifeTypeEnum_type = new enumeration_type(strings[1019], 754, {
        strings[1020],
        strings[1021],
        strings[1022],
        strings[1023],
        strings[1024]
    });
    IFC2X3_IfcShearModulusMeasure_type = new type_declaration(strings[1025], 758, new simple_type(simple_type::real_type));
    IFC2X3_IfcSlabTypeEnum_type = new enumeration_type(strings[1026], 770, {
        strings[1027],
        strings[1028],
        strings[1029],
        strings[1030],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcSolidAngleMeasure_type = new type_declaration(strings[1031], 772, new simple_type(simple_type::real_type));
    IFC2X3_IfcSoundPowerMeasure_type = new type_declaration(strings[1032], 774, new simple_type(simple_type::real_type));
    IFC2X3_IfcSoundPressureMeasure_type = new type_declaration(strings[1033], 775, new simple_type(simple_type::real_type));
    IFC2X3_IfcSoundScaleEnum_type = new enumeration_type(strings[1034], 777, {
        strings[1035],
        strings[1036],
        strings[1037],
        strings[1038],
        strings[1039],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcSpaceHeaterTypeEnum_type = new enumeration_type(strings[1040], 781, {
        strings[1041],
        strings[1042],
        strings[1043],
        strings[1044],
        strings[1045],
        strings[1046],
        strings[1047],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcSpaceTypeEnum_type = new enumeration_type(strings[1048], 785, {
        strings[28],
        strings[29]
    });
    IFC2X3_IfcSpecificHeatCapacityMeasure_type = new type_declaration(strings[1049], 788, new simple_type(simple_type::real_type));
    IFC2X3_IfcSpecularExponent_type = new type_declaration(strings[1050], 789, new simple_type(simple_type::real_type));
    IFC2X3_IfcSpecularRoughness_type = new type_declaration(strings[1051], 791, new simple_type(simple_type::real_type));
    IFC2X3_IfcStackTerminalTypeEnum_type = new enumeration_type(strings[1052], 794, {
        strings[1053],
        strings[1054],
        strings[1055],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcStairFlightTypeEnum_type = new enumeration_type(strings[1056], 798, {
        strings[849],
        strings[1057],
        strings[850],
        strings[1058],
        strings[924],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcStairTypeEnum_type = new enumeration_type(strings[1059], 799, {
        strings[1060],
        strings[1061],
        strings[1062],
        strings[1063],
        strings[1064],
        strings[1065],
        strings[1066],
        strings[1067],
        strings[1068],
        strings[1069],
        strings[1070],
        strings[1071],
        strings[1072],
        strings[1073],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcStateEnum_type = new enumeration_type(strings[1074], 800, {
        strings[1075],
        strings[1076],
        strings[1077],
        strings[1078],
        strings[1079]
    });
    IFC2X3_IfcStructuralCurveTypeEnum_type = new enumeration_type(strings[1080], 810, {
        strings[1081],
        strings[1082],
        strings[1083],
        strings[1084],
        strings[1085],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcStructuralSurfaceTypeEnum_type = new enumeration_type(strings[1086], 837, {
        strings[1087],
        strings[1088],
        strings[1089],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcSurfaceSide_type = new enumeration_type(strings[1090], 849, {
        strings[381],
        strings[382],
        strings[1091]
    });
    IFC2X3_IfcSurfaceTextureEnum_type = new enumeration_type(strings[1092], 858, {
        strings[1093],
        strings[1094],
        strings[1095],
        strings[1096],
        strings[1097],
        strings[1098],
        strings[1099],
        strings[1100],
        strings[29]
    });
    IFC2X3_IfcSwitchingDeviceTypeEnum_type = new enumeration_type(strings[1101], 863, {
        strings[1102],
        strings[1103],
        strings[1104],
        strings[1105],
        strings[1106],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcTankTypeEnum_type = new enumeration_type(strings[1107], 871, {
        strings[1108],
        strings[1109],
        strings[1110],
        strings[1111],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcTemperatureGradientMeasure_type = new type_declaration(strings[1112], 874, new simple_type(simple_type::real_type));
    IFC2X3_IfcTendonTypeEnum_type = new enumeration_type(strings[1113], 877, {
        strings[1114],
        strings[1115],
        strings[1116],
        strings[1117],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcText_type = new type_declaration(strings[1118], 879, new simple_type(simple_type::string_type));
    IFC2X3_IfcTextAlignment_type = new type_declaration(strings[1119], 880, new simple_type(simple_type::string_type));
    IFC2X3_IfcTextDecoration_type = new type_declaration(strings[1120], 881, new simple_type(simple_type::string_type));
    IFC2X3_IfcTextFontName_type = new type_declaration(strings[1121], 882, new simple_type(simple_type::string_type));
    IFC2X3_IfcTextPath_type = new enumeration_type(strings[1122], 886, {
        strings[410],
        strings[412],
        strings[1123],
        strings[1124]
    });
    IFC2X3_IfcTextTransformation_type = new type_declaration(strings[1125], 893, new simple_type(simple_type::string_type));
    IFC2X3_IfcThermalAdmittanceMeasure_type = new type_declaration(strings[1126], 898, new simple_type(simple_type::real_type));
    IFC2X3_IfcThermalConductivityMeasure_type = new type_declaration(strings[1127], 899, new simple_type(simple_type::real_type));
    IFC2X3_IfcThermalExpansionCoefficientMeasure_type = new type_declaration(strings[1128], 900, new simple_type(simple_type::real_type));
    IFC2X3_IfcThermalLoadSourceEnum_type = new enumeration_type(strings[1129], 901, {
        strings[1130],
        strings[1131],
        strings[1132],
        strings[1133],
        strings[1134],
        strings[1135],
        strings[1136],
        strings[1137],
        strings[1138],
        strings[1139],
        strings[1140],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcThermalLoadTypeEnum_type = new enumeration_type(strings[1141], 902, {
        strings[1142],
        strings[1143],
        strings[1144],
        strings[29]
    });
    IFC2X3_IfcThermalResistanceMeasure_type = new type_declaration(strings[1145], 904, new simple_type(simple_type::real_type));
    IFC2X3_IfcThermalTransmittanceMeasure_type = new type_declaration(strings[1146], 905, new simple_type(simple_type::real_type));
    IFC2X3_IfcThermodynamicTemperatureMeasure_type = new type_declaration(strings[1147], 906, new simple_type(simple_type::real_type));
    IFC2X3_IfcTimeMeasure_type = new type_declaration(strings[1148], 907, new simple_type(simple_type::real_type));
    IFC2X3_IfcTimeSeriesDataTypeEnum_type = new enumeration_type(strings[1149], 909, {
        strings[1150],
        strings[1151],
        strings[1152],
        strings[1153],
        strings[1154],
        strings[1155],
        strings[29]
    });
    IFC2X3_IfcTimeSeriesScheduleTypeEnum_type = new enumeration_type(strings[1156], 912, {
        strings[1157],
        strings[1158],
        strings[1159],
        strings[1160],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcTimeStamp_type = new type_declaration(strings[1161], 914, new simple_type(simple_type::integer_type));
    IFC2X3_IfcTorqueMeasure_type = new type_declaration(strings[1162], 917, new simple_type(simple_type::real_type));
    IFC2X3_IfcTransformerTypeEnum_type = new enumeration_type(strings[1163], 919, {
        strings[24],
        strings[1164],
        strings[1165],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcTransitionCode_type = new enumeration_type(strings[1166], 920, {
        strings[1167],
        strings[1150],
        strings[1168],
        strings[1169]
    });
    IFC2X3_IfcTransportElementTypeEnum_type = new enumeration_type(strings[1170], 923, {
        strings[1171],
        strings[1172],
        strings[1173],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcTrimmingPreference_type = new enumeration_type(strings[1174], 926, {
        strings[1175],
        strings[1176],
        strings[102]
    });
    IFC2X3_IfcTubeBundleTypeEnum_type = new enumeration_type(strings[1177], 930, {
        strings[1178],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcUnitEnum_type = new enumeration_type(strings[1179], 938, {
        strings[1180],
        strings[1181],
        strings[1182],
        strings[1183],
        strings[1184],
        strings[1185],
        strings[1186],
        strings[1187],
        strings[1188],
        strings[1189],
        strings[1190],
        strings[1191],
        strings[1192],
        strings[1193],
        strings[1194],
        strings[1195],
        strings[1196],
        strings[1197],
        strings[1198],
        strings[1199],
        strings[1200],
        strings[1201],
        strings[1202],
        strings[1203],
        strings[1204],
        strings[1205],
        strings[1206],
        strings[1207],
        strings[1208],
        strings[28]
    });
    IFC2X3_IfcUnitaryEquipmentTypeEnum_type = new enumeration_type(strings[1209], 936, {
        strings[1210],
        strings[1211],
        strings[1212],
        strings[1213],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcValveTypeEnum_type = new enumeration_type(strings[1214], 942, {
        strings[1215],
        strings[1216],
        strings[1217],
        strings[1218],
        strings[828],
        strings[1219],
        strings[1220],
        strings[1221],
        strings[1222],
        strings[1223],
        strings[1224],
        strings[1225],
        strings[1226],
        strings[1227],
        strings[1228],
        strings[1229],
        strings[1230],
        strings[1231],
        strings[1232],
        strings[1233],
        strings[1234],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcVaporPermeabilityMeasure_type = new type_declaration(strings[1235], 943, new simple_type(simple_type::real_type));
    IFC2X3_IfcVibrationIsolatorTypeEnum_type = new enumeration_type(strings[1236], 951, {
        strings[1237],
        strings[1238],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcVolumeMeasure_type = new type_declaration(strings[1239], 954, new simple_type(simple_type::real_type));
    IFC2X3_IfcVolumetricFlowRateMeasure_type = new type_declaration(strings[1240], 955, new simple_type(simple_type::real_type));
    IFC2X3_IfcWallTypeEnum_type = new enumeration_type(strings[1241], 959, {
        strings[1242],
        strings[1243],
        strings[871],
        strings[1244],
        strings[1245],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcWarpingConstantMeasure_type = new type_declaration(strings[1246], 960, new simple_type(simple_type::real_type));
    IFC2X3_IfcWarpingMomentMeasure_type = new type_declaration(strings[1247], 961, new simple_type(simple_type::real_type));
    IFC2X3_IfcWasteTerminalTypeEnum_type = new enumeration_type(strings[1248], 963, {
        strings[1249],
        strings[1250],
        strings[1251],
        strings[1252],
        strings[1253],
        strings[1254],
        strings[1255],
        strings[1256],
        strings[1257],
        strings[1258],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcWindowPanelOperationEnum_type = new enumeration_type(strings[1259], 967, {
        strings[1260],
        strings[1261],
        strings[1262],
        strings[1263],
        strings[1264],
        strings[1265],
        strings[1266],
        strings[1267],
        strings[1268],
        strings[1269],
        strings[1270],
        strings[1271],
        strings[1272],
        strings[29]
    });
    IFC2X3_IfcWindowPanelPositionEnum_type = new enumeration_type(strings[1273], 968, {
        strings[410],
        strings[411],
        strings[412],
        strings[1274],
        strings[1275],
        strings[29]
    });
    IFC2X3_IfcWindowStyleConstructionEnum_type = new enumeration_type(strings[1276], 971, {
        strings[414],
        strings[415],
        strings[416],
        strings[417],
        strings[418],
        strings[420],
        strings[1277],
        strings[29]
    });
    IFC2X3_IfcWindowStyleOperationEnum_type = new enumeration_type(strings[1278], 972, {
        strings[1279],
        strings[1280],
        strings[1281],
        strings[1282],
        strings[1283],
        strings[1284],
        strings[1285],
        strings[1286],
        strings[1287],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcWorkControlTypeEnum_type = new enumeration_type(strings[1288], 974, {
        strings[1289],
        strings[1290],
        strings[1291],
        strings[28],
        strings[29]
    });
    IFC2X3_IfcYearNumber_type = new type_declaration(strings[1292], 977, new simple_type(simple_type::integer_type));
    IFC2X3_IfcActorRole_type = new entity(strings[1293], false, 7, 0);
    IFC2X3_IfcAddress_type = new entity(strings[1294], true, 11, 0);
    IFC2X3_IfcApplication_type = new entity(strings[1295], false, 36, 0);
    IFC2X3_IfcAppliedValue_type = new entity(strings[1296], true, 37, 0);
    IFC2X3_IfcAppliedValueRelationship_type = new entity(strings[1297], false, 38, 0);
    IFC2X3_IfcApproval_type = new entity(strings[1298], false, 40, 0);
    IFC2X3_IfcApprovalActorRelationship_type = new entity(strings[1299], false, 41, 0);
    IFC2X3_IfcApprovalPropertyRelationship_type = new entity(strings[1300], false, 42, 0);
    IFC2X3_IfcApprovalRelationship_type = new entity(strings[1301], false, 43, 0);
    IFC2X3_IfcBoundaryCondition_type = new entity(strings[1302], true, 70, 0);
    IFC2X3_IfcBoundaryEdgeCondition_type = new entity(strings[1303], false, 71, IFC2X3_IfcBoundaryCondition_type);
    IFC2X3_IfcBoundaryFaceCondition_type = new entity(strings[1304], false, 72, IFC2X3_IfcBoundaryCondition_type);
    IFC2X3_IfcBoundaryNodeCondition_type = new entity(strings[1305], false, 73, IFC2X3_IfcBoundaryCondition_type);
    IFC2X3_IfcBoundaryNodeConditionWarping_type = new entity(strings[1306], false, 74, IFC2X3_IfcBoundaryNodeCondition_type);
    IFC2X3_IfcCalendarDate_type = new entity(strings[1307], false, 97, 0);
    IFC2X3_IfcClassification_type = new entity(strings[1308], false, 113, 0);
    IFC2X3_IfcClassificationItem_type = new entity(strings[1309], false, 114, 0);
    IFC2X3_IfcClassificationItemRelationship_type = new entity(strings[1310], false, 115, 0);
    IFC2X3_IfcClassificationNotation_type = new entity(strings[1311], false, 116, 0);
    IFC2X3_IfcClassificationNotationFacet_type = new entity(strings[1312], false, 117, 0);
    IFC2X3_IfcColourSpecification_type = new entity(strings[1313], true, 126, 0);
    IFC2X3_IfcConnectionGeometry_type = new entity(strings[1314], true, 146, 0);
    IFC2X3_IfcConnectionPointGeometry_type = new entity(strings[1315], false, 148, IFC2X3_IfcConnectionGeometry_type);
    IFC2X3_IfcConnectionPortGeometry_type = new entity(strings[1316], false, 149, IFC2X3_IfcConnectionGeometry_type);
    IFC2X3_IfcConnectionSurfaceGeometry_type = new entity(strings[1317], false, 150, IFC2X3_IfcConnectionGeometry_type);
    IFC2X3_IfcConstraint_type = new entity(strings[1318], true, 152, 0);
    IFC2X3_IfcConstraintAggregationRelationship_type = new entity(strings[1319], false, 153, 0);
    IFC2X3_IfcConstraintClassificationRelationship_type = new entity(strings[1320], false, 154, 0);
    IFC2X3_IfcConstraintRelationship_type = new entity(strings[1321], false, 156, 0);
    IFC2X3_IfcCoordinatedUniversalTimeOffset_type = new entity(strings[1322], false, 171, 0);
    IFC2X3_IfcCostValue_type = new entity(strings[1323], false, 175, IFC2X3_IfcAppliedValue_type);
    IFC2X3_IfcCurrencyRelationship_type = new entity(strings[1324], false, 188, 0);
    IFC2X3_IfcCurveStyleFont_type = new entity(strings[1325], false, 198, 0);
    IFC2X3_IfcCurveStyleFontAndScaling_type = new entity(strings[1326], false, 199, 0);
    IFC2X3_IfcCurveStyleFontPattern_type = new entity(strings[1327], false, 200, 0);
    IFC2X3_IfcDateAndTime_type = new entity(strings[1328], false, 205, 0);
    IFC2X3_IfcDerivedUnit_type = new entity(strings[1329], false, 213, 0);
    IFC2X3_IfcDerivedUnitElement_type = new entity(strings[1330], false, 214, 0);
    IFC2X3_IfcDimensionalExponents_type = new entity(strings[1331], false, 218, 0);
    IFC2X3_IfcDocumentElectronicFormat_type = new entity(strings[1332], false, 241, 0);
    IFC2X3_IfcDocumentInformation_type = new entity(strings[1333], false, 242, 0);
    IFC2X3_IfcDocumentInformationRelationship_type = new entity(strings[1334], false, 243, 0);
    IFC2X3_IfcDraughtingCalloutRelationship_type = new entity(strings[1335], false, 258, 0);
    IFC2X3_IfcEnvironmentalImpactValue_type = new entity(strings[1336], false, 314, IFC2X3_IfcAppliedValue_type);
    IFC2X3_IfcExternalReference_type = new entity(strings[1337], true, 326, 0);
    IFC2X3_IfcExternallyDefinedHatchStyle_type = new entity(strings[1338], false, 322, IFC2X3_IfcExternalReference_type);
    IFC2X3_IfcExternallyDefinedSurfaceStyle_type = new entity(strings[1339], false, 323, IFC2X3_IfcExternalReference_type);
    IFC2X3_IfcExternallyDefinedSymbol_type = new entity(strings[1340], false, 324, IFC2X3_IfcExternalReference_type);
    IFC2X3_IfcExternallyDefinedTextFont_type = new entity(strings[1341], false, 325, IFC2X3_IfcExternalReference_type);
    IFC2X3_IfcGridAxis_type = new entity(strings[1342], false, 399, 0);
    IFC2X3_IfcIrregularTimeSeriesValue_type = new entity(strings[1343], false, 423, 0);
    IFC2X3_IfcLibraryInformation_type = new entity(strings[1344], false, 436, 0);
    IFC2X3_IfcLibraryReference_type = new entity(strings[1345], false, 437, IFC2X3_IfcExternalReference_type);
    IFC2X3_IfcLightDistributionData_type = new entity(strings[1346], false, 440, 0);
    IFC2X3_IfcLightIntensityDistribution_type = new entity(strings[1347], false, 445, 0);
    IFC2X3_IfcLocalTime_type = new entity(strings[1348], false, 460, 0);
    IFC2X3_IfcMaterial_type = new entity(strings[1349], false, 476, 0);
    IFC2X3_IfcMaterialClassificationRelationship_type = new entity(strings[1350], false, 477, 0);
    IFC2X3_IfcMaterialLayer_type = new entity(strings[1351], false, 479, 0);
    IFC2X3_IfcMaterialLayerSet_type = new entity(strings[1352], false, 480, 0);
    IFC2X3_IfcMaterialLayerSetUsage_type = new entity(strings[1353], false, 481, 0);
    IFC2X3_IfcMaterialList_type = new entity(strings[1354], false, 482, 0);
    IFC2X3_IfcMaterialProperties_type = new entity(strings[1355], true, 483, 0);
    IFC2X3_IfcMeasureWithUnit_type = new entity(strings[1356], false, 486, 0);
    IFC2X3_IfcMechanicalMaterialProperties_type = new entity(strings[1357], false, 490, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcMechanicalSteelMaterialProperties_type = new entity(strings[1358], false, 491, IFC2X3_IfcMechanicalMaterialProperties_type);
    IFC2X3_IfcMetric_type = new entity(strings[1359], false, 495, IFC2X3_IfcConstraint_type);
    IFC2X3_IfcMonetaryUnit_type = new entity(strings[1360], false, 506, 0);
    IFC2X3_IfcNamedUnit_type = new entity(strings[1361], true, 511, 0);
    IFC2X3_IfcObjectPlacement_type = new entity(strings[1362], true, 519, 0);
    IFC2X3_IfcObjective_type = new entity(strings[1363], false, 517, IFC2X3_IfcConstraint_type);
    IFC2X3_IfcOpticalMaterialProperties_type = new entity(strings[1364], false, 529, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcOrganization_type = new entity(strings[1365], false, 531, 0);
    IFC2X3_IfcOrganizationRelationship_type = new entity(strings[1366], false, 532, 0);
    IFC2X3_IfcOwnerHistory_type = new entity(strings[1367], false, 537, 0);
    IFC2X3_IfcPerson_type = new entity(strings[1368], false, 545, 0);
    IFC2X3_IfcPersonAndOrganization_type = new entity(strings[1369], false, 546, 0);
    IFC2X3_IfcPhysicalQuantity_type = new entity(strings[1370], true, 550, 0);
    IFC2X3_IfcPhysicalSimpleQuantity_type = new entity(strings[1371], true, 551, IFC2X3_IfcPhysicalQuantity_type);
    IFC2X3_IfcPostalAddress_type = new entity(strings[1372], false, 580, IFC2X3_IfcAddress_type);
    IFC2X3_IfcPreDefinedItem_type = new entity(strings[1373], true, 585, 0);
    IFC2X3_IfcPreDefinedSymbol_type = new entity(strings[1374], true, 587, IFC2X3_IfcPreDefinedItem_type);
    IFC2X3_IfcPreDefinedTerminatorSymbol_type = new entity(strings[1375], false, 588, IFC2X3_IfcPreDefinedSymbol_type);
    IFC2X3_IfcPreDefinedTextFont_type = new entity(strings[1376], true, 589, IFC2X3_IfcPreDefinedItem_type);
    IFC2X3_IfcPresentationLayerAssignment_type = new entity(strings[1377], false, 591, 0);
    IFC2X3_IfcPresentationLayerWithStyle_type = new entity(strings[1378], false, 592, IFC2X3_IfcPresentationLayerAssignment_type);
    IFC2X3_IfcPresentationStyle_type = new entity(strings[1379], true, 593, 0);
    IFC2X3_IfcPresentationStyleAssignment_type = new entity(strings[1380], false, 594, 0);
    IFC2X3_IfcProductRepresentation_type = new entity(strings[1381], false, 602, 0);
    IFC2X3_IfcProductsOfCombustionProperties_type = new entity(strings[1382], false, 603, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcProfileDef_type = new entity(strings[1383], true, 604, 0);
    IFC2X3_IfcProfileProperties_type = new entity(strings[1384], true, 605, 0);
    IFC2X3_IfcProperty_type = new entity(strings[1385], true, 615, 0);
    IFC2X3_IfcPropertyConstraintRelationship_type = new entity(strings[1386], false, 617, 0);
    IFC2X3_IfcPropertyDependencyRelationship_type = new entity(strings[1387], false, 619, 0);
    IFC2X3_IfcPropertyEnumeration_type = new entity(strings[1388], false, 621, 0);
    IFC2X3_IfcQuantityArea_type = new entity(strings[1389], false, 634, IFC2X3_IfcPhysicalSimpleQuantity_type);
    IFC2X3_IfcQuantityCount_type = new entity(strings[1390], false, 635, IFC2X3_IfcPhysicalSimpleQuantity_type);
    IFC2X3_IfcQuantityLength_type = new entity(strings[1391], false, 636, IFC2X3_IfcPhysicalSimpleQuantity_type);
    IFC2X3_IfcQuantityTime_type = new entity(strings[1392], false, 637, IFC2X3_IfcPhysicalSimpleQuantity_type);
    IFC2X3_IfcQuantityVolume_type = new entity(strings[1393], false, 638, IFC2X3_IfcPhysicalSimpleQuantity_type);
    IFC2X3_IfcQuantityWeight_type = new entity(strings[1394], false, 639, IFC2X3_IfcPhysicalSimpleQuantity_type);
    IFC2X3_IfcReferencesValueDocument_type = new entity(strings[1395], false, 657, 0);
    IFC2X3_IfcReinforcementBarProperties_type = new entity(strings[1396], false, 660, 0);
    IFC2X3_IfcRelaxation_type = new entity(strings[1397], false, 687, 0);
    IFC2X3_IfcRepresentation_type = new entity(strings[1398], false, 718, 0);
    IFC2X3_IfcRepresentationContext_type = new entity(strings[1399], false, 719, 0);
    IFC2X3_IfcRepresentationItem_type = new entity(strings[1400], true, 720, 0);
    IFC2X3_IfcRepresentationMap_type = new entity(strings[1401], false, 721, 0);
    IFC2X3_IfcRibPlateProfileProperties_type = new entity(strings[1402], false, 726, IFC2X3_IfcProfileProperties_type);
    IFC2X3_IfcRoot_type = new entity(strings[1403], true, 732, 0);
    IFC2X3_IfcSIUnit_type = new entity(strings[1404], false, 765, IFC2X3_IfcNamedUnit_type);
    IFC2X3_IfcSectionProperties_type = new entity(strings[1405], false, 745, 0);
    IFC2X3_IfcSectionReinforcementProperties_type = new entity(strings[1406], false, 746, 0);
    IFC2X3_IfcShapeAspect_type = new entity(strings[1407], false, 755, 0);
    IFC2X3_IfcShapeModel_type = new entity(strings[1408], true, 756, IFC2X3_IfcRepresentation_type);
    IFC2X3_IfcShapeRepresentation_type = new entity(strings[1409], false, 757, IFC2X3_IfcShapeModel_type);
    IFC2X3_IfcSimpleProperty_type = new entity(strings[1410], true, 761, IFC2X3_IfcProperty_type);
    IFC2X3_IfcStructuralConnectionCondition_type = new entity(strings[1411], true, 806, 0);
    IFC2X3_IfcStructuralLoad_type = new entity(strings[1412], true, 814, 0);
    IFC2X3_IfcStructuralLoadStatic_type = new entity(strings[1413], true, 822, IFC2X3_IfcStructuralLoad_type);
    IFC2X3_IfcStructuralLoadTemperature_type = new entity(strings[1414], false, 823, IFC2X3_IfcStructuralLoadStatic_type);
    IFC2X3_IfcStyleModel_type = new entity(strings[1415], true, 841, IFC2X3_IfcRepresentation_type);
    IFC2X3_IfcStyledItem_type = new entity(strings[1416], false, 839, IFC2X3_IfcRepresentationItem_type);
    IFC2X3_IfcStyledRepresentation_type = new entity(strings[1417], false, 840, IFC2X3_IfcStyleModel_type);
    IFC2X3_IfcSurfaceStyle_type = new entity(strings[1418], false, 850, IFC2X3_IfcPresentationStyle_type);
    IFC2X3_IfcSurfaceStyleLighting_type = new entity(strings[1419], false, 852, 0);
    IFC2X3_IfcSurfaceStyleRefraction_type = new entity(strings[1420], false, 853, 0);
    IFC2X3_IfcSurfaceStyleShading_type = new entity(strings[1421], false, 855, 0);
    IFC2X3_IfcSurfaceStyleWithTextures_type = new entity(strings[1422], false, 856, 0);
    IFC2X3_IfcSurfaceTexture_type = new entity(strings[1423], true, 857, 0);
    IFC2X3_IfcSymbolStyle_type = new entity(strings[1424], false, 864, IFC2X3_IfcPresentationStyle_type);
    IFC2X3_IfcTable_type = new entity(strings[1425], false, 868, 0);
    IFC2X3_IfcTableRow_type = new entity(strings[1426], false, 869, 0);
    IFC2X3_IfcTelecomAddress_type = new entity(strings[1427], false, 873, IFC2X3_IfcAddress_type);
    IFC2X3_IfcTextStyle_type = new entity(strings[1428], false, 887, IFC2X3_IfcPresentationStyle_type);
    IFC2X3_IfcTextStyleFontModel_type = new entity(strings[1429], false, 888, IFC2X3_IfcPreDefinedTextFont_type);
    IFC2X3_IfcTextStyleForDefinedFont_type = new entity(strings[1430], false, 889, 0);
    IFC2X3_IfcTextStyleTextModel_type = new entity(strings[1431], false, 891, 0);
    IFC2X3_IfcTextStyleWithBoxCharacteristics_type = new entity(strings[1432], false, 892, 0);
    IFC2X3_IfcTextureCoordinate_type = new entity(strings[1433], true, 894, 0);
    IFC2X3_IfcTextureCoordinateGenerator_type = new entity(strings[1434], false, 895, IFC2X3_IfcTextureCoordinate_type);
    IFC2X3_IfcTextureMap_type = new entity(strings[1435], false, 896, IFC2X3_IfcTextureCoordinate_type);
    IFC2X3_IfcTextureVertex_type = new entity(strings[1436], false, 897, 0);
    IFC2X3_IfcThermalMaterialProperties_type = new entity(strings[1437], false, 903, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcTimeSeries_type = new entity(strings[1438], true, 908, 0);
    IFC2X3_IfcTimeSeriesReferenceRelationship_type = new entity(strings[1439], false, 910, 0);
    IFC2X3_IfcTimeSeriesValue_type = new entity(strings[1440], false, 913, 0);
    IFC2X3_IfcTopologicalRepresentationItem_type = new entity(strings[1441], true, 915, IFC2X3_IfcRepresentationItem_type);
    IFC2X3_IfcTopologyRepresentation_type = new entity(strings[1442], false, 916, IFC2X3_IfcShapeModel_type);
    IFC2X3_IfcUnitAssignment_type = new entity(strings[1443], false, 937, 0);
    IFC2X3_IfcVertex_type = new entity(strings[1444], false, 946, IFC2X3_IfcTopologicalRepresentationItem_type);
    IFC2X3_IfcVertexBasedTextureMap_type = new entity(strings[1445], false, 947, 0);
    IFC2X3_IfcVertexPoint_type = new entity(strings[1446], false, 949, IFC2X3_IfcVertex_type);
    IFC2X3_IfcVirtualGridIntersection_type = new entity(strings[1447], false, 953, 0);
    IFC2X3_IfcWaterProperties_type = new entity(strings[1448], false, 964, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcActorSelect_type = new select_type(strings[1449], 8, {
        IFC2X3_IfcOrganization_type,
        IFC2X3_IfcPerson_type,
        IFC2X3_IfcPersonAndOrganization_type
    });
    IFC2X3_IfcAppliedValueSelect_type = new select_type(strings[1450], 39, {
        IFC2X3_IfcMeasureWithUnit_type,
        IFC2X3_IfcMonetaryMeasure_type,
        IFC2X3_IfcRatioMeasure_type
    });
    IFC2X3_IfcBoxAlignment_type = new type_declaration(strings[1451], 78, new named_type(IFC2X3_IfcLabel_type));
    IFC2X3_IfcCharacterStyleSelect_type = new select_type(strings[1452], 107, {
        IFC2X3_IfcTextStyleForDefinedFont_type
    });
    IFC2X3_IfcConditionCriterionSelect_type = new select_type(strings[1453], 142, {
        IFC2X3_IfcLabel_type,
        IFC2X3_IfcMeasureWithUnit_type
    });
    IFC2X3_IfcDateTimeSelect_type = new select_type(strings[1454], 206, {
        IFC2X3_IfcCalendarDate_type,
        IFC2X3_IfcDateAndTime_type,
        IFC2X3_IfcLocalTime_type
    });
    IFC2X3_IfcDefinedSymbolSelect_type = new select_type(strings[1455], 210, {
        IFC2X3_IfcExternallyDefinedSymbol_type,
        IFC2X3_IfcPreDefinedSymbol_type
    });
    IFC2X3_IfcDerivedMeasureValue_type = new select_type(strings[1456], 211, {
        IFC2X3_IfcAbsorbedDoseMeasure_type,
        IFC2X3_IfcAccelerationMeasure_type,
        IFC2X3_IfcAngularVelocityMeasure_type,
        IFC2X3_IfcCompoundPlaneAngleMeasure_type,
        IFC2X3_IfcCurvatureMeasure_type,
        IFC2X3_IfcDoseEquivalentMeasure_type,
        IFC2X3_IfcDynamicViscosityMeasure_type,
        IFC2X3_IfcElectricCapacitanceMeasure_type,
        IFC2X3_IfcElectricChargeMeasure_type,
        IFC2X3_IfcElectricConductanceMeasure_type,
        IFC2X3_IfcElectricResistanceMeasure_type,
        IFC2X3_IfcElectricVoltageMeasure_type,
        IFC2X3_IfcEnergyMeasure_type,
        IFC2X3_IfcForceMeasure_type,
        IFC2X3_IfcFrequencyMeasure_type,
        IFC2X3_IfcHeatFluxDensityMeasure_type,
        IFC2X3_IfcHeatingValueMeasure_type,
        IFC2X3_IfcIlluminanceMeasure_type,
        IFC2X3_IfcInductanceMeasure_type,
        IFC2X3_IfcIntegerCountRateMeasure_type,
        IFC2X3_IfcIonConcentrationMeasure_type,
        IFC2X3_IfcIsothermalMoistureCapacityMeasure_type,
        IFC2X3_IfcKinematicViscosityMeasure_type,
        IFC2X3_IfcLinearForceMeasure_type,
        IFC2X3_IfcLinearMomentMeasure_type,
        IFC2X3_IfcLinearStiffnessMeasure_type,
        IFC2X3_IfcLinearVelocityMeasure_type,
        IFC2X3_IfcLuminousFluxMeasure_type,
        IFC2X3_IfcLuminousIntensityDistributionMeasure_type,
        IFC2X3_IfcMagneticFluxDensityMeasure_type,
        IFC2X3_IfcMagneticFluxMeasure_type,
        IFC2X3_IfcMassDensityMeasure_type,
        IFC2X3_IfcMassFlowRateMeasure_type,
        IFC2X3_IfcMassPerLengthMeasure_type,
        IFC2X3_IfcModulusOfElasticityMeasure_type,
        IFC2X3_IfcModulusOfLinearSubgradeReactionMeasure_type,
        IFC2X3_IfcModulusOfRotationalSubgradeReactionMeasure_type,
        IFC2X3_IfcModulusOfSubgradeReactionMeasure_type,
        IFC2X3_IfcMoistureDiffusivityMeasure_type,
        IFC2X3_IfcMolecularWeightMeasure_type,
        IFC2X3_IfcMomentOfInertiaMeasure_type,
        IFC2X3_IfcMonetaryMeasure_type,
        IFC2X3_IfcPHMeasure_type,
        IFC2X3_IfcPlanarForceMeasure_type,
        IFC2X3_IfcPowerMeasure_type,
        IFC2X3_IfcPressureMeasure_type,
        IFC2X3_IfcRadioActivityMeasure_type,
        IFC2X3_IfcRotationalFrequencyMeasure_type,
        IFC2X3_IfcRotationalMassMeasure_type,
        IFC2X3_IfcRotationalStiffnessMeasure_type,
        IFC2X3_IfcSectionModulusMeasure_type,
        IFC2X3_IfcSectionalAreaIntegralMeasure_type,
        IFC2X3_IfcShearModulusMeasure_type,
        IFC2X3_IfcSoundPowerMeasure_type,
        IFC2X3_IfcSoundPressureMeasure_type,
        IFC2X3_IfcSpecificHeatCapacityMeasure_type,
        IFC2X3_IfcTemperatureGradientMeasure_type,
        IFC2X3_IfcThermalAdmittanceMeasure_type,
        IFC2X3_IfcThermalConductivityMeasure_type,
        IFC2X3_IfcThermalExpansionCoefficientMeasure_type,
        IFC2X3_IfcThermalResistanceMeasure_type,
        IFC2X3_IfcThermalTransmittanceMeasure_type,
        IFC2X3_IfcTimeStamp_type,
        IFC2X3_IfcTorqueMeasure_type,
        IFC2X3_IfcVaporPermeabilityMeasure_type,
        IFC2X3_IfcVolumetricFlowRateMeasure_type,
        IFC2X3_IfcWarpingConstantMeasure_type,
        IFC2X3_IfcWarpingMomentMeasure_type
    });
    IFC2X3_IfcLayeredItem_type = new select_type(strings[1457], 433, {
        IFC2X3_IfcRepresentation_type,
        IFC2X3_IfcRepresentationItem_type
    });
    IFC2X3_IfcLibrarySelect_type = new select_type(strings[1458], 438, {
        IFC2X3_IfcLibraryInformation_type,
        IFC2X3_IfcLibraryReference_type
    });
    IFC2X3_IfcLightDistributionDataSourceSelect_type = new select_type(strings[1459], 441, {
        IFC2X3_IfcExternalReference_type,
        IFC2X3_IfcLightIntensityDistribution_type
    });
    IFC2X3_IfcMaterialSelect_type = new select_type(strings[1460], 484, {
        IFC2X3_IfcMaterial_type,
        IFC2X3_IfcMaterialLayer_type,
        IFC2X3_IfcMaterialLayerSet_type,
        IFC2X3_IfcMaterialLayerSetUsage_type,
        IFC2X3_IfcMaterialList_type
    });
    IFC2X3_IfcMetricValueSelect_type = new select_type(strings[1461], 496, {
        IFC2X3_IfcCostValue_type,
        IFC2X3_IfcDateTimeSelect_type,
        IFC2X3_IfcMeasureWithUnit_type,
        IFC2X3_IfcTable_type,
        IFC2X3_IfcText_type,
        IFC2X3_IfcTimeSeries_type
    });
    IFC2X3_IfcNormalisedRatioMeasure_type = new type_declaration(strings[1462], 512, new named_type(IFC2X3_IfcRatioMeasure_type));
    IFC2X3_IfcObjectReferenceSelect_type = new select_type(strings[1463], 520, {
        IFC2X3_IfcAddress_type,
        IFC2X3_IfcAppliedValue_type,
        IFC2X3_IfcCalendarDate_type,
        IFC2X3_IfcDateAndTime_type,
        IFC2X3_IfcExternalReference_type,
        IFC2X3_IfcLocalTime_type,
        IFC2X3_IfcMaterial_type,
        IFC2X3_IfcMaterialLayer_type,
        IFC2X3_IfcMaterialList_type,
        IFC2X3_IfcOrganization_type,
        IFC2X3_IfcPerson_type,
        IFC2X3_IfcPersonAndOrganization_type,
        IFC2X3_IfcTimeSeries_type
    });
    IFC2X3_IfcPositiveRatioMeasure_type = new type_declaration(strings[1464], 579, new named_type(IFC2X3_IfcRatioMeasure_type));
    IFC2X3_IfcSimpleValue_type = new select_type(strings[1465], 762, {
        IFC2X3_IfcBoolean_type,
        IFC2X3_IfcIdentifier_type,
        IFC2X3_IfcInteger_type,
        IFC2X3_IfcLabel_type,
        IFC2X3_IfcLogical_type,
        IFC2X3_IfcReal_type,
        IFC2X3_IfcText_type
    });
    IFC2X3_IfcSizeSelect_type = new select_type(strings[1466], 767, {
        IFC2X3_IfcDescriptiveMeasure_type,
        IFC2X3_IfcLengthMeasure_type,
        IFC2X3_IfcNormalisedRatioMeasure_type,
        IFC2X3_IfcPositiveLengthMeasure_type,
        IFC2X3_IfcPositiveRatioMeasure_type,
        IFC2X3_IfcRatioMeasure_type
    });
    IFC2X3_IfcSpecularHighlightSelect_type = new select_type(strings[1467], 790, {
        IFC2X3_IfcSpecularExponent_type,
        IFC2X3_IfcSpecularRoughness_type
    });
    IFC2X3_IfcSurfaceStyleElementSelect_type = new select_type(strings[1468], 851, {
        IFC2X3_IfcExternallyDefinedSurfaceStyle_type,
        IFC2X3_IfcSurfaceStyleLighting_type,
        IFC2X3_IfcSurfaceStyleRefraction_type,
        IFC2X3_IfcSurfaceStyleShading_type,
        IFC2X3_IfcSurfaceStyleWithTextures_type
    });
    IFC2X3_IfcTextFontSelect_type = new select_type(strings[1469], 883, {
        IFC2X3_IfcExternallyDefinedTextFont_type,
        IFC2X3_IfcPreDefinedTextFont_type
    });
    IFC2X3_IfcTextStyleSelect_type = new select_type(strings[1470], 890, {
        IFC2X3_IfcTextStyleTextModel_type,
        IFC2X3_IfcTextStyleWithBoxCharacteristics_type
    });
    IFC2X3_IfcUnit_type = new select_type(strings[1471], 934, {
        IFC2X3_IfcDerivedUnit_type,
        IFC2X3_IfcMonetaryUnit_type,
        IFC2X3_IfcNamedUnit_type
    });
    IFC2X3_IfcAnnotationOccurrence_type = new entity(strings[1472], true, 31, IFC2X3_IfcStyledItem_type);
    IFC2X3_IfcAnnotationSurfaceOccurrence_type = new entity(strings[1473], false, 33, IFC2X3_IfcAnnotationOccurrence_type);
    IFC2X3_IfcAnnotationSymbolOccurrence_type = new entity(strings[1474], false, 34, IFC2X3_IfcAnnotationOccurrence_type);
    IFC2X3_IfcAnnotationTextOccurrence_type = new entity(strings[1475], false, 35, IFC2X3_IfcAnnotationOccurrence_type);
    IFC2X3_IfcArbitraryClosedProfileDef_type = new entity(strings[1476], false, 44, IFC2X3_IfcProfileDef_type);
    IFC2X3_IfcArbitraryOpenProfileDef_type = new entity(strings[1477], false, 45, IFC2X3_IfcProfileDef_type);
    IFC2X3_IfcArbitraryProfileDefWithVoids_type = new entity(strings[1478], false, 46, IFC2X3_IfcArbitraryClosedProfileDef_type);
    IFC2X3_IfcBlobTexture_type = new entity(strings[1479], false, 61, IFC2X3_IfcSurfaceTexture_type);
    IFC2X3_IfcCenterLineProfileDef_type = new entity(strings[1480], false, 104, IFC2X3_IfcArbitraryOpenProfileDef_type);
    IFC2X3_IfcClassificationReference_type = new entity(strings[1481], false, 119, IFC2X3_IfcExternalReference_type);
    IFC2X3_IfcColourRgb_type = new entity(strings[1482], false, 125, IFC2X3_IfcColourSpecification_type);
    IFC2X3_IfcComplexProperty_type = new entity(strings[1483], false, 131, IFC2X3_IfcProperty_type);
    IFC2X3_IfcCompositeProfileDef_type = new entity(strings[1484], false, 134, IFC2X3_IfcProfileDef_type);
    IFC2X3_IfcConnectedFaceSet_type = new entity(strings[1485], false, 144, IFC2X3_IfcTopologicalRepresentationItem_type);
    IFC2X3_IfcConnectionCurveGeometry_type = new entity(strings[1486], false, 145, IFC2X3_IfcConnectionGeometry_type);
    IFC2X3_IfcConnectionPointEccentricity_type = new entity(strings[1487], false, 147, IFC2X3_IfcConnectionPointGeometry_type);
    IFC2X3_IfcContextDependentUnit_type = new entity(strings[1488], false, 162, IFC2X3_IfcNamedUnit_type);
    IFC2X3_IfcConversionBasedUnit_type = new entity(strings[1489], false, 166, IFC2X3_IfcNamedUnit_type);
    IFC2X3_IfcCurveStyle_type = new entity(strings[1490], false, 197, IFC2X3_IfcPresentationStyle_type);
    IFC2X3_IfcDerivedProfileDef_type = new entity(strings[1491], false, 212, IFC2X3_IfcProfileDef_type);
    IFC2X3_IfcDimensionCalloutRelationship_type = new entity(strings[1492], false, 219, IFC2X3_IfcDraughtingCalloutRelationship_type);
    IFC2X3_IfcDimensionPair_type = new entity(strings[1493], false, 225, IFC2X3_IfcDraughtingCalloutRelationship_type);
    IFC2X3_IfcDocumentReference_type = new entity(strings[1494], false, 244, IFC2X3_IfcExternalReference_type);
    IFC2X3_IfcDraughtingPreDefinedTextFont_type = new entity(strings[1495], false, 261, IFC2X3_IfcPreDefinedTextFont_type);
    IFC2X3_IfcEdge_type = new entity(strings[1496], false, 269, IFC2X3_IfcTopologicalRepresentationItem_type);
    IFC2X3_IfcEdgeCurve_type = new entity(strings[1497], false, 270, IFC2X3_IfcEdge_type);
    IFC2X3_IfcExtendedMaterialProperties_type = new entity(strings[1498], false, 321, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcFace_type = new entity(strings[1499], false, 328, IFC2X3_IfcTopologicalRepresentationItem_type);
    IFC2X3_IfcFaceBound_type = new entity(strings[1500], false, 330, IFC2X3_IfcTopologicalRepresentationItem_type);
    IFC2X3_IfcFaceOuterBound_type = new entity(strings[1501], false, 331, IFC2X3_IfcFaceBound_type);
    IFC2X3_IfcFaceSurface_type = new entity(strings[1502], false, 332, IFC2X3_IfcFace_type);
    IFC2X3_IfcFailureConnectionCondition_type = new entity(strings[1503], false, 335, IFC2X3_IfcStructuralConnectionCondition_type);
    IFC2X3_IfcFillAreaStyle_type = new entity(strings[1504], false, 343, IFC2X3_IfcPresentationStyle_type);
    IFC2X3_IfcFuelProperties_type = new entity(strings[1505], false, 380, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcGeneralMaterialProperties_type = new entity(strings[1506], false, 387, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcGeneralProfileProperties_type = new entity(strings[1507], false, 388, IFC2X3_IfcProfileProperties_type);
    IFC2X3_IfcGeometricRepresentationContext_type = new entity(strings[1508], false, 391, IFC2X3_IfcRepresentationContext_type);
    IFC2X3_IfcGeometricRepresentationItem_type = new entity(strings[1509], true, 392, IFC2X3_IfcRepresentationItem_type);
    IFC2X3_IfcGeometricRepresentationSubContext_type = new entity(strings[1510], false, 393, IFC2X3_IfcGeometricRepresentationContext_type);
    IFC2X3_IfcGeometricSet_type = new entity(strings[1511], false, 394, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcGridPlacement_type = new entity(strings[1512], false, 400, IFC2X3_IfcObjectPlacement_type);
    IFC2X3_IfcHalfSpaceSolid_type = new entity(strings[1513], false, 402, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcHygroscopicMaterialProperties_type = new entity(strings[1514], false, 411, IFC2X3_IfcMaterialProperties_type);
    IFC2X3_IfcImageTexture_type = new entity(strings[1515], false, 414, IFC2X3_IfcSurfaceTexture_type);
    IFC2X3_IfcIrregularTimeSeries_type = new entity(strings[1516], false, 422, IFC2X3_IfcTimeSeries_type);
    IFC2X3_IfcLightSource_type = new entity(strings[1517], true, 446, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcLightSourceAmbient_type = new entity(strings[1518], false, 447, IFC2X3_IfcLightSource_type);
    IFC2X3_IfcLightSourceDirectional_type = new entity(strings[1519], false, 448, IFC2X3_IfcLightSource_type);
    IFC2X3_IfcLightSourceGoniometric_type = new entity(strings[1520], false, 449, IFC2X3_IfcLightSource_type);
    IFC2X3_IfcLightSourcePositional_type = new entity(strings[1521], false, 450, IFC2X3_IfcLightSource_type);
    IFC2X3_IfcLightSourceSpot_type = new entity(strings[1522], false, 451, IFC2X3_IfcLightSourcePositional_type);
    IFC2X3_IfcLocalPlacement_type = new entity(strings[1523], false, 459, IFC2X3_IfcObjectPlacement_type);
    IFC2X3_IfcLoop_type = new entity(strings[1524], false, 463, IFC2X3_IfcTopologicalRepresentationItem_type);
    IFC2X3_IfcMappedItem_type = new entity(strings[1525], false, 471, IFC2X3_IfcRepresentationItem_type);
    IFC2X3_IfcMaterialDefinitionRepresentation_type = new entity(strings[1526], false, 478, IFC2X3_IfcProductRepresentation_type);
    IFC2X3_IfcMechanicalConcreteMaterialProperties_type = new entity(strings[1527], false, 487, IFC2X3_IfcMechanicalMaterialProperties_type);
    IFC2X3_IfcObjectDefinition_type = new entity(strings[1528], true, 516, IFC2X3_IfcRoot_type);
    IFC2X3_IfcOneDirectionRepeatFactor_type = new entity(strings[1529], false, 526, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcOpenShell_type = new entity(strings[1530], false, 528, IFC2X3_IfcConnectedFaceSet_type);
    IFC2X3_IfcOrientedEdge_type = new entity(strings[1531], false, 534, IFC2X3_IfcEdge_type);
    IFC2X3_IfcParameterizedProfileDef_type = new entity(strings[1532], true, 538, IFC2X3_IfcProfileDef_type);
    IFC2X3_IfcPath_type = new entity(strings[1533], false, 540, IFC2X3_IfcTopologicalRepresentationItem_type);
    IFC2X3_IfcPhysicalComplexQuantity_type = new entity(strings[1534], false, 548, IFC2X3_IfcPhysicalQuantity_type);
    IFC2X3_IfcPixelTexture_type = new entity(strings[1535], false, 559, IFC2X3_IfcSurfaceTexture_type);
    IFC2X3_IfcPlacement_type = new entity(strings[1536], true, 560, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcPlanarExtent_type = new entity(strings[1537], false, 562, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcPoint_type = new entity(strings[1538], true, 569, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcPointOnCurve_type = new entity(strings[1539], false, 570, IFC2X3_IfcPoint_type);
    IFC2X3_IfcPointOnSurface_type = new entity(strings[1540], false, 571, IFC2X3_IfcPoint_type);
    IFC2X3_IfcPolyLoop_type = new entity(strings[1541], false, 575, IFC2X3_IfcLoop_type);
    IFC2X3_IfcPolygonalBoundedHalfSpace_type = new entity(strings[1542], false, 573, IFC2X3_IfcHalfSpaceSolid_type);
    IFC2X3_IfcPreDefinedColour_type = new entity(strings[1543], true, 582, IFC2X3_IfcPreDefinedItem_type);
    IFC2X3_IfcPreDefinedCurveFont_type = new entity(strings[1544], true, 583, IFC2X3_IfcPreDefinedItem_type);
    IFC2X3_IfcPreDefinedDimensionSymbol_type = new entity(strings[1545], false, 584, IFC2X3_IfcPreDefinedSymbol_type);
    IFC2X3_IfcPreDefinedPointMarkerSymbol_type = new entity(strings[1546], false, 586, IFC2X3_IfcPreDefinedSymbol_type);
    IFC2X3_IfcProductDefinitionShape_type = new entity(strings[1547], false, 601, IFC2X3_IfcProductRepresentation_type);
    IFC2X3_IfcPropertyBoundedValue_type = new entity(strings[1548], false, 616, IFC2X3_IfcSimpleProperty_type);
    IFC2X3_IfcPropertyDefinition_type = new entity(strings[1549], true, 618, IFC2X3_IfcRoot_type);
    IFC2X3_IfcPropertyEnumeratedValue_type = new entity(strings[1550], false, 620, IFC2X3_IfcSimpleProperty_type);
    IFC2X3_IfcPropertyListValue_type = new entity(strings[1551], false, 622, IFC2X3_IfcSimpleProperty_type);
    IFC2X3_IfcPropertyReferenceValue_type = new entity(strings[1552], false, 623, IFC2X3_IfcSimpleProperty_type);
    IFC2X3_IfcPropertySetDefinition_type = new entity(strings[1553], true, 625, IFC2X3_IfcPropertyDefinition_type);
    IFC2X3_IfcPropertySingleValue_type = new entity(strings[1554], false, 626, IFC2X3_IfcSimpleProperty_type);
    IFC2X3_IfcPropertyTableValue_type = new entity(strings[1555], false, 628, IFC2X3_IfcSimpleProperty_type);
    IFC2X3_IfcRectangleProfileDef_type = new entity(strings[1556], false, 654, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcRegularTimeSeries_type = new entity(strings[1557], false, 659, IFC2X3_IfcTimeSeries_type);
    IFC2X3_IfcReinforcementDefinitionProperties_type = new entity(strings[1558], false, 661, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcRelationship_type = new entity(strings[1559], true, 686, IFC2X3_IfcRoot_type);
    IFC2X3_IfcRoundedRectangleProfileDef_type = new entity(strings[1560], false, 737, IFC2X3_IfcRectangleProfileDef_type);
    IFC2X3_IfcSectionedSpine_type = new entity(strings[1561], false, 743, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcServiceLifeFactor_type = new entity(strings[1562], false, 752, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcShellBasedSurfaceModel_type = new entity(strings[1563], false, 760, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcSlippageConnectionCondition_type = new entity(strings[1564], false, 771, IFC2X3_IfcStructuralConnectionCondition_type);
    IFC2X3_IfcSolidModel_type = new entity(strings[1565], true, 773, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcSoundProperties_type = new entity(strings[1566], false, 776, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcSoundValue_type = new entity(strings[1567], false, 778, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcSpaceThermalLoadProperties_type = new entity(strings[1568], false, 783, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcStructuralLoadLinearForce_type = new entity(strings[1569], false, 816, IFC2X3_IfcStructuralLoadStatic_type);
    IFC2X3_IfcStructuralLoadPlanarForce_type = new entity(strings[1570], false, 817, IFC2X3_IfcStructuralLoadStatic_type);
    IFC2X3_IfcStructuralLoadSingleDisplacement_type = new entity(strings[1571], false, 818, IFC2X3_IfcStructuralLoadStatic_type);
    IFC2X3_IfcStructuralLoadSingleDisplacementDistortion_type = new entity(strings[1572], false, 819, IFC2X3_IfcStructuralLoadSingleDisplacement_type);
    IFC2X3_IfcStructuralLoadSingleForce_type = new entity(strings[1573], false, 820, IFC2X3_IfcStructuralLoadStatic_type);
    IFC2X3_IfcStructuralLoadSingleForceWarping_type = new entity(strings[1574], false, 821, IFC2X3_IfcStructuralLoadSingleForce_type);
    IFC2X3_IfcStructuralProfileProperties_type = new entity(strings[1575], false, 830, IFC2X3_IfcGeneralProfileProperties_type);
    IFC2X3_IfcStructuralSteelProfileProperties_type = new entity(strings[1576], false, 833, IFC2X3_IfcStructuralProfileProperties_type);
    IFC2X3_IfcSubedge_type = new entity(strings[1577], false, 843, IFC2X3_IfcEdge_type);
    IFC2X3_IfcSurface_type = new entity(strings[1578], true, 844, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcSurfaceStyleRendering_type = new entity(strings[1579], false, 854, IFC2X3_IfcSurfaceStyleShading_type);
    IFC2X3_IfcSweptAreaSolid_type = new entity(strings[1580], true, 859, IFC2X3_IfcSolidModel_type);
    IFC2X3_IfcSweptDiskSolid_type = new entity(strings[1581], false, 860, IFC2X3_IfcSolidModel_type);
    IFC2X3_IfcSweptSurface_type = new entity(strings[1582], true, 861, IFC2X3_IfcSurface_type);
    IFC2X3_IfcTShapeProfileDef_type = new entity(strings[1583], false, 928, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcTerminatorSymbol_type = new entity(strings[1584], false, 878, IFC2X3_IfcAnnotationSymbolOccurrence_type);
    IFC2X3_IfcTextLiteral_type = new entity(strings[1585], false, 884, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcTextLiteralWithExtent_type = new entity(strings[1586], false, 885, IFC2X3_IfcTextLiteral_type);
    IFC2X3_IfcTrapeziumProfileDef_type = new entity(strings[1587], false, 924, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcTwoDirectionRepeatFactor_type = new entity(strings[1588], false, 931, IFC2X3_IfcOneDirectionRepeatFactor_type);
    IFC2X3_IfcTypeObject_type = new entity(strings[1589], false, 932, IFC2X3_IfcObjectDefinition_type);
    IFC2X3_IfcTypeProduct_type = new entity(strings[1590], false, 933, IFC2X3_IfcTypeObject_type);
    IFC2X3_IfcUShapeProfileDef_type = new entity(strings[1591], false, 939, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcVector_type = new entity(strings[1592], false, 944, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcVertexLoop_type = new entity(strings[1593], false, 948, IFC2X3_IfcLoop_type);
    IFC2X3_IfcWindowLiningProperties_type = new entity(strings[1594], false, 966, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcWindowPanelProperties_type = new entity(strings[1595], false, 969, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcWindowStyle_type = new entity(strings[1596], false, 970, IFC2X3_IfcTypeProduct_type);
    IFC2X3_IfcZShapeProfileDef_type = new entity(strings[1597], false, 979, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcClassificationNotationSelect_type = new select_type(strings[1598], 118, {
        IFC2X3_IfcClassificationNotation_type,
        IFC2X3_IfcClassificationReference_type
    });
    IFC2X3_IfcColour_type = new select_type(strings[1599], 123, {
        IFC2X3_IfcColourSpecification_type,
        IFC2X3_IfcPreDefinedColour_type
    });
    IFC2X3_IfcColourOrFactor_type = new select_type(strings[1600], 124, {
        IFC2X3_IfcColourRgb_type,
        IFC2X3_IfcNormalisedRatioMeasure_type
    });
    IFC2X3_IfcCurveStyleFontSelect_type = new select_type(strings[1601], 201, {
        IFC2X3_IfcCurveStyleFont_type,
        IFC2X3_IfcPreDefinedCurveFont_type
    });
    IFC2X3_IfcDocumentSelect_type = new select_type(strings[1602], 245, {
        IFC2X3_IfcDocumentInformation_type,
        IFC2X3_IfcDocumentReference_type
    });
    IFC2X3_IfcHatchLineDistanceSelect_type = new select_type(strings[1603], 403, {
        IFC2X3_IfcOneDirectionRepeatFactor_type,
        IFC2X3_IfcPositiveLengthMeasure_type
    });
    IFC2X3_IfcMeasureValue_type = new select_type(strings[1604], 485, {
        IFC2X3_IfcAmountOfSubstanceMeasure_type,
        IFC2X3_IfcAreaMeasure_type,
        IFC2X3_IfcComplexNumber_type,
        IFC2X3_IfcContextDependentMeasure_type,
        IFC2X3_IfcCountMeasure_type,
        IFC2X3_IfcDescriptiveMeasure_type,
        IFC2X3_IfcElectricCurrentMeasure_type,
        IFC2X3_IfcLengthMeasure_type,
        IFC2X3_IfcLuminousIntensityMeasure_type,
        IFC2X3_IfcMassMeasure_type,
        IFC2X3_IfcNormalisedRatioMeasure_type,
        IFC2X3_IfcNumericMeasure_type,
        IFC2X3_IfcParameterValue_type,
        IFC2X3_IfcPlaneAngleMeasure_type,
        IFC2X3_IfcPositiveLengthMeasure_type,
        IFC2X3_IfcPositivePlaneAngleMeasure_type,
        IFC2X3_IfcPositiveRatioMeasure_type,
        IFC2X3_IfcRatioMeasure_type,
        IFC2X3_IfcSolidAngleMeasure_type,
        IFC2X3_IfcThermodynamicTemperatureMeasure_type,
        IFC2X3_IfcTimeMeasure_type,
        IFC2X3_IfcVolumeMeasure_type
    });
    IFC2X3_IfcPointOrVertexPoint_type = new select_type(strings[1605], 572, {
        IFC2X3_IfcPoint_type,
        IFC2X3_IfcVertexPoint_type
    });
    IFC2X3_IfcPresentationStyleSelect_type = new select_type(strings[1606], 595, {
        IFC2X3_IfcCurveStyle_type,
        IFC2X3_IfcFillAreaStyle_type,
        IFC2X3_IfcNullStyle_type,
        IFC2X3_IfcSurfaceStyle_type,
        IFC2X3_IfcSymbolStyle_type,
        IFC2X3_IfcTextStyle_type
    });
    IFC2X3_IfcSymbolStyleSelect_type = new select_type(strings[1607], 865, {
        IFC2X3_IfcColour_type
    });
    IFC2X3_IfcValue_type = new select_type(strings[1608], 940, {
        IFC2X3_IfcDerivedMeasureValue_type,
        IFC2X3_IfcMeasureValue_type,
        IFC2X3_IfcSimpleValue_type
    });
    IFC2X3_IfcAnnotationCurveOccurrence_type = new entity(strings[1609], false, 28, IFC2X3_IfcAnnotationOccurrence_type);
    IFC2X3_IfcAnnotationFillArea_type = new entity(strings[1610], false, 29, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcAnnotationFillAreaOccurrence_type = new entity(strings[1611], false, 30, IFC2X3_IfcAnnotationOccurrence_type);
    IFC2X3_IfcAnnotationSurface_type = new entity(strings[1612], false, 32, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcAxis1Placement_type = new entity(strings[1613], false, 52, IFC2X3_IfcPlacement_type);
    IFC2X3_IfcAxis2Placement2D_type = new entity(strings[1614], false, 54, IFC2X3_IfcPlacement_type);
    IFC2X3_IfcAxis2Placement3D_type = new entity(strings[1615], false, 55, IFC2X3_IfcPlacement_type);
    IFC2X3_IfcBooleanResult_type = new entity(strings[1616], false, 69, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcBoundedSurface_type = new entity(strings[1617], false, 76, IFC2X3_IfcSurface_type);
    IFC2X3_IfcBoundingBox_type = new entity(strings[1618], false, 77, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcBoxedHalfSpace_type = new entity(strings[1619], false, 79, IFC2X3_IfcHalfSpaceSolid_type);
    IFC2X3_IfcCShapeProfileDef_type = new entity(strings[1620], false, 186, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcCartesianPoint_type = new entity(strings[1621], false, 98, IFC2X3_IfcPoint_type);
    IFC2X3_IfcCartesianTransformationOperator_type = new entity(strings[1622], true, 99, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcCartesianTransformationOperator2D_type = new entity(strings[1623], false, 100, IFC2X3_IfcCartesianTransformationOperator_type);
    IFC2X3_IfcCartesianTransformationOperator2DnonUniform_type = new entity(strings[1624], false, 101, IFC2X3_IfcCartesianTransformationOperator2D_type);
    IFC2X3_IfcCartesianTransformationOperator3D_type = new entity(strings[1625], false, 102, IFC2X3_IfcCartesianTransformationOperator_type);
    IFC2X3_IfcCartesianTransformationOperator3DnonUniform_type = new entity(strings[1626], false, 103, IFC2X3_IfcCartesianTransformationOperator3D_type);
    IFC2X3_IfcCircleProfileDef_type = new entity(strings[1627], false, 112, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcClosedShell_type = new entity(strings[1628], false, 120, IFC2X3_IfcConnectedFaceSet_type);
    IFC2X3_IfcCompositeCurveSegment_type = new entity(strings[1629], false, 133, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcCraneRailAShapeProfileDef_type = new entity(strings[1630], false, 180, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcCraneRailFShapeProfileDef_type = new entity(strings[1631], false, 181, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcCsgPrimitive3D_type = new entity(strings[1632], true, 183, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcCsgSolid_type = new entity(strings[1633], false, 185, IFC2X3_IfcSolidModel_type);
    IFC2X3_IfcCurve_type = new entity(strings[1634], true, 193, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcCurveBoundedPlane_type = new entity(strings[1635], false, 194, IFC2X3_IfcBoundedSurface_type);
    IFC2X3_IfcDefinedSymbol_type = new entity(strings[1636], false, 209, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcDimensionCurve_type = new entity(strings[1637], false, 221, IFC2X3_IfcAnnotationCurveOccurrence_type);
    IFC2X3_IfcDimensionCurveTerminator_type = new entity(strings[1638], false, 223, IFC2X3_IfcTerminatorSymbol_type);
    IFC2X3_IfcDirection_type = new entity(strings[1639], false, 226, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcDoorLiningProperties_type = new entity(strings[1640], false, 248, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcDoorPanelProperties_type = new entity(strings[1641], false, 251, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcDoorStyle_type = new entity(strings[1642], false, 252, IFC2X3_IfcTypeProduct_type);
    IFC2X3_IfcDraughtingCallout_type = new entity(strings[1643], false, 256, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcDraughtingPreDefinedColour_type = new entity(strings[1644], false, 259, IFC2X3_IfcPreDefinedColour_type);
    IFC2X3_IfcDraughtingPreDefinedCurveFont_type = new entity(strings[1645], false, 260, IFC2X3_IfcPreDefinedCurveFont_type);
    IFC2X3_IfcEdgeLoop_type = new entity(strings[1646], false, 272, IFC2X3_IfcLoop_type);
    IFC2X3_IfcElementQuantity_type = new entity(strings[1647], false, 304, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcElementType_type = new entity(strings[1648], true, 305, IFC2X3_IfcTypeProduct_type);
    IFC2X3_IfcElementarySurface_type = new entity(strings[1649], true, 298, IFC2X3_IfcSurface_type);
    IFC2X3_IfcEllipseProfileDef_type = new entity(strings[1650], false, 307, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcEnergyProperties_type = new entity(strings[1651], false, 311, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcExtrudedAreaSolid_type = new entity(strings[1652], false, 327, IFC2X3_IfcSweptAreaSolid_type);
    IFC2X3_IfcFaceBasedSurfaceModel_type = new entity(strings[1653], false, 329, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcFillAreaStyleHatching_type = new entity(strings[1654], false, 344, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcFillAreaStyleTileSymbolWithStyle_type = new entity(strings[1655], false, 347, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcFillAreaStyleTiles_type = new entity(strings[1656], false, 345, IFC2X3_IfcGeometricRepresentationItem_type);
    IFC2X3_IfcFluidFlowProperties_type = new entity(strings[1657], false, 372, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcFurnishingElementType_type = new entity(strings[1658], false, 382, IFC2X3_IfcElementType_type);
    IFC2X3_IfcFurnitureType_type = new entity(strings[1659], false, 384, IFC2X3_IfcFurnishingElementType_type);
    IFC2X3_IfcGeometricCurveSet_type = new entity(strings[1660], false, 389, IFC2X3_IfcGeometricSet_type);
    IFC2X3_IfcIShapeProfileDef_type = new entity(strings[1661], false, 424, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcLShapeProfileDef_type = new entity(strings[1662], false, 464, IFC2X3_IfcParameterizedProfileDef_type);
    IFC2X3_IfcLine_type = new entity(strings[1663], false, 452, IFC2X3_IfcCurve_type);
    IFC2X3_IfcManifoldSolidBrep_type = new entity(strings[1664], true, 470, IFC2X3_IfcSolidModel_type);
    IFC2X3_IfcObject_type = new entity(strings[1665], true, 515, IFC2X3_IfcObjectDefinition_type);
    IFC2X3_IfcOffsetCurve2D_type = new entity(strings[1666], false, 524, IFC2X3_IfcCurve_type);
    IFC2X3_IfcOffsetCurve3D_type = new entity(strings[1667], false, 525, IFC2X3_IfcCurve_type);
    IFC2X3_IfcPermeableCoveringProperties_type = new entity(strings[1668], false, 543, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcPlanarBox_type = new entity(strings[1669], false, 561, IFC2X3_IfcPlanarExtent_type);
    IFC2X3_IfcPlane_type = new entity(strings[1670], false, 564, IFC2X3_IfcElementarySurface_type);
    IFC2X3_IfcProcess_type = new entity(strings[1671], true, 599, IFC2X3_IfcObject_type);
    IFC2X3_IfcProduct_type = new entity(strings[1672], true, 600, IFC2X3_IfcObject_type);
    IFC2X3_IfcProject_type = new entity(strings[1673], false, 607, IFC2X3_IfcObject_type);
    IFC2X3_IfcProjectionCurve_type = new entity(strings[1674], false, 609, IFC2X3_IfcAnnotationCurveOccurrence_type);
    IFC2X3_IfcPropertySet_type = new entity(strings[1675], false, 624, IFC2X3_IfcPropertySetDefinition_type);
    IFC2X3_IfcProxy_type = new entity(strings[1676], false, 631, IFC2X3_IfcProduct_type);
    IFC2X3_IfcRectangleHollowProfileDef_type = new entity(strings[1677], false, 653, IFC2X3_IfcRectangleProfileDef_type);
    IFC2X3_IfcRectangularPyramid_type = new entity(strings[1678], false, 655, IFC2X3_IfcCsgPrimitive3D_type);
    IFC2X3_IfcRectangularTrimmedSurface_type = new entity(strings[1679], false, 656, IFC2X3_IfcBoundedSurface_type);
    IFC2X3_IfcRelAssigns_type = new entity(strings[1680], true, 668, IFC2X3_IfcRelationship_type);
    IFC2X3_IfcRelAssignsToActor_type = new entity(strings[1681], false, 670, IFC2X3_IfcRelAssigns_type);
    IFC2X3_IfcRelAssignsToControl_type = new entity(strings[1682], false, 671, IFC2X3_IfcRelAssigns_type);
    IFC2X3_IfcRelAssignsToGroup_type = new entity(strings[1683], false, 672, IFC2X3_IfcRelAssigns_type);
    IFC2X3_IfcRelAssignsToProcess_type = new entity(strings[1684], false, 673, IFC2X3_IfcRelAssigns_type);
    IFC2X3_IfcRelAssignsToProduct_type = new entity(strings[1685], false, 674, IFC2X3_IfcRelAssigns_type);
    IFC2X3_IfcRelAssignsToProjectOrder_type = new entity(strings[1686], false, 675, IFC2X3_IfcRelAssignsToControl_type);
    IFC2X3_IfcRelAssignsToResource_type = new entity(strings[1687], false, 676, IFC2X3_IfcRelAssigns_type);
    IFC2X3_IfcRelAssociates_type = new entity(strings[1688], false, 677, IFC2X3_IfcRelationship_type);
    IFC2X3_IfcRelAssociatesAppliedValue_type = new entity(strings[1689], false, 678, IFC2X3_IfcRelAssociates_type);
    IFC2X3_IfcRelAssociatesApproval_type = new entity(strings[1690], false, 679, IFC2X3_IfcRelAssociates_type);
    IFC2X3_IfcRelAssociatesClassification_type = new entity(strings[1691], false, 680, IFC2X3_IfcRelAssociates_type);
    IFC2X3_IfcRelAssociatesConstraint_type = new entity(strings[1692], false, 681, IFC2X3_IfcRelAssociates_type);
    IFC2X3_IfcRelAssociatesDocument_type = new entity(strings[1693], false, 682, IFC2X3_IfcRelAssociates_type);
    IFC2X3_IfcRelAssociatesLibrary_type = new entity(strings[1694], false, 683, IFC2X3_IfcRelAssociates_type);
    IFC2X3_IfcRelAssociatesMaterial_type = new entity(strings[1695], false, 684, IFC2X3_IfcRelAssociates_type);
    IFC2X3_IfcRelAssociatesProfileProperties_type = new entity(strings[1696], false, 685, IFC2X3_IfcRelAssociates_type);
    IFC2X3_IfcRelConnects_type = new entity(strings[1697], true, 688, IFC2X3_IfcRelationship_type);
    IFC2X3_IfcRelConnectsElements_type = new entity(strings[1698], false, 689, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelConnectsPathElements_type = new entity(strings[1699], false, 690, IFC2X3_IfcRelConnectsElements_type);
    IFC2X3_IfcRelConnectsPortToElement_type = new entity(strings[1700], false, 692, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelConnectsPorts_type = new entity(strings[1701], false, 691, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelConnectsStructuralActivity_type = new entity(strings[1702], false, 693, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelConnectsStructuralElement_type = new entity(strings[1703], false, 694, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelConnectsStructuralMember_type = new entity(strings[1704], false, 695, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelConnectsWithEccentricity_type = new entity(strings[1705], false, 696, IFC2X3_IfcRelConnectsStructuralMember_type);
    IFC2X3_IfcRelConnectsWithRealizingElements_type = new entity(strings[1706], false, 697, IFC2X3_IfcRelConnectsElements_type);
    IFC2X3_IfcRelContainedInSpatialStructure_type = new entity(strings[1707], false, 698, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelCoversBldgElements_type = new entity(strings[1708], false, 699, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelCoversSpaces_type = new entity(strings[1709], false, 700, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelDecomposes_type = new entity(strings[1710], true, 701, IFC2X3_IfcRelationship_type);
    IFC2X3_IfcRelDefines_type = new entity(strings[1711], true, 702, IFC2X3_IfcRelationship_type);
    IFC2X3_IfcRelDefinesByProperties_type = new entity(strings[1712], false, 703, IFC2X3_IfcRelDefines_type);
    IFC2X3_IfcRelDefinesByType_type = new entity(strings[1713], false, 704, IFC2X3_IfcRelDefines_type);
    IFC2X3_IfcRelFillsElement_type = new entity(strings[1714], false, 705, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelFlowControlElements_type = new entity(strings[1715], false, 706, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelInteractionRequirements_type = new entity(strings[1716], false, 707, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelNests_type = new entity(strings[1717], false, 708, IFC2X3_IfcRelDecomposes_type);
    IFC2X3_IfcRelOccupiesSpaces_type = new entity(strings[1718], false, 709, IFC2X3_IfcRelAssignsToActor_type);
    IFC2X3_IfcRelOverridesProperties_type = new entity(strings[1719], false, 710, IFC2X3_IfcRelDefinesByProperties_type);
    IFC2X3_IfcRelProjectsElement_type = new entity(strings[1720], false, 711, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelReferencedInSpatialStructure_type = new entity(strings[1721], false, 712, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelSchedulesCostItems_type = new entity(strings[1722], false, 713, IFC2X3_IfcRelAssignsToControl_type);
    IFC2X3_IfcRelSequence_type = new entity(strings[1723], false, 714, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelServicesBuildings_type = new entity(strings[1724], false, 715, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelSpaceBoundary_type = new entity(strings[1725], false, 716, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcRelVoidsElement_type = new entity(strings[1726], false, 717, IFC2X3_IfcRelConnects_type);
    IFC2X3_IfcResource_type = new entity(strings[1727], true, 722, IFC2X3_IfcObject_type);
    IFC2X3_IfcRevolvedAreaSolid_type = new entity(strings[1728], false, 724, IFC2X3_IfcSweptAreaSolid_type);
    IFC2X3_IfcRightCircularCone_type = new entity(strings[1729], false, 727, IFC2X3_IfcCsgPrimitive3D_type);
    IFC2X3_IfcRightCircularCylinder_type = new entity(strings[1730], false, 728, IFC2X3_IfcCsgPrimitive3D_type);
    IFC2X3_IfcSpatialStructureElement_type = new entity(strings[1731], true, 786, IFC2X3_IfcProduct_type);
    IFC2X3_IfcSpatialStructureElementType_type = new entity(strings[1732], true, 787, IFC2X3_IfcElementType_type);
    IFC2X3_IfcSphere_type = new entity(strings[1733], false, 792, IFC2X3_IfcCsgPrimitive3D_type);
    IFC2X3_IfcStructuralActivity_type = new entity(strings[1734], true, 802, IFC2X3_IfcProduct_type);
    IFC2X3_IfcStructuralItem_type = new entity(strings[1735], true, 811, IFC2X3_IfcProduct_type);
    IFC2X3_IfcStructuralMember_type = new entity(strings[1736], true, 824, IFC2X3_IfcStructuralItem_type);
    IFC2X3_IfcStructuralReaction_type = new entity(strings[1737], true, 831, IFC2X3_IfcStructuralActivity_type);
    IFC2X3_IfcStructuralSurfaceMember_type = new entity(strings[1738], false, 835, IFC2X3_IfcStructuralMember_type);
    IFC2X3_IfcStructuralSurfaceMemberVarying_type = new entity(strings[1739], false, 836, IFC2X3_IfcStructuralSurfaceMember_type);
    IFC2X3_IfcStructuredDimensionCallout_type = new entity(strings[1740], false, 838, IFC2X3_IfcDraughtingCallout_type);
    IFC2X3_IfcSurfaceCurveSweptAreaSolid_type = new entity(strings[1741], false, 845, IFC2X3_IfcSweptAreaSolid_type);
    IFC2X3_IfcSurfaceOfLinearExtrusion_type = new entity(strings[1742], false, 846, IFC2X3_IfcSweptSurface_type);
    IFC2X3_IfcSurfaceOfRevolution_type = new entity(strings[1743], false, 847, IFC2X3_IfcSweptSurface_type);
    IFC2X3_IfcSystemFurnitureElementType_type = new entity(strings[1744], false, 867, IFC2X3_IfcFurnishingElementType_type);
    IFC2X3_IfcTask_type = new entity(strings[1745], false, 872, IFC2X3_IfcProcess_type);
    IFC2X3_IfcTransportElementType_type = new entity(strings[1746], false, 922, IFC2X3_IfcElementType_type);
    IFC2X3_IfcAxis2Placement_type = new select_type(strings[1747], 53, {
        IFC2X3_IfcAxis2Placement2D_type,
        IFC2X3_IfcAxis2Placement3D_type
    });
    IFC2X3_IfcBooleanOperand_type = new select_type(strings[1748], 67, {
        IFC2X3_IfcBooleanResult_type,
        IFC2X3_IfcCsgPrimitive3D_type,
        IFC2X3_IfcHalfSpaceSolid_type,
        IFC2X3_IfcSolidModel_type
    });
    IFC2X3_IfcCsgSelect_type = new select_type(strings[1749], 184, {
        IFC2X3_IfcBooleanResult_type,
        IFC2X3_IfcCsgPrimitive3D_type
    });
    IFC2X3_IfcCurveFontOrScaledCurveFontSelect_type = new select_type(strings[1750], 195, {
        IFC2X3_IfcCurveStyleFontAndScaling_type,
        IFC2X3_IfcCurveStyleFontSelect_type
    });
    IFC2X3_IfcDraughtingCalloutElement_type = new select_type(strings[1751], 257, {
        IFC2X3_IfcAnnotationCurveOccurrence_type,
        IFC2X3_IfcAnnotationSymbolOccurrence_type,
        IFC2X3_IfcAnnotationTextOccurrence_type
    });
    IFC2X3_IfcFillAreaStyleTileShapeSelect_type = new select_type(strings[1752], 346, {
        IFC2X3_IfcFillAreaStyleTileSymbolWithStyle_type
    });
    IFC2X3_IfcFillStyleSelect_type = new select_type(strings[1753], 348, {
        IFC2X3_IfcColour_type,
        IFC2X3_IfcExternallyDefinedHatchStyle_type,
        IFC2X3_IfcFillAreaStyleHatching_type,
        IFC2X3_IfcFillAreaStyleTiles_type
    });
    IFC2X3_IfcGeometricSetSelect_type = new select_type(strings[1754], 395, {
        IFC2X3_IfcCurve_type,
        IFC2X3_IfcPoint_type,
        IFC2X3_IfcSurface_type
    });
    IFC2X3_IfcOrientationSelect_type = new select_type(strings[1755], 533, {
        IFC2X3_IfcDirection_type,
        IFC2X3_IfcPlaneAngleMeasure_type
    });
    IFC2X3_IfcShell_type = new select_type(strings[1756], 759, {
        IFC2X3_IfcClosedShell_type,
        IFC2X3_IfcOpenShell_type
    });
    IFC2X3_IfcSurfaceOrFaceSurface_type = new select_type(strings[1757], 848, {
        IFC2X3_IfcFaceBasedSurfaceModel_type,
        IFC2X3_IfcFaceSurface_type,
        IFC2X3_IfcSurface_type
    });
    IFC2X3_IfcTrimmingSelect_type = new select_type(strings[1758], 927, {
        IFC2X3_IfcCartesianPoint_type,
        IFC2X3_IfcParameterValue_type
    });
    IFC2X3_IfcVectorOrDirection_type = new select_type(strings[1759], 945, {
        IFC2X3_IfcDirection_type,
        IFC2X3_IfcVector_type
    });
    IFC2X3_IfcActor_type = new entity(strings[1760], false, 6, IFC2X3_IfcObject_type);
    IFC2X3_IfcAnnotation_type = new entity(strings[1761], false, 27, IFC2X3_IfcProduct_type);
    IFC2X3_IfcAsymmetricIShapeProfileDef_type = new entity(strings[1762], false, 51, IFC2X3_IfcIShapeProfileDef_type);
    IFC2X3_IfcBlock_type = new entity(strings[1763], false, 62, IFC2X3_IfcCsgPrimitive3D_type);
    IFC2X3_IfcBooleanClippingResult_type = new entity(strings[1764], false, 66, IFC2X3_IfcBooleanResult_type);
    IFC2X3_IfcBoundedCurve_type = new entity(strings[1765], true, 75, IFC2X3_IfcCurve_type);
    IFC2X3_IfcBuilding_type = new entity(strings[1766], false, 82, IFC2X3_IfcSpatialStructureElement_type);
    IFC2X3_IfcBuildingElementType_type = new entity(strings[1767], true, 89, IFC2X3_IfcElementType_type);
    IFC2X3_IfcBuildingStorey_type = new entity(strings[1768], false, 90, IFC2X3_IfcSpatialStructureElement_type);
    IFC2X3_IfcCircleHollowProfileDef_type = new entity(strings[1769], false, 111, IFC2X3_IfcCircleProfileDef_type);
    IFC2X3_IfcColumnType_type = new entity(strings[1770], false, 128, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcCompositeCurve_type = new entity(strings[1771], false, 132, IFC2X3_IfcBoundedCurve_type);
    IFC2X3_IfcConic_type = new entity(strings[1772], true, 143, IFC2X3_IfcCurve_type);
    IFC2X3_IfcConstructionResource_type = new entity(strings[1773], true, 160, IFC2X3_IfcResource_type);
    IFC2X3_IfcControl_type = new entity(strings[1774], true, 163, IFC2X3_IfcObject_type);
    IFC2X3_IfcCostItem_type = new entity(strings[1775], false, 172, IFC2X3_IfcControl_type);
    IFC2X3_IfcCostSchedule_type = new entity(strings[1776], false, 173, IFC2X3_IfcControl_type);
    IFC2X3_IfcCoveringType_type = new entity(strings[1777], false, 178, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcCrewResource_type = new entity(strings[1778], false, 182, IFC2X3_IfcConstructionResource_type);
    IFC2X3_IfcCurtainWallType_type = new entity(strings[1779], false, 190, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcDimensionCurveDirectedCallout_type = new entity(strings[1780], false, 222, IFC2X3_IfcDraughtingCallout_type);
    IFC2X3_IfcDistributionElementType_type = new entity(strings[1781], false, 236, IFC2X3_IfcElementType_type);
    IFC2X3_IfcDistributionFlowElementType_type = new entity(strings[1782], true, 238, IFC2X3_IfcDistributionElementType_type);
    IFC2X3_IfcElectricalBaseProperties_type = new entity(strings[1783], false, 273, IFC2X3_IfcEnergyProperties_type);
    IFC2X3_IfcElement_type = new entity(strings[1784], true, 297, IFC2X3_IfcProduct_type);
    IFC2X3_IfcElementAssembly_type = new entity(strings[1785], false, 299, IFC2X3_IfcElement_type);
    IFC2X3_IfcElementComponent_type = new entity(strings[1786], true, 301, IFC2X3_IfcElement_type);
    IFC2X3_IfcElementComponentType_type = new entity(strings[1787], true, 302, IFC2X3_IfcElementType_type);
    IFC2X3_IfcEllipse_type = new entity(strings[1788], false, 306, IFC2X3_IfcConic_type);
    IFC2X3_IfcEnergyConversionDeviceType_type = new entity(strings[1789], true, 309, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcEquipmentElement_type = new entity(strings[1790], false, 315, IFC2X3_IfcElement_type);
    IFC2X3_IfcEquipmentStandard_type = new entity(strings[1791], false, 316, IFC2X3_IfcControl_type);
    IFC2X3_IfcEvaporativeCoolerType_type = new entity(strings[1792], false, 317, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcEvaporatorType_type = new entity(strings[1793], false, 319, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcFacetedBrep_type = new entity(strings[1794], false, 333, IFC2X3_IfcManifoldSolidBrep_type);
    IFC2X3_IfcFacetedBrepWithVoids_type = new entity(strings[1795], false, 334, IFC2X3_IfcManifoldSolidBrep_type);
    IFC2X3_IfcFastener_type = new entity(strings[1796], false, 338, IFC2X3_IfcElementComponent_type);
    IFC2X3_IfcFastenerType_type = new entity(strings[1797], false, 339, IFC2X3_IfcElementComponentType_type);
    IFC2X3_IfcFeatureElement_type = new entity(strings[1798], true, 340, IFC2X3_IfcElement_type);
    IFC2X3_IfcFeatureElementAddition_type = new entity(strings[1799], true, 341, IFC2X3_IfcFeatureElement_type);
    IFC2X3_IfcFeatureElementSubtraction_type = new entity(strings[1800], true, 342, IFC2X3_IfcFeatureElement_type);
    IFC2X3_IfcFlowControllerType_type = new entity(strings[1801], true, 354, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcFlowFittingType_type = new entity(strings[1802], true, 357, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcFlowMeterType_type = new entity(strings[1803], false, 360, IFC2X3_IfcFlowControllerType_type);
    IFC2X3_IfcFlowMovingDeviceType_type = new entity(strings[1804], true, 363, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcFlowSegmentType_type = new entity(strings[1805], true, 365, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcFlowStorageDeviceType_type = new entity(strings[1806], true, 367, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcFlowTerminalType_type = new entity(strings[1807], true, 369, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcFlowTreatmentDeviceType_type = new entity(strings[1808], true, 371, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcFurnishingElement_type = new entity(strings[1809], false, 381, IFC2X3_IfcElement_type);
    IFC2X3_IfcFurnitureStandard_type = new entity(strings[1810], false, 383, IFC2X3_IfcControl_type);
    IFC2X3_IfcGasTerminalType_type = new entity(strings[1811], false, 385, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcGrid_type = new entity(strings[1812], false, 398, IFC2X3_IfcProduct_type);
    IFC2X3_IfcGroup_type = new entity(strings[1813], false, 401, IFC2X3_IfcObject_type);
    IFC2X3_IfcHeatExchangerType_type = new entity(strings[1814], false, 404, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcHumidifierType_type = new entity(strings[1815], false, 409, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcInventory_type = new entity(strings[1816], false, 419, IFC2X3_IfcGroup_type);
    IFC2X3_IfcJunctionBoxType_type = new entity(strings[1817], false, 426, IFC2X3_IfcFlowFittingType_type);
    IFC2X3_IfcLaborResource_type = new entity(strings[1818], false, 430, IFC2X3_IfcConstructionResource_type);
    IFC2X3_IfcLampType_type = new entity(strings[1819], false, 431, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcLightFixtureType_type = new entity(strings[1820], false, 443, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcLinearDimension_type = new entity(strings[1821], false, 453, IFC2X3_IfcDimensionCurveDirectedCallout_type);
    IFC2X3_IfcMechanicalFastener_type = new entity(strings[1822], false, 488, IFC2X3_IfcFastener_type);
    IFC2X3_IfcMechanicalFastenerType_type = new entity(strings[1823], false, 489, IFC2X3_IfcFastenerType_type);
    IFC2X3_IfcMemberType_type = new entity(strings[1824], false, 493, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcMotorConnectionType_type = new entity(strings[1825], false, 508, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcMove_type = new entity(strings[1826], false, 510, IFC2X3_IfcTask_type);
    IFC2X3_IfcOccupant_type = new entity(strings[1827], false, 522, IFC2X3_IfcActor_type);
    IFC2X3_IfcOpeningElement_type = new entity(strings[1828], false, 527, IFC2X3_IfcFeatureElementSubtraction_type);
    IFC2X3_IfcOrderAction_type = new entity(strings[1829], false, 530, IFC2X3_IfcTask_type);
    IFC2X3_IfcOutletType_type = new entity(strings[1830], false, 535, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcPerformanceHistory_type = new entity(strings[1831], false, 541, IFC2X3_IfcControl_type);
    IFC2X3_IfcPermit_type = new entity(strings[1832], false, 544, IFC2X3_IfcControl_type);
    IFC2X3_IfcPipeFittingType_type = new entity(strings[1833], false, 555, IFC2X3_IfcFlowFittingType_type);
    IFC2X3_IfcPipeSegmentType_type = new entity(strings[1834], false, 557, IFC2X3_IfcFlowSegmentType_type);
    IFC2X3_IfcPlateType_type = new entity(strings[1835], false, 567, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcPolyline_type = new entity(strings[1836], false, 574, IFC2X3_IfcBoundedCurve_type);
    IFC2X3_IfcPort_type = new entity(strings[1837], true, 576, IFC2X3_IfcProduct_type);
    IFC2X3_IfcProcedure_type = new entity(strings[1838], false, 597, IFC2X3_IfcProcess_type);
    IFC2X3_IfcProjectOrder_type = new entity(strings[1839], false, 611, IFC2X3_IfcControl_type);
    IFC2X3_IfcProjectOrderRecord_type = new entity(strings[1840], false, 612, IFC2X3_IfcControl_type);
    IFC2X3_IfcProjectionElement_type = new entity(strings[1841], false, 610, IFC2X3_IfcFeatureElementAddition_type);
    IFC2X3_IfcProtectiveDeviceType_type = new entity(strings[1842], false, 629, IFC2X3_IfcFlowControllerType_type);
    IFC2X3_IfcPumpType_type = new entity(strings[1843], false, 632, IFC2X3_IfcFlowMovingDeviceType_type);
    IFC2X3_IfcRadiusDimension_type = new entity(strings[1844], false, 641, IFC2X3_IfcDimensionCurveDirectedCallout_type);
    IFC2X3_IfcRailingType_type = new entity(strings[1845], false, 643, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcRampFlightType_type = new entity(strings[1846], false, 647, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcRelAggregates_type = new entity(strings[1847], false, 667, IFC2X3_IfcRelDecomposes_type);
    IFC2X3_IfcRelAssignsTasks_type = new entity(strings[1848], false, 669, IFC2X3_IfcRelAssignsToControl_type);
    IFC2X3_IfcSanitaryTerminalType_type = new entity(strings[1849], false, 738, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcScheduleTimeControl_type = new entity(strings[1850], false, 740, IFC2X3_IfcControl_type);
    IFC2X3_IfcServiceLife_type = new entity(strings[1851], false, 751, IFC2X3_IfcControl_type);
    IFC2X3_IfcSite_type = new entity(strings[1852], false, 764, IFC2X3_IfcSpatialStructureElement_type);
    IFC2X3_IfcSlabType_type = new entity(strings[1853], false, 769, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcSpace_type = new entity(strings[1854], false, 779, IFC2X3_IfcSpatialStructureElement_type);
    IFC2X3_IfcSpaceHeaterType_type = new entity(strings[1855], false, 780, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcSpaceProgram_type = new entity(strings[1856], false, 782, IFC2X3_IfcControl_type);
    IFC2X3_IfcSpaceType_type = new entity(strings[1857], false, 784, IFC2X3_IfcSpatialStructureElementType_type);
    IFC2X3_IfcStackTerminalType_type = new entity(strings[1858], false, 793, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcStairFlightType_type = new entity(strings[1859], false, 797, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcStructuralAction_type = new entity(strings[1860], true, 801, IFC2X3_IfcStructuralActivity_type);
    IFC2X3_IfcStructuralConnection_type = new entity(strings[1861], true, 805, IFC2X3_IfcStructuralItem_type);
    IFC2X3_IfcStructuralCurveConnection_type = new entity(strings[1862], false, 807, IFC2X3_IfcStructuralConnection_type);
    IFC2X3_IfcStructuralCurveMember_type = new entity(strings[1863], false, 808, IFC2X3_IfcStructuralMember_type);
    IFC2X3_IfcStructuralCurveMemberVarying_type = new entity(strings[1864], false, 809, IFC2X3_IfcStructuralCurveMember_type);
    IFC2X3_IfcStructuralLinearAction_type = new entity(strings[1865], false, 812, IFC2X3_IfcStructuralAction_type);
    IFC2X3_IfcStructuralLinearActionVarying_type = new entity(strings[1866], false, 813, IFC2X3_IfcStructuralLinearAction_type);
    IFC2X3_IfcStructuralLoadGroup_type = new entity(strings[1867], false, 815, IFC2X3_IfcGroup_type);
    IFC2X3_IfcStructuralPlanarAction_type = new entity(strings[1868], false, 825, IFC2X3_IfcStructuralAction_type);
    IFC2X3_IfcStructuralPlanarActionVarying_type = new entity(strings[1869], false, 826, IFC2X3_IfcStructuralPlanarAction_type);
    IFC2X3_IfcStructuralPointAction_type = new entity(strings[1870], false, 827, IFC2X3_IfcStructuralAction_type);
    IFC2X3_IfcStructuralPointConnection_type = new entity(strings[1871], false, 828, IFC2X3_IfcStructuralConnection_type);
    IFC2X3_IfcStructuralPointReaction_type = new entity(strings[1872], false, 829, IFC2X3_IfcStructuralReaction_type);
    IFC2X3_IfcStructuralResultGroup_type = new entity(strings[1873], false, 832, IFC2X3_IfcGroup_type);
    IFC2X3_IfcStructuralSurfaceConnection_type = new entity(strings[1874], false, 834, IFC2X3_IfcStructuralConnection_type);
    IFC2X3_IfcSubContractResource_type = new entity(strings[1875], false, 842, IFC2X3_IfcConstructionResource_type);
    IFC2X3_IfcSwitchingDeviceType_type = new entity(strings[1876], false, 862, IFC2X3_IfcFlowControllerType_type);
    IFC2X3_IfcSystem_type = new entity(strings[1877], false, 866, IFC2X3_IfcGroup_type);
    IFC2X3_IfcTankType_type = new entity(strings[1878], false, 870, IFC2X3_IfcFlowStorageDeviceType_type);
    IFC2X3_IfcTimeSeriesSchedule_type = new entity(strings[1879], false, 911, IFC2X3_IfcControl_type);
    IFC2X3_IfcTransformerType_type = new entity(strings[1880], false, 918, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcTransportElement_type = new entity(strings[1881], false, 921, IFC2X3_IfcElement_type);
    IFC2X3_IfcTrimmedCurve_type = new entity(strings[1882], false, 925, IFC2X3_IfcBoundedCurve_type);
    IFC2X3_IfcTubeBundleType_type = new entity(strings[1883], false, 929, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcUnitaryEquipmentType_type = new entity(strings[1884], false, 935, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcValveType_type = new entity(strings[1885], false, 941, IFC2X3_IfcFlowControllerType_type);
    IFC2X3_IfcVirtualElement_type = new entity(strings[1886], false, 952, IFC2X3_IfcElement_type);
    IFC2X3_IfcWallType_type = new entity(strings[1887], false, 958, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcWasteTerminalType_type = new entity(strings[1888], false, 962, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcWorkControl_type = new entity(strings[1889], true, 973, IFC2X3_IfcControl_type);
    IFC2X3_IfcWorkPlan_type = new entity(strings[1890], false, 975, IFC2X3_IfcWorkControl_type);
    IFC2X3_IfcWorkSchedule_type = new entity(strings[1891], false, 976, IFC2X3_IfcWorkControl_type);
    IFC2X3_IfcZone_type = new entity(strings[1892], false, 978, IFC2X3_IfcGroup_type);
    IFC2X3_IfcCurveOrEdgeCurve_type = new select_type(strings[1893], 196, {
        IFC2X3_IfcBoundedCurve_type,
        IFC2X3_IfcEdgeCurve_type
    });
    IFC2X3_IfcStructuralActivityAssignmentSelect_type = new select_type(strings[1894], 803, {
        IFC2X3_IfcElement_type,
        IFC2X3_IfcStructuralItem_type
    });
    IFC2X3_Ifc2DCompositeCurve_type = new entity(strings[1895], false, 0, IFC2X3_IfcCompositeCurve_type);
    IFC2X3_IfcActionRequest_type = new entity(strings[1896], false, 3, IFC2X3_IfcControl_type);
    IFC2X3_IfcAirTerminalBoxType_type = new entity(strings[1897], false, 14, IFC2X3_IfcFlowControllerType_type);
    IFC2X3_IfcAirTerminalType_type = new entity(strings[1898], false, 16, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcAirToAirHeatRecoveryType_type = new entity(strings[1899], false, 18, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcAngularDimension_type = new entity(strings[1900], false, 25, IFC2X3_IfcDimensionCurveDirectedCallout_type);
    IFC2X3_IfcAsset_type = new entity(strings[1901], false, 50, IFC2X3_IfcGroup_type);
    IFC2X3_IfcBSplineCurve_type = new entity(strings[1902], true, 80, IFC2X3_IfcBoundedCurve_type);
    IFC2X3_IfcBeamType_type = new entity(strings[1903], false, 57, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcBezierCurve_type = new entity(strings[1904], false, 60, IFC2X3_IfcBSplineCurve_type);
    IFC2X3_IfcBoilerType_type = new entity(strings[1905], false, 63, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcBuildingElement_type = new entity(strings[1906], true, 83, IFC2X3_IfcElement_type);
    IFC2X3_IfcBuildingElementComponent_type = new entity(strings[1907], true, 84, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcBuildingElementPart_type = new entity(strings[1908], false, 85, IFC2X3_IfcBuildingElementComponent_type);
    IFC2X3_IfcBuildingElementProxy_type = new entity(strings[1909], false, 86, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcBuildingElementProxyType_type = new entity(strings[1910], false, 87, IFC2X3_IfcBuildingElementType_type);
    IFC2X3_IfcCableCarrierFittingType_type = new entity(strings[1911], false, 91, IFC2X3_IfcFlowFittingType_type);
    IFC2X3_IfcCableCarrierSegmentType_type = new entity(strings[1912], false, 93, IFC2X3_IfcFlowSegmentType_type);
    IFC2X3_IfcCableSegmentType_type = new entity(strings[1913], false, 95, IFC2X3_IfcFlowSegmentType_type);
    IFC2X3_IfcChillerType_type = new entity(strings[1914], false, 108, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcCircle_type = new entity(strings[1915], false, 110, IFC2X3_IfcConic_type);
    IFC2X3_IfcCoilType_type = new entity(strings[1916], false, 121, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcColumn_type = new entity(strings[1917], false, 127, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcCompressorType_type = new entity(strings[1918], false, 136, IFC2X3_IfcFlowMovingDeviceType_type);
    IFC2X3_IfcCondenserType_type = new entity(strings[1919], false, 138, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcCondition_type = new entity(strings[1920], false, 140, IFC2X3_IfcGroup_type);
    IFC2X3_IfcConditionCriterion_type = new entity(strings[1921], false, 141, IFC2X3_IfcControl_type);
    IFC2X3_IfcConstructionEquipmentResource_type = new entity(strings[1922], false, 157, IFC2X3_IfcConstructionResource_type);
    IFC2X3_IfcConstructionMaterialResource_type = new entity(strings[1923], false, 158, IFC2X3_IfcConstructionResource_type);
    IFC2X3_IfcConstructionProductResource_type = new entity(strings[1924], false, 159, IFC2X3_IfcConstructionResource_type);
    IFC2X3_IfcCooledBeamType_type = new entity(strings[1925], false, 167, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcCoolingTowerType_type = new entity(strings[1926], false, 169, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcCovering_type = new entity(strings[1927], false, 177, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcCurtainWall_type = new entity(strings[1928], false, 189, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcDamperType_type = new entity(strings[1929], false, 202, IFC2X3_IfcFlowControllerType_type);
    IFC2X3_IfcDiameterDimension_type = new entity(strings[1930], false, 217, IFC2X3_IfcDimensionCurveDirectedCallout_type);
    IFC2X3_IfcDiscreteAccessory_type = new entity(strings[1931], false, 228, IFC2X3_IfcElementComponent_type);
    IFC2X3_IfcDiscreteAccessoryType_type = new entity(strings[1932], false, 229, IFC2X3_IfcElementComponentType_type);
    IFC2X3_IfcDistributionChamberElementType_type = new entity(strings[1933], false, 231, IFC2X3_IfcDistributionFlowElementType_type);
    IFC2X3_IfcDistributionControlElementType_type = new entity(strings[1934], true, 234, IFC2X3_IfcDistributionElementType_type);
    IFC2X3_IfcDistributionElement_type = new entity(strings[1935], false, 235, IFC2X3_IfcElement_type);
    IFC2X3_IfcDistributionFlowElement_type = new entity(strings[1936], false, 237, IFC2X3_IfcDistributionElement_type);
    IFC2X3_IfcDistributionPort_type = new entity(strings[1937], false, 239, IFC2X3_IfcPort_type);
    IFC2X3_IfcDoor_type = new entity(strings[1938], false, 247, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcDuctFittingType_type = new entity(strings[1939], false, 262, IFC2X3_IfcFlowFittingType_type);
    IFC2X3_IfcDuctSegmentType_type = new entity(strings[1940], false, 264, IFC2X3_IfcFlowSegmentType_type);
    IFC2X3_IfcDuctSilencerType_type = new entity(strings[1941], false, 266, IFC2X3_IfcFlowTreatmentDeviceType_type);
    IFC2X3_IfcEdgeFeature_type = new entity(strings[1942], true, 271, IFC2X3_IfcFeatureElementSubtraction_type);
    IFC2X3_IfcElectricApplianceType_type = new entity(strings[1943], false, 276, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcElectricFlowStorageDeviceType_type = new entity(strings[1944], false, 285, IFC2X3_IfcFlowStorageDeviceType_type);
    IFC2X3_IfcElectricGeneratorType_type = new entity(strings[1945], false, 287, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcElectricHeaterType_type = new entity(strings[1946], false, 289, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcElectricMotorType_type = new entity(strings[1947], false, 291, IFC2X3_IfcEnergyConversionDeviceType_type);
    IFC2X3_IfcElectricTimeControlType_type = new entity(strings[1948], false, 294, IFC2X3_IfcFlowControllerType_type);
    IFC2X3_IfcElectricalCircuit_type = new entity(strings[1949], false, 274, IFC2X3_IfcSystem_type);
    IFC2X3_IfcElectricalElement_type = new entity(strings[1950], false, 275, IFC2X3_IfcElement_type);
    IFC2X3_IfcEnergyConversionDevice_type = new entity(strings[1951], false, 308, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcFanType_type = new entity(strings[1952], false, 336, IFC2X3_IfcFlowMovingDeviceType_type);
    IFC2X3_IfcFilterType_type = new entity(strings[1953], false, 349, IFC2X3_IfcFlowTreatmentDeviceType_type);
    IFC2X3_IfcFireSuppressionTerminalType_type = new entity(strings[1954], false, 351, IFC2X3_IfcFlowTerminalType_type);
    IFC2X3_IfcFlowController_type = new entity(strings[1955], false, 353, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcFlowFitting_type = new entity(strings[1956], false, 356, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcFlowInstrumentType_type = new entity(strings[1957], false, 358, IFC2X3_IfcDistributionControlElementType_type);
    IFC2X3_IfcFlowMovingDevice_type = new entity(strings[1958], false, 362, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcFlowSegment_type = new entity(strings[1959], false, 364, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcFlowStorageDevice_type = new entity(strings[1960], false, 366, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcFlowTerminal_type = new entity(strings[1961], false, 368, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcFlowTreatmentDevice_type = new entity(strings[1962], false, 370, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcFooting_type = new entity(strings[1963], false, 376, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcMember_type = new entity(strings[1964], false, 492, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcPile_type = new entity(strings[1965], false, 552, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcPlate_type = new entity(strings[1966], false, 566, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcRailing_type = new entity(strings[1967], false, 642, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcRamp_type = new entity(strings[1968], false, 645, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcRampFlight_type = new entity(strings[1969], false, 646, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcRationalBezierCurve_type = new entity(strings[1970], false, 651, IFC2X3_IfcBezierCurve_type);
    IFC2X3_IfcReinforcingElement_type = new entity(strings[1971], true, 665, IFC2X3_IfcBuildingElementComponent_type);
    IFC2X3_IfcReinforcingMesh_type = new entity(strings[1972], false, 666, IFC2X3_IfcReinforcingElement_type);
    IFC2X3_IfcRoof_type = new entity(strings[1973], false, 730, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcRoundedEdgeFeature_type = new entity(strings[1974], false, 736, IFC2X3_IfcEdgeFeature_type);
    IFC2X3_IfcSensorType_type = new entity(strings[1975], false, 748, IFC2X3_IfcDistributionControlElementType_type);
    IFC2X3_IfcSlab_type = new entity(strings[1976], false, 768, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcStair_type = new entity(strings[1977], false, 795, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcStairFlight_type = new entity(strings[1978], false, 796, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcStructuralAnalysisModel_type = new entity(strings[1979], false, 804, IFC2X3_IfcSystem_type);
    IFC2X3_IfcTendon_type = new entity(strings[1980], false, 875, IFC2X3_IfcReinforcingElement_type);
    IFC2X3_IfcTendonAnchor_type = new entity(strings[1981], false, 876, IFC2X3_IfcReinforcingElement_type);
    IFC2X3_IfcVibrationIsolatorType_type = new entity(strings[1982], false, 950, IFC2X3_IfcDiscreteAccessoryType_type);
    IFC2X3_IfcWall_type = new entity(strings[1983], false, 956, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcWallStandardCase_type = new entity(strings[1984], false, 957, IFC2X3_IfcWall_type);
    IFC2X3_IfcWindow_type = new entity(strings[1985], false, 965, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcActuatorType_type = new entity(strings[1986], false, 9, IFC2X3_IfcDistributionControlElementType_type);
    IFC2X3_IfcAlarmType_type = new entity(strings[1987], false, 20, IFC2X3_IfcDistributionControlElementType_type);
    IFC2X3_IfcBeam_type = new entity(strings[1988], false, 56, IFC2X3_IfcBuildingElement_type);
    IFC2X3_IfcChamferEdgeFeature_type = new entity(strings[1989], false, 105, IFC2X3_IfcEdgeFeature_type);
    IFC2X3_IfcControllerType_type = new entity(strings[1990], false, 164, IFC2X3_IfcDistributionControlElementType_type);
    IFC2X3_IfcDistributionChamberElement_type = new entity(strings[1991], false, 230, IFC2X3_IfcDistributionFlowElement_type);
    IFC2X3_IfcDistributionControlElement_type = new entity(strings[1992], false, 233, IFC2X3_IfcDistributionElement_type);
    IFC2X3_IfcElectricDistributionPoint_type = new entity(strings[1993], false, 283, IFC2X3_IfcFlowController_type);
    IFC2X3_IfcReinforcingBar_type = new entity(strings[1994], false, 662, IFC2X3_IfcReinforcingElement_type);
    IFC2X3_Ifc2DCompositeCurve_type->set_attributes({
    },{
            false, false
    });
    IFC2X3_IfcActionRequest_type->set_attributes({
            new attribute(strings[1995], new named_type(IFC2X3_IfcIdentifier_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcActor_type->set_attributes({
            new attribute(strings[1996], new named_type(IFC2X3_IfcActorSelect_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcActorRole_type->set_attributes({
            new attribute(strings[1997], new named_type(IFC2X3_IfcRoleEnum_type), false),
            new attribute(strings[1998], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcActuatorType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcActuatorTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcAddress_type->set_attributes({
            new attribute(strings[2001], new named_type(IFC2X3_IfcAddressTypeEnum_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2002], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcAirTerminalBoxType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcAirTerminalBoxTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcAirTerminalType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcAirTerminalTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcAirToAirHeatRecoveryType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcAirToAirHeatRecoveryTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcAlarmType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcAlarmTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcAngularDimension_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcAnnotation_type->set_attributes({
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcAnnotationCurveOccurrence_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcAnnotationFillArea_type->set_attributes({
            new attribute(strings[2003], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2004], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcCurve_type)), true)
    },{
            false, false
    });
    IFC2X3_IfcAnnotationFillAreaOccurrence_type->set_attributes({
            new attribute(strings[2005], new named_type(IFC2X3_IfcPoint_type), true),
            new attribute(strings[2006], new named_type(IFC2X3_IfcGlobalOrLocalEnum_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcAnnotationOccurrence_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcAnnotationSurface_type->set_attributes({
            new attribute(strings[2007], new named_type(IFC2X3_IfcGeometricRepresentationItem_type), false),
            new attribute(strings[2008], new named_type(IFC2X3_IfcTextureCoordinate_type), true)
    },{
            false, false
    });
    IFC2X3_IfcAnnotationSurfaceOccurrence_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcAnnotationSymbolOccurrence_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcAnnotationTextOccurrence_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcApplication_type->set_attributes({
            new attribute(strings[2009], new named_type(IFC2X3_IfcOrganization_type), false),
            new attribute(strings[2010], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2011], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2012], new named_type(IFC2X3_IfcIdentifier_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcAppliedValue_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2014], new named_type(IFC2X3_IfcAppliedValueSelect_type), true),
            new attribute(strings[2015], new named_type(IFC2X3_IfcMeasureWithUnit_type), true),
            new attribute(strings[2016], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2017], new named_type(IFC2X3_IfcDateTimeSelect_type), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcAppliedValueRelationship_type->set_attributes({
            new attribute(strings[2018], new named_type(IFC2X3_IfcAppliedValue_type), false),
            new attribute(strings[2019], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcAppliedValue_type)), false),
            new attribute(strings[2020], new named_type(IFC2X3_IfcArithmeticOperatorEnum_type), false),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcApproval_type->set_attributes({
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2021], new named_type(IFC2X3_IfcDateTimeSelect_type), false),
            new attribute(strings[2022], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2023], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2024], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2025], new named_type(IFC2X3_IfcIdentifier_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcApprovalActorRelationship_type->set_attributes({
            new attribute(strings[2026], new named_type(IFC2X3_IfcActorSelect_type), false),
            new attribute(strings[2027], new named_type(IFC2X3_IfcApproval_type), false),
            new attribute(strings[1997], new named_type(IFC2X3_IfcActorRole_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcApprovalPropertyRelationship_type->set_attributes({
            new attribute(strings[2028], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcProperty_type)), false),
            new attribute(strings[2027], new named_type(IFC2X3_IfcApproval_type), false)
    },{
            false, false
    });
    IFC2X3_IfcApprovalRelationship_type->set_attributes({
            new attribute(strings[2029], new named_type(IFC2X3_IfcApproval_type), false),
            new attribute(strings[2030], new named_type(IFC2X3_IfcApproval_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcArbitraryClosedProfileDef_type->set_attributes({
            new attribute(strings[2031], new named_type(IFC2X3_IfcCurve_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcArbitraryOpenProfileDef_type->set_attributes({
            new attribute(strings[2032], new named_type(IFC2X3_IfcBoundedCurve_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcArbitraryProfileDefWithVoids_type->set_attributes({
            new attribute(strings[2033], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcCurve_type)), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcAsset_type->set_attributes({
            new attribute(strings[2034], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2035], new named_type(IFC2X3_IfcCostValue_type), false),
            new attribute(strings[2036], new named_type(IFC2X3_IfcCostValue_type), false),
            new attribute(strings[2037], new named_type(IFC2X3_IfcCostValue_type), false),
            new attribute(strings[2038], new named_type(IFC2X3_IfcActorSelect_type), false),
            new attribute(strings[2039], new named_type(IFC2X3_IfcActorSelect_type), false),
            new attribute(strings[2040], new named_type(IFC2X3_IfcPerson_type), false),
            new attribute(strings[2041], new named_type(IFC2X3_IfcCalendarDate_type), false),
            new attribute(strings[2042], new named_type(IFC2X3_IfcCostValue_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcAsymmetricIShapeProfileDef_type->set_attributes({
            new attribute(strings[2043], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2044], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2045], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2046], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcAxis1Placement_type->set_attributes({
            new attribute(strings[2047], new named_type(IFC2X3_IfcDirection_type), true)
    },{
            false, false
    });
    IFC2X3_IfcAxis2Placement2D_type->set_attributes({
            new attribute(strings[2048], new named_type(IFC2X3_IfcDirection_type), true)
    },{
            false, false
    });
    IFC2X3_IfcAxis2Placement3D_type->set_attributes({
            new attribute(strings[2047], new named_type(IFC2X3_IfcDirection_type), true),
            new attribute(strings[2048], new named_type(IFC2X3_IfcDirection_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcBSplineCurve_type->set_attributes({
            new attribute(strings[2049], new simple_type(simple_type::integer_type), false),
            new attribute(strings[2050], new aggregation_type(aggregation_type::list_type, 2, -1, new named_type(IFC2X3_IfcCartesianPoint_type)), false),
            new attribute(strings[2051], new named_type(IFC2X3_IfcBSplineCurveForm_type), false),
            new attribute(strings[2052], new simple_type(simple_type::logical_type), false),
            new attribute(strings[2053], new simple_type(simple_type::logical_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcBeam_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBeamType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcBeamTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBezierCurve_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcBlobTexture_type->set_attributes({
            new attribute(strings[2054], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2055], new simple_type(simple_type::boolean_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcBlock_type->set_attributes({
            new attribute(strings[2056], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2057], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2058], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcBoilerType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcBoilerTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBooleanClippingResult_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcBooleanResult_type->set_attributes({
            new attribute(strings[2059], new named_type(IFC2X3_IfcBooleanOperator_type), false),
            new attribute(strings[2060], new named_type(IFC2X3_IfcBooleanOperand_type), false),
            new attribute(strings[2061], new named_type(IFC2X3_IfcBooleanOperand_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcBoundaryCondition_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false
    });
    IFC2X3_IfcBoundaryEdgeCondition_type->set_attributes({
            new attribute(strings[2062], new named_type(IFC2X3_IfcModulusOfLinearSubgradeReactionMeasure_type), true),
            new attribute(strings[2063], new named_type(IFC2X3_IfcModulusOfLinearSubgradeReactionMeasure_type), true),
            new attribute(strings[2064], new named_type(IFC2X3_IfcModulusOfLinearSubgradeReactionMeasure_type), true),
            new attribute(strings[2065], new named_type(IFC2X3_IfcModulusOfRotationalSubgradeReactionMeasure_type), true),
            new attribute(strings[2066], new named_type(IFC2X3_IfcModulusOfRotationalSubgradeReactionMeasure_type), true),
            new attribute(strings[2067], new named_type(IFC2X3_IfcModulusOfRotationalSubgradeReactionMeasure_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcBoundaryFaceCondition_type->set_attributes({
            new attribute(strings[2068], new named_type(IFC2X3_IfcModulusOfSubgradeReactionMeasure_type), true),
            new attribute(strings[2069], new named_type(IFC2X3_IfcModulusOfSubgradeReactionMeasure_type), true),
            new attribute(strings[2070], new named_type(IFC2X3_IfcModulusOfSubgradeReactionMeasure_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcBoundaryNodeCondition_type->set_attributes({
            new attribute(strings[2071], new named_type(IFC2X3_IfcLinearStiffnessMeasure_type), true),
            new attribute(strings[2072], new named_type(IFC2X3_IfcLinearStiffnessMeasure_type), true),
            new attribute(strings[2073], new named_type(IFC2X3_IfcLinearStiffnessMeasure_type), true),
            new attribute(strings[2074], new named_type(IFC2X3_IfcRotationalStiffnessMeasure_type), true),
            new attribute(strings[2075], new named_type(IFC2X3_IfcRotationalStiffnessMeasure_type), true),
            new attribute(strings[2076], new named_type(IFC2X3_IfcRotationalStiffnessMeasure_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcBoundaryNodeConditionWarping_type->set_attributes({
            new attribute(strings[2077], new named_type(IFC2X3_IfcWarpingMomentMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBoundedCurve_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcBoundedSurface_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcBoundingBox_type->set_attributes({
            new attribute(strings[2078], new named_type(IFC2X3_IfcCartesianPoint_type), false),
            new attribute(strings[2079], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2080], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2081], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcBoxedHalfSpace_type->set_attributes({
            new attribute(strings[2082], new named_type(IFC2X3_IfcBoundingBox_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcBuilding_type->set_attributes({
            new attribute(strings[2083], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2084], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2085], new named_type(IFC2X3_IfcPostalAddress_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBuildingElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBuildingElementComponent_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBuildingElementPart_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBuildingElementProxy_type->set_attributes({
            new attribute(strings[2086], new named_type(IFC2X3_IfcElementCompositionEnum_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBuildingElementProxyType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcBuildingElementProxyTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBuildingElementType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcBuildingStorey_type->set_attributes({
            new attribute(strings[2087], new named_type(IFC2X3_IfcLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCShapeProfileDef_type->set_attributes({
            new attribute(strings[2088], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2089], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2090], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2091], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2092], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2093], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCableCarrierFittingType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCableCarrierFittingTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCableCarrierSegmentType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCableCarrierSegmentTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCableSegmentType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCableSegmentTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCalendarDate_type->set_attributes({
            new attribute(strings[2094], new named_type(IFC2X3_IfcDayInMonthNumber_type), false),
            new attribute(strings[2095], new named_type(IFC2X3_IfcMonthInYearNumber_type), false),
            new attribute(strings[2096], new named_type(IFC2X3_IfcYearNumber_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcCartesianPoint_type->set_attributes({
            new attribute(strings[2097], new aggregation_type(aggregation_type::list_type, 1, 3, new named_type(IFC2X3_IfcLengthMeasure_type)), false)
    },{
            false
    });
    IFC2X3_IfcCartesianTransformationOperator_type->set_attributes({
            new attribute(strings[2098], new named_type(IFC2X3_IfcDirection_type), true),
            new attribute(strings[2099], new named_type(IFC2X3_IfcDirection_type), true),
            new attribute(strings[2100], new named_type(IFC2X3_IfcCartesianPoint_type), false),
            new attribute(strings[2101], new simple_type(simple_type::real_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcCartesianTransformationOperator2D_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcCartesianTransformationOperator2DnonUniform_type->set_attributes({
            new attribute(strings[2102], new simple_type(simple_type::real_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcCartesianTransformationOperator3D_type->set_attributes({
            new attribute(strings[2103], new named_type(IFC2X3_IfcDirection_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcCartesianTransformationOperator3DnonUniform_type->set_attributes({
            new attribute(strings[2102], new simple_type(simple_type::real_type), true),
            new attribute(strings[2104], new simple_type(simple_type::real_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcCenterLineProfileDef_type->set_attributes({
            new attribute(strings[2105], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcChamferEdgeFeature_type->set_attributes({
            new attribute(strings[2089], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2106], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcChillerType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcChillerTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCircle_type->set_attributes({
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false
    });
    IFC2X3_IfcCircleHollowProfileDef_type->set_attributes({
            new attribute(strings[2090], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcCircleProfileDef_type->set_attributes({
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcClassification_type->set_attributes({
            new attribute(strings[2108], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2109], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2110], new named_type(IFC2X3_IfcCalendarDate_type), true),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcClassificationItem_type->set_attributes({
            new attribute(strings[2111], new named_type(IFC2X3_IfcClassificationNotationFacet_type), false),
            new attribute(strings[2112], new named_type(IFC2X3_IfcClassification_type), true),
            new attribute(strings[2113], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcClassificationItemRelationship_type->set_attributes({
            new attribute(strings[2114], new named_type(IFC2X3_IfcClassificationItem_type), false),
            new attribute(strings[2115], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcClassificationItem_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcClassificationNotation_type->set_attributes({
            new attribute(strings[2116], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcClassificationNotationFacet_type)), false)
    },{
            false
    });
    IFC2X3_IfcClassificationNotationFacet_type->set_attributes({
            new attribute(strings[2117], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false
    });
    IFC2X3_IfcClassificationReference_type->set_attributes({
            new attribute(strings[2118], new named_type(IFC2X3_IfcClassification_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcClosedShell_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcCoilType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCoilTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcColourRgb_type->set_attributes({
            new attribute(strings[2119], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), false),
            new attribute(strings[2120], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), false),
            new attribute(strings[2121], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcColourSpecification_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false
    });
    IFC2X3_IfcColumn_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcColumnType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcColumnTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcComplexProperty_type->set_attributes({
            new attribute(strings[2122], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2123], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcProperty_type)), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcCompositeCurve_type->set_attributes({
            new attribute(strings[2124], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcCompositeCurveSegment_type)), false),
            new attribute(strings[2053], new simple_type(simple_type::logical_type), false)
    },{
            false, false
    });
    IFC2X3_IfcCompositeCurveSegment_type->set_attributes({
            new attribute(strings[2125], new named_type(IFC2X3_IfcTransitionCode_type), false),
            new attribute(strings[2126], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2127], new named_type(IFC2X3_IfcCurve_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcCompositeProfileDef_type->set_attributes({
            new attribute(strings[2128], new aggregation_type(aggregation_type::set_type, 2, -1, new named_type(IFC2X3_IfcProfileDef_type)), false),
            new attribute(strings[2129], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcCompressorType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCompressorTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCondenserType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCondenserTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCondition_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcConditionCriterion_type->set_attributes({
            new attribute(strings[2130], new named_type(IFC2X3_IfcConditionCriterionSelect_type), false),
            new attribute(strings[2131], new named_type(IFC2X3_IfcDateTimeSelect_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcConic_type->set_attributes({
            new attribute(strings[2132], new named_type(IFC2X3_IfcAxis2Placement_type), false)
    },{
            false
    });
    IFC2X3_IfcConnectedFaceSet_type->set_attributes({
            new attribute(strings[2133], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcFace_type)), false)
    },{
            false
    });
    IFC2X3_IfcConnectionCurveGeometry_type->set_attributes({
            new attribute(strings[2134], new named_type(IFC2X3_IfcCurveOrEdgeCurve_type), false),
            new attribute(strings[2135], new named_type(IFC2X3_IfcCurveOrEdgeCurve_type), true)
    },{
            false, false
    });
    IFC2X3_IfcConnectionGeometry_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcConnectionPointEccentricity_type->set_attributes({
            new attribute(strings[2136], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2137], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2138], new named_type(IFC2X3_IfcLengthMeasure_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcConnectionPointGeometry_type->set_attributes({
            new attribute(strings[2139], new named_type(IFC2X3_IfcPointOrVertexPoint_type), false),
            new attribute(strings[2140], new named_type(IFC2X3_IfcPointOrVertexPoint_type), true)
    },{
            false, false
    });
    IFC2X3_IfcConnectionPortGeometry_type->set_attributes({
            new attribute(strings[2141], new named_type(IFC2X3_IfcAxis2Placement_type), false),
            new attribute(strings[2142], new named_type(IFC2X3_IfcAxis2Placement_type), true),
            new attribute(strings[2143], new named_type(IFC2X3_IfcProfileDef_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcConnectionSurfaceGeometry_type->set_attributes({
            new attribute(strings[2144], new named_type(IFC2X3_IfcSurfaceOrFaceSurface_type), false),
            new attribute(strings[2145], new named_type(IFC2X3_IfcSurfaceOrFaceSurface_type), true)
    },{
            false, false
    });
    IFC2X3_IfcConstraint_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2146], new named_type(IFC2X3_IfcConstraintEnum_type), false),
            new attribute(strings[2147], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2148], new named_type(IFC2X3_IfcActorSelect_type), true),
            new attribute(strings[2149], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2150], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcConstraintAggregationRelationship_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2151], new named_type(IFC2X3_IfcConstraint_type), false),
            new attribute(strings[2152], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcConstraint_type)), false),
            new attribute(strings[2153], new named_type(IFC2X3_IfcLogicalOperatorEnum_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcConstraintClassificationRelationship_type->set_attributes({
            new attribute(strings[2154], new named_type(IFC2X3_IfcConstraint_type), false),
            new attribute(strings[2155], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcClassificationNotationSelect_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcConstraintRelationship_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2151], new named_type(IFC2X3_IfcConstraint_type), false),
            new attribute(strings[2152], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcConstraint_type)), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcConstructionEquipmentResource_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcConstructionMaterialResource_type->set_attributes({
            new attribute(strings[2156], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcActorSelect_type)), true),
            new attribute(strings[2157], new named_type(IFC2X3_IfcRatioMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcConstructionProductResource_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcConstructionResource_type->set_attributes({
            new attribute(strings[2158], new named_type(IFC2X3_IfcIdentifier_type), true),
            new attribute(strings[2159], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2160], new named_type(IFC2X3_IfcResourceConsumptionEnum_type), true),
            new attribute(strings[2161], new named_type(IFC2X3_IfcMeasureWithUnit_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcContextDependentUnit_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcControl_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcControllerType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcControllerTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcConversionBasedUnit_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2162], new named_type(IFC2X3_IfcMeasureWithUnit_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcCooledBeamType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCooledBeamTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCoolingTowerType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCoolingTowerTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCoordinatedUniversalTimeOffset_type->set_attributes({
            new attribute(strings[2163], new named_type(IFC2X3_IfcHourInDay_type), false),
            new attribute(strings[2164], new named_type(IFC2X3_IfcMinuteInHour_type), true),
            new attribute(strings[2165], new named_type(IFC2X3_IfcAheadOrBehind_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcCostItem_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcCostSchedule_type->set_attributes({
            new attribute(strings[2166], new named_type(IFC2X3_IfcActorSelect_type), true),
            new attribute(strings[2167], new named_type(IFC2X3_IfcActorSelect_type), true),
            new attribute(strings[2168], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2169], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2170], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcActorSelect_type)), true),
            new attribute(strings[2171], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2172], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2000], new named_type(IFC2X3_IfcCostScheduleTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCostValue_type->set_attributes({
            new attribute(strings[2173], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2174], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCovering_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCoveringTypeEnum_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCoveringType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCoveringTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCraneRailAShapeProfileDef_type->set_attributes({
            new attribute(strings[2175], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2176], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2177], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2178], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2179], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2180], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2181], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2182], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2183], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2184], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2046], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCraneRailFShapeProfileDef_type->set_attributes({
            new attribute(strings[2175], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2177], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2178], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2179], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2180], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2182], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2183], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2046], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCrewResource_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCsgPrimitive3D_type->set_attributes({
            new attribute(strings[2132], new named_type(IFC2X3_IfcAxis2Placement3D_type), false)
    },{
            false
    });
    IFC2X3_IfcCsgSolid_type->set_attributes({
            new attribute(strings[2185], new named_type(IFC2X3_IfcCsgSelect_type), false)
    },{
            false
    });
    IFC2X3_IfcCurrencyRelationship_type->set_attributes({
            new attribute(strings[2186], new named_type(IFC2X3_IfcMonetaryUnit_type), false),
            new attribute(strings[2187], new named_type(IFC2X3_IfcMonetaryUnit_type), false),
            new attribute(strings[2188], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), false),
            new attribute(strings[2189], new named_type(IFC2X3_IfcDateAndTime_type), false),
            new attribute(strings[2190], new named_type(IFC2X3_IfcLibraryInformation_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcCurtainWall_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCurtainWallType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcCurtainWallTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcCurve_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcCurveBoundedPlane_type->set_attributes({
            new attribute(strings[2191], new named_type(IFC2X3_IfcPlane_type), false),
            new attribute(strings[2003], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2004], new aggregation_type(aggregation_type::set_type, 0, -1, new named_type(IFC2X3_IfcCurve_type)), false)
    },{
            false, false, false
    });
    IFC2X3_IfcCurveStyle_type->set_attributes({
            new attribute(strings[2192], new named_type(IFC2X3_IfcCurveFontOrScaledCurveFontSelect_type), true),
            new attribute(strings[2193], new named_type(IFC2X3_IfcSizeSelect_type), true),
            new attribute(strings[2194], new named_type(IFC2X3_IfcColour_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcCurveStyleFont_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2195], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcCurveStyleFontPattern_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcCurveStyleFontAndScaling_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2192], new named_type(IFC2X3_IfcCurveStyleFontSelect_type), false),
            new attribute(strings[2196], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcCurveStyleFontPattern_type->set_attributes({
            new attribute(strings[2197], new named_type(IFC2X3_IfcLengthMeasure_type), false),
            new attribute(strings[2198], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false
    });
    IFC2X3_IfcDamperType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcDamperTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDateAndTime_type->set_attributes({
            new attribute(strings[2199], new named_type(IFC2X3_IfcCalendarDate_type), false),
            new attribute(strings[2200], new named_type(IFC2X3_IfcLocalTime_type), false)
    },{
            false, false
    });
    IFC2X3_IfcDefinedSymbol_type->set_attributes({
            new attribute(strings[2201], new named_type(IFC2X3_IfcDefinedSymbolSelect_type), false),
            new attribute(strings[2202], new named_type(IFC2X3_IfcCartesianTransformationOperator2D_type), false)
    },{
            false, false
    });
    IFC2X3_IfcDerivedProfileDef_type->set_attributes({
            new attribute(strings[2203], new named_type(IFC2X3_IfcProfileDef_type), false),
            new attribute(strings[2059], new named_type(IFC2X3_IfcCartesianTransformationOperator2D_type), false),
            new attribute(strings[2129], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcDerivedUnit_type->set_attributes({
            new attribute(strings[2204], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcDerivedUnitElement_type)), false),
            new attribute(strings[2205], new named_type(IFC2X3_IfcDerivedUnitEnum_type), false),
            new attribute(strings[2206], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcDerivedUnitElement_type->set_attributes({
            new attribute(strings[2207], new named_type(IFC2X3_IfcNamedUnit_type), false),
            new attribute(strings[2208], new simple_type(simple_type::integer_type), false)
    },{
            false, false
    });
    IFC2X3_IfcDiameterDimension_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcDimensionCalloutRelationship_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcDimensionCurve_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcDimensionCurveDirectedCallout_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcDimensionCurveTerminator_type->set_attributes({
            new attribute(strings[1997], new named_type(IFC2X3_IfcDimensionExtentUsage_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcDimensionPair_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcDimensionalExponents_type->set_attributes({
            new attribute(strings[2209], new simple_type(simple_type::integer_type), false),
            new attribute(strings[2210], new simple_type(simple_type::integer_type), false),
            new attribute(strings[2211], new simple_type(simple_type::integer_type), false),
            new attribute(strings[2212], new simple_type(simple_type::integer_type), false),
            new attribute(strings[2213], new simple_type(simple_type::integer_type), false),
            new attribute(strings[2214], new simple_type(simple_type::integer_type), false),
            new attribute(strings[2215], new simple_type(simple_type::integer_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcDirection_type->set_attributes({
            new attribute(strings[2216], new aggregation_type(aggregation_type::list_type, 2, 3, new simple_type(simple_type::real_type)), false)
    },{
            false
    });
    IFC2X3_IfcDiscreteAccessory_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDiscreteAccessoryType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionChamberElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionChamberElementType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcDistributionChamberElementTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionControlElement_type->set_attributes({
            new attribute(strings[2217], new named_type(IFC2X3_IfcIdentifier_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionControlElementType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionElementType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionFlowElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionFlowElementType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDistributionPort_type->set_attributes({
            new attribute(strings[2218], new named_type(IFC2X3_IfcFlowDirectionEnum_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDocumentElectronicFormat_type->set_attributes({
            new attribute(strings[2219], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2220], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2221], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcDocumentInformation_type->set_attributes({
            new attribute(strings[2222], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2223], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcDocumentReference_type)), true),
            new attribute(strings[2001], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2224], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2225], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2226], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2227], new named_type(IFC2X3_IfcActorSelect_type), true),
            new attribute(strings[2228], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcActorSelect_type)), true),
            new attribute(strings[2149], new named_type(IFC2X3_IfcDateAndTime_type), true),
            new attribute(strings[2229], new named_type(IFC2X3_IfcDateAndTime_type), true),
            new attribute(strings[2230], new named_type(IFC2X3_IfcDocumentElectronicFormat_type), true),
            new attribute(strings[2231], new named_type(IFC2X3_IfcCalendarDate_type), true),
            new attribute(strings[2232], new named_type(IFC2X3_IfcCalendarDate_type), true),
            new attribute(strings[2233], new named_type(IFC2X3_IfcDocumentConfidentialityEnum_type), true),
            new attribute(strings[2169], new named_type(IFC2X3_IfcDocumentStatusEnum_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDocumentInformationRelationship_type->set_attributes({
            new attribute(strings[2234], new named_type(IFC2X3_IfcDocumentInformation_type), false),
            new attribute(strings[2235], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcDocumentInformation_type)), false),
            new attribute(strings[2236], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcDocumentReference_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcDoor_type->set_attributes({
            new attribute(strings[2175], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2237], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDoorLiningProperties_type->set_attributes({
            new attribute(strings[2238], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2239], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2240], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2241], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2242], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2243], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2244], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2245], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2246], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2247], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2248], new named_type(IFC2X3_IfcShapeAspect_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDoorPanelProperties_type->set_attributes({
            new attribute(strings[2249], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2250], new named_type(IFC2X3_IfcDoorPanelOperationEnum_type), false),
            new attribute(strings[2251], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2252], new named_type(IFC2X3_IfcDoorPanelPositionEnum_type), false),
            new attribute(strings[2248], new named_type(IFC2X3_IfcShapeAspect_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDoorStyle_type->set_attributes({
            new attribute(strings[2253], new named_type(IFC2X3_IfcDoorStyleOperationEnum_type), false),
            new attribute(strings[2254], new named_type(IFC2X3_IfcDoorStyleConstructionEnum_type), false),
            new attribute(strings[2255], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2256], new simple_type(simple_type::boolean_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDraughtingCallout_type->set_attributes({
            new attribute(strings[2257], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcDraughtingCalloutElement_type)), false)
    },{
            false
    });
    IFC2X3_IfcDraughtingCalloutRelationship_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2258], new named_type(IFC2X3_IfcDraughtingCallout_type), false),
            new attribute(strings[2259], new named_type(IFC2X3_IfcDraughtingCallout_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcDraughtingPreDefinedColour_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcDraughtingPreDefinedCurveFont_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcDraughtingPreDefinedTextFont_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcDuctFittingType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcDuctFittingTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDuctSegmentType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcDuctSegmentTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcDuctSilencerType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcDuctSilencerTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcEdge_type->set_attributes({
            new attribute(strings[2260], new named_type(IFC2X3_IfcVertex_type), false),
            new attribute(strings[2261], new named_type(IFC2X3_IfcVertex_type), false)
    },{
            false, false
    });
    IFC2X3_IfcEdgeCurve_type->set_attributes({
            new attribute(strings[2262], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2126], new simple_type(simple_type::boolean_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcEdgeFeature_type->set_attributes({
            new attribute(strings[2263], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcEdgeLoop_type->set_attributes({
            new attribute(strings[2264], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcOrientedEdge_type)), false)
    },{
            false
    });
    IFC2X3_IfcElectricApplianceType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcElectricApplianceTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElectricDistributionPoint_type->set_attributes({
            new attribute(strings[2265], new named_type(IFC2X3_IfcElectricDistributionPointFunctionEnum_type), false),
            new attribute(strings[2266], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElectricFlowStorageDeviceType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcElectricFlowStorageDeviceTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElectricGeneratorType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcElectricGeneratorTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElectricHeaterType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcElectricHeaterTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElectricMotorType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcElectricMotorTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElectricTimeControlType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcElectricTimeControlTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElectricalBaseProperties_type->set_attributes({
            new attribute(strings[2267], new named_type(IFC2X3_IfcElectricCurrentEnum_type), true),
            new attribute(strings[2268], new named_type(IFC2X3_IfcElectricVoltageMeasure_type), false),
            new attribute(strings[2269], new named_type(IFC2X3_IfcFrequencyMeasure_type), false),
            new attribute(strings[2270], new named_type(IFC2X3_IfcElectricCurrentMeasure_type), true),
            new attribute(strings[2271], new named_type(IFC2X3_IfcElectricCurrentMeasure_type), true),
            new attribute(strings[2272], new named_type(IFC2X3_IfcPowerMeasure_type), true),
            new attribute(strings[2273], new named_type(IFC2X3_IfcPowerMeasure_type), true),
            new attribute(strings[2274], new simple_type(simple_type::integer_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElectricalCircuit_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcElectricalElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElement_type->set_attributes({
            new attribute(strings[2275], new named_type(IFC2X3_IfcIdentifier_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElementAssembly_type->set_attributes({
            new attribute(strings[2276], new named_type(IFC2X3_IfcAssemblyPlaceEnum_type), true),
            new attribute(strings[2000], new named_type(IFC2X3_IfcElementAssemblyTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElementComponent_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElementComponentType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElementQuantity_type->set_attributes({
            new attribute(strings[2277], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2278], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcPhysicalQuantity_type)), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcElementType_type->set_attributes({
            new attribute(strings[2279], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcElementarySurface_type->set_attributes({
            new attribute(strings[2132], new named_type(IFC2X3_IfcAxis2Placement3D_type), false)
    },{
            false
    });
    IFC2X3_IfcEllipse_type->set_attributes({
            new attribute(strings[2280], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2281], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcEllipseProfileDef_type->set_attributes({
            new attribute(strings[2280], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2281], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcEnergyConversionDevice_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcEnergyConversionDeviceType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcEnergyProperties_type->set_attributes({
            new attribute(strings[2282], new named_type(IFC2X3_IfcEnergySequenceEnum_type), true),
            new attribute(strings[2283], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcEnvironmentalImpactValue_type->set_attributes({
            new attribute(strings[2284], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2285], new named_type(IFC2X3_IfcEnvironmentalImpactCategoryEnum_type), false),
            new attribute(strings[2286], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcEquipmentElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcEquipmentStandard_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcEvaporativeCoolerType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcEvaporativeCoolerTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcEvaporatorType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcEvaporatorTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcExtendedMaterialProperties_type->set_attributes({
            new attribute(strings[2287], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcProperty_type)), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcExternalReference_type->set_attributes({
            new attribute(strings[2288], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2289], new named_type(IFC2X3_IfcIdentifier_type), true),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcExternallyDefinedHatchStyle_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcExternallyDefinedSurfaceStyle_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcExternallyDefinedSymbol_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcExternallyDefinedTextFont_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcExtrudedAreaSolid_type->set_attributes({
            new attribute(strings[2290], new named_type(IFC2X3_IfcDirection_type), false),
            new attribute(strings[2088], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcFace_type->set_attributes({
            new attribute(strings[2291], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcFaceBound_type)), false)
    },{
            false
    });
    IFC2X3_IfcFaceBasedSurfaceModel_type->set_attributes({
            new attribute(strings[2292], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcConnectedFaceSet_type)), false)
    },{
            false
    });
    IFC2X3_IfcFaceBound_type->set_attributes({
            new attribute(strings[2293], new named_type(IFC2X3_IfcLoop_type), false),
            new attribute(strings[2294], new simple_type(simple_type::boolean_type), false)
    },{
            false, false
    });
    IFC2X3_IfcFaceOuterBound_type->set_attributes({
    },{
            false, false
    });
    IFC2X3_IfcFaceSurface_type->set_attributes({
            new attribute(strings[2295], new named_type(IFC2X3_IfcSurface_type), false),
            new attribute(strings[2126], new simple_type(simple_type::boolean_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcFacetedBrep_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcFacetedBrepWithVoids_type->set_attributes({
            new attribute(strings[2296], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcClosedShell_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcFailureConnectionCondition_type->set_attributes({
            new attribute(strings[2297], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2298], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2299], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2300], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2301], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2302], new named_type(IFC2X3_IfcForceMeasure_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcFanType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcFanTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFastener_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFastenerType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFeatureElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFeatureElementAddition_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFeatureElementSubtraction_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFillAreaStyle_type->set_attributes({
            new attribute(strings[2303], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcFillStyleSelect_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcFillAreaStyleHatching_type->set_attributes({
            new attribute(strings[2304], new named_type(IFC2X3_IfcCurveStyle_type), false),
            new attribute(strings[2305], new named_type(IFC2X3_IfcHatchLineDistanceSelect_type), false),
            new attribute(strings[2306], new named_type(IFC2X3_IfcCartesianPoint_type), true),
            new attribute(strings[2307], new named_type(IFC2X3_IfcCartesianPoint_type), true),
            new attribute(strings[2308], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcFillAreaStyleTileSymbolWithStyle_type->set_attributes({
            new attribute(strings[2309], new named_type(IFC2X3_IfcAnnotationSymbolOccurrence_type), false)
    },{
            false
    });
    IFC2X3_IfcFillAreaStyleTiles_type->set_attributes({
            new attribute(strings[2310], new named_type(IFC2X3_IfcOneDirectionRepeatFactor_type), false),
            new attribute(strings[2311], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcFillAreaStyleTileShapeSelect_type)), false),
            new attribute(strings[2312], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcFilterType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcFilterTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFireSuppressionTerminalType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcFireSuppressionTerminalTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowController_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowControllerType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowFitting_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowFittingType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowInstrumentType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcFlowInstrumentTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowMeterType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcFlowMeterTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowMovingDevice_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowMovingDeviceType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowSegment_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowSegmentType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowStorageDevice_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowStorageDeviceType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowTerminal_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowTerminalType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowTreatmentDevice_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFlowTreatmentDeviceType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFluidFlowProperties_type->set_attributes({
            new attribute(strings[2313], new named_type(IFC2X3_IfcPropertySourceEnum_type), false),
            new attribute(strings[2314], new named_type(IFC2X3_IfcTimeSeries_type), true),
            new attribute(strings[2315], new named_type(IFC2X3_IfcTimeSeries_type), true),
            new attribute(strings[2316], new named_type(IFC2X3_IfcTimeSeries_type), true),
            new attribute(strings[2317], new named_type(IFC2X3_IfcMaterial_type), false),
            new attribute(strings[2318], new named_type(IFC2X3_IfcTimeSeries_type), true),
            new attribute(strings[2319], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2320], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), true),
            new attribute(strings[2321], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), true),
            new attribute(strings[2322], new named_type(IFC2X3_IfcTimeSeries_type), true),
            new attribute(strings[2323], new named_type(IFC2X3_IfcTimeSeries_type), true),
            new attribute(strings[2324], new named_type(IFC2X3_IfcDerivedMeasureValue_type), true),
            new attribute(strings[2325], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2326], new named_type(IFC2X3_IfcLinearVelocityMeasure_type), true),
            new attribute(strings[2327], new named_type(IFC2X3_IfcPressureMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFooting_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcFootingTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFuelProperties_type->set_attributes({
            new attribute(strings[2328], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), true),
            new attribute(strings[2329], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2330], new named_type(IFC2X3_IfcHeatingValueMeasure_type), true),
            new attribute(strings[2331], new named_type(IFC2X3_IfcHeatingValueMeasure_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcFurnishingElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFurnishingElementType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcFurnitureStandard_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcFurnitureType_type->set_attributes({
            new attribute(strings[2276], new named_type(IFC2X3_IfcAssemblyPlaceEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcGasTerminalType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcGasTerminalTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcGeneralMaterialProperties_type->set_attributes({
            new attribute(strings[2332], new named_type(IFC2X3_IfcMolecularWeightMeasure_type), true),
            new attribute(strings[2333], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2334], new named_type(IFC2X3_IfcMassDensityMeasure_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcGeneralProfileProperties_type->set_attributes({
            new attribute(strings[2335], new named_type(IFC2X3_IfcMassPerLengthMeasure_type), true),
            new attribute(strings[2336], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2337], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2338], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2339], new named_type(IFC2X3_IfcAreaMeasure_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcGeometricCurveSet_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcGeometricRepresentationContext_type->set_attributes({
            new attribute(strings[2340], new named_type(IFC2X3_IfcDimensionCount_type), false),
            new attribute(strings[2341], new simple_type(simple_type::real_type), true),
            new attribute(strings[2342], new named_type(IFC2X3_IfcAxis2Placement_type), false),
            new attribute(strings[2343], new named_type(IFC2X3_IfcDirection_type), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcGeometricRepresentationItem_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcGeometricRepresentationSubContext_type->set_attributes({
            new attribute(strings[2344], new named_type(IFC2X3_IfcGeometricRepresentationContext_type), false),
            new attribute(strings[2345], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2346], new named_type(IFC2X3_IfcGeometricProjectionEnum_type), false),
            new attribute(strings[2347], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, true, true, true, true, false, false, false, false
    });
    IFC2X3_IfcGeometricSet_type->set_attributes({
            new attribute(strings[2204], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcGeometricSetSelect_type)), false)
    },{
            false
    });
    IFC2X3_IfcGrid_type->set_attributes({
            new attribute(strings[2348], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcGridAxis_type)), false),
            new attribute(strings[2349], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcGridAxis_type)), false),
            new attribute(strings[2350], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcGridAxis_type)), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcGridAxis_type->set_attributes({
            new attribute(strings[2351], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2352], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2126], new named_type(IFC2X3_IfcBoolean_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcGridPlacement_type->set_attributes({
            new attribute(strings[2353], new named_type(IFC2X3_IfcVirtualGridIntersection_type), false),
            new attribute(strings[2354], new named_type(IFC2X3_IfcVirtualGridIntersection_type), true)
    },{
            false, false
    });
    IFC2X3_IfcGroup_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcHalfSpaceSolid_type->set_attributes({
            new attribute(strings[2355], new named_type(IFC2X3_IfcSurface_type), false),
            new attribute(strings[2356], new simple_type(simple_type::boolean_type), false)
    },{
            false, false
    });
    IFC2X3_IfcHeatExchangerType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcHeatExchangerTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcHumidifierType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcHumidifierTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcHygroscopicMaterialProperties_type->set_attributes({
            new attribute(strings[2357], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2358], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2359], new named_type(IFC2X3_IfcIsothermalMoistureCapacityMeasure_type), true),
            new attribute(strings[2360], new named_type(IFC2X3_IfcVaporPermeabilityMeasure_type), true),
            new attribute(strings[2361], new named_type(IFC2X3_IfcMoistureDiffusivityMeasure_type), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcIShapeProfileDef_type->set_attributes({
            new attribute(strings[2237], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2362], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2180], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2363], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2364], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcImageTexture_type->set_attributes({
            new attribute(strings[2365], new named_type(IFC2X3_IfcIdentifier_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcInventory_type->set_attributes({
            new attribute(strings[2366], new named_type(IFC2X3_IfcInventoryTypeEnum_type), false),
            new attribute(strings[2367], new named_type(IFC2X3_IfcActorSelect_type), false),
            new attribute(strings[2368], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcPerson_type)), false),
            new attribute(strings[2369], new named_type(IFC2X3_IfcCalendarDate_type), false),
            new attribute(strings[2036], new named_type(IFC2X3_IfcCostValue_type), true),
            new attribute(strings[2035], new named_type(IFC2X3_IfcCostValue_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcIrregularTimeSeries_type->set_attributes({
            new attribute(strings[2370], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcIrregularTimeSeriesValue_type)), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcIrregularTimeSeriesValue_type->set_attributes({
            new attribute(strings[2371], new named_type(IFC2X3_IfcDateTimeSelect_type), false),
            new attribute(strings[2372], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcValue_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcJunctionBoxType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcJunctionBoxTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcLShapeProfileDef_type->set_attributes({
            new attribute(strings[2088], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2089], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2105], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2364], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2373], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2374], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true),
            new attribute(strings[2093], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2046], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcLaborResource_type->set_attributes({
            new attribute(strings[2375], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcLampType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcLampTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcLibraryInformation_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2010], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2376], new named_type(IFC2X3_IfcOrganization_type), true),
            new attribute(strings[2377], new named_type(IFC2X3_IfcCalendarDate_type), true),
            new attribute(strings[2378], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcLibraryReference_type)), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcLibraryReference_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcLightDistributionData_type->set_attributes({
            new attribute(strings[2379], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), false),
            new attribute(strings[2380], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcPlaneAngleMeasure_type)), false),
            new attribute(strings[2381], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLuminousIntensityDistributionMeasure_type)), false)
    },{
            false, false, false
    });
    IFC2X3_IfcLightFixtureType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcLightFixtureTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcLightIntensityDistribution_type->set_attributes({
            new attribute(strings[2382], new named_type(IFC2X3_IfcLightDistributionCurveEnum_type), false),
            new attribute(strings[2383], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLightDistributionData_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcLightSource_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2384], new named_type(IFC2X3_IfcColourRgb_type), false),
            new attribute(strings[2385], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2386], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcLightSourceAmbient_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcLightSourceDirectional_type->set_attributes({
            new attribute(strings[2294], new named_type(IFC2X3_IfcDirection_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcLightSourceGoniometric_type->set_attributes({
            new attribute(strings[2132], new named_type(IFC2X3_IfcAxis2Placement3D_type), false),
            new attribute(strings[2387], new named_type(IFC2X3_IfcColourRgb_type), true),
            new attribute(strings[2388], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), false),
            new attribute(strings[2389], new named_type(IFC2X3_IfcLuminousFluxMeasure_type), false),
            new attribute(strings[2390], new named_type(IFC2X3_IfcLightEmissionSourceEnum_type), false),
            new attribute(strings[2391], new named_type(IFC2X3_IfcLightDistributionDataSourceSelect_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcLightSourcePositional_type->set_attributes({
            new attribute(strings[2132], new named_type(IFC2X3_IfcCartesianPoint_type), false),
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2392], new named_type(IFC2X3_IfcReal_type), false),
            new attribute(strings[2393], new named_type(IFC2X3_IfcReal_type), false),
            new attribute(strings[2394], new named_type(IFC2X3_IfcReal_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcLightSourceSpot_type->set_attributes({
            new attribute(strings[2294], new named_type(IFC2X3_IfcDirection_type), false),
            new attribute(strings[2395], new named_type(IFC2X3_IfcReal_type), true),
            new attribute(strings[2396], new named_type(IFC2X3_IfcPositivePlaneAngleMeasure_type), false),
            new attribute(strings[2397], new named_type(IFC2X3_IfcPositivePlaneAngleMeasure_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcLine_type->set_attributes({
            new attribute(strings[2398], new named_type(IFC2X3_IfcCartesianPoint_type), false),
            new attribute(strings[2399], new named_type(IFC2X3_IfcVector_type), false)
    },{
            false, false
    });
    IFC2X3_IfcLinearDimension_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcLocalPlacement_type->set_attributes({
            new attribute(strings[2400], new named_type(IFC2X3_IfcObjectPlacement_type), true),
            new attribute(strings[2401], new named_type(IFC2X3_IfcAxis2Placement_type), false)
    },{
            false, false
    });
    IFC2X3_IfcLocalTime_type->set_attributes({
            new attribute(strings[2402], new named_type(IFC2X3_IfcHourInDay_type), false),
            new attribute(strings[2403], new named_type(IFC2X3_IfcMinuteInHour_type), true),
            new attribute(strings[2404], new named_type(IFC2X3_IfcSecondInMinute_type), true),
            new attribute(strings[2405], new named_type(IFC2X3_IfcCoordinatedUniversalTimeOffset_type), true),
            new attribute(strings[2406], new named_type(IFC2X3_IfcDaylightSavingHour_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcLoop_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcManifoldSolidBrep_type->set_attributes({
            new attribute(strings[2407], new named_type(IFC2X3_IfcClosedShell_type), false)
    },{
            false
    });
    IFC2X3_IfcMappedItem_type->set_attributes({
            new attribute(strings[2408], new named_type(IFC2X3_IfcRepresentationMap_type), false),
            new attribute(strings[2409], new named_type(IFC2X3_IfcCartesianTransformationOperator_type), false)
    },{
            false, false
    });
    IFC2X3_IfcMaterial_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false
    });
    IFC2X3_IfcMaterialClassificationRelationship_type->set_attributes({
            new attribute(strings[2410], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcClassificationNotationSelect_type)), false),
            new attribute(strings[2411], new named_type(IFC2X3_IfcMaterial_type), false)
    },{
            false, false
    });
    IFC2X3_IfcMaterialDefinitionRepresentation_type->set_attributes({
            new attribute(strings[2412], new named_type(IFC2X3_IfcMaterial_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcMaterialLayer_type->set_attributes({
            new attribute(strings[2413], new named_type(IFC2X3_IfcMaterial_type), true),
            new attribute(strings[2414], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2415], new named_type(IFC2X3_IfcLogical_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcMaterialLayerSet_type->set_attributes({
            new attribute(strings[2416], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcMaterialLayer_type)), false),
            new attribute(strings[2417], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false
    });
    IFC2X3_IfcMaterialLayerSetUsage_type->set_attributes({
            new attribute(strings[2418], new named_type(IFC2X3_IfcMaterialLayerSet_type), false),
            new attribute(strings[2419], new named_type(IFC2X3_IfcLayerSetDirectionEnum_type), false),
            new attribute(strings[2420], new named_type(IFC2X3_IfcDirectionSenseEnum_type), false),
            new attribute(strings[2421], new named_type(IFC2X3_IfcLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcMaterialList_type->set_attributes({
            new attribute(strings[2422], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcMaterial_type)), false)
    },{
            false
    });
    IFC2X3_IfcMaterialProperties_type->set_attributes({
            new attribute(strings[2413], new named_type(IFC2X3_IfcMaterial_type), false)
    },{
            false
    });
    IFC2X3_IfcMeasureWithUnit_type->set_attributes({
            new attribute(strings[2423], new named_type(IFC2X3_IfcValue_type), false),
            new attribute(strings[2424], new named_type(IFC2X3_IfcUnit_type), false)
    },{
            false, false
    });
    IFC2X3_IfcMechanicalConcreteMaterialProperties_type->set_attributes({
            new attribute(strings[2425], new named_type(IFC2X3_IfcPressureMeasure_type), true),
            new attribute(strings[2426], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2427], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2428], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2429], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2430], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcMechanicalFastener_type->set_attributes({
            new attribute(strings[2431], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2432], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcMechanicalFastenerType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcMechanicalMaterialProperties_type->set_attributes({
            new attribute(strings[2433], new named_type(IFC2X3_IfcDynamicViscosityMeasure_type), true),
            new attribute(strings[2434], new named_type(IFC2X3_IfcModulusOfElasticityMeasure_type), true),
            new attribute(strings[2435], new named_type(IFC2X3_IfcModulusOfElasticityMeasure_type), true),
            new attribute(strings[2436], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2437], new named_type(IFC2X3_IfcThermalExpansionCoefficientMeasure_type), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcMechanicalSteelMaterialProperties_type->set_attributes({
            new attribute(strings[2438], new named_type(IFC2X3_IfcPressureMeasure_type), true),
            new attribute(strings[2439], new named_type(IFC2X3_IfcPressureMeasure_type), true),
            new attribute(strings[2440], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2441], new named_type(IFC2X3_IfcModulusOfElasticityMeasure_type), true),
            new attribute(strings[2442], new named_type(IFC2X3_IfcPressureMeasure_type), true),
            new attribute(strings[2443], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2444], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcRelaxation_type)), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcMember_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcMemberType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcMemberTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcMetric_type->set_attributes({
            new attribute(strings[2445], new named_type(IFC2X3_IfcBenchmarkEnum_type), false),
            new attribute(strings[2446], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2447], new named_type(IFC2X3_IfcMetricValueSelect_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcMonetaryUnit_type->set_attributes({
            new attribute(strings[2448], new named_type(IFC2X3_IfcCurrencyEnum_type), false)
    },{
            false
    });
    IFC2X3_IfcMotorConnectionType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcMotorConnectionTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcMove_type->set_attributes({
            new attribute(strings[2449], new named_type(IFC2X3_IfcSpatialStructureElement_type), false),
            new attribute(strings[2450], new named_type(IFC2X3_IfcSpatialStructureElement_type), false),
            new attribute(strings[2451], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcText_type)), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcNamedUnit_type->set_attributes({
            new attribute(strings[2452], new named_type(IFC2X3_IfcDimensionalExponents_type), false),
            new attribute(strings[2205], new named_type(IFC2X3_IfcUnitEnum_type), false)
    },{
            false, false
    });
    IFC2X3_IfcObject_type->set_attributes({
            new attribute(strings[2453], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcObjectDefinition_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcObjectPlacement_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcObjective_type->set_attributes({
            new attribute(strings[2454], new named_type(IFC2X3_IfcMetric_type), true),
            new attribute(strings[2455], new named_type(IFC2X3_IfcMetric_type), true),
            new attribute(strings[2456], new named_type(IFC2X3_IfcObjectiveEnum_type), false),
            new attribute(strings[2457], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcOccupant_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcOccupantTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcOffsetCurve2D_type->set_attributes({
            new attribute(strings[2458], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2459], new named_type(IFC2X3_IfcLengthMeasure_type), false),
            new attribute(strings[2053], new simple_type(simple_type::logical_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcOffsetCurve3D_type->set_attributes({
            new attribute(strings[2458], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2459], new named_type(IFC2X3_IfcLengthMeasure_type), false),
            new attribute(strings[2053], new simple_type(simple_type::logical_type), false),
            new attribute(strings[2048], new named_type(IFC2X3_IfcDirection_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcOneDirectionRepeatFactor_type->set_attributes({
            new attribute(strings[2460], new named_type(IFC2X3_IfcVector_type), false)
    },{
            false
    });
    IFC2X3_IfcOpenShell_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcOpeningElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcOpticalMaterialProperties_type->set_attributes({
            new attribute(strings[2461], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2462], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2463], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2464], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2465], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2466], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2467], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2468], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2469], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcOrderAction_type->set_attributes({
            new attribute(strings[2470], new named_type(IFC2X3_IfcIdentifier_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcOrganization_type->set_attributes({
            new attribute(strings[2471], new named_type(IFC2X3_IfcIdentifier_type), true),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2472], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcActorRole_type)), true),
            new attribute(strings[2473], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcAddress_type)), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcOrganizationRelationship_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2474], new named_type(IFC2X3_IfcOrganization_type), false),
            new attribute(strings[2475], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcOrganization_type)), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcOrientedEdge_type->set_attributes({
            new attribute(strings[2476], new named_type(IFC2X3_IfcEdge_type), false),
            new attribute(strings[2294], new simple_type(simple_type::boolean_type), false)
    },{
            true, true, false, false
    });
    IFC2X3_IfcOutletType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcOutletTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcOwnerHistory_type->set_attributes({
            new attribute(strings[2477], new named_type(IFC2X3_IfcPersonAndOrganization_type), false),
            new attribute(strings[2478], new named_type(IFC2X3_IfcApplication_type), false),
            new attribute(strings[2479], new named_type(IFC2X3_IfcStateEnum_type), true),
            new attribute(strings[2480], new named_type(IFC2X3_IfcChangeActionEnum_type), false),
            new attribute(strings[2481], new named_type(IFC2X3_IfcTimeStamp_type), true),
            new attribute(strings[2482], new named_type(IFC2X3_IfcPersonAndOrganization_type), true),
            new attribute(strings[2483], new named_type(IFC2X3_IfcApplication_type), true),
            new attribute(strings[2484], new named_type(IFC2X3_IfcTimeStamp_type), false)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcParameterizedProfileDef_type->set_attributes({
            new attribute(strings[2132], new named_type(IFC2X3_IfcAxis2Placement2D_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcPath_type->set_attributes({
            new attribute(strings[2264], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcOrientedEdge_type)), false)
    },{
            false
    });
    IFC2X3_IfcPerformanceHistory_type->set_attributes({
            new attribute(strings[2485], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcPermeableCoveringProperties_type->set_attributes({
            new attribute(strings[2253], new named_type(IFC2X3_IfcPermeableCoveringOperationEnum_type), false),
            new attribute(strings[2252], new named_type(IFC2X3_IfcWindowPanelPositionEnum_type), false),
            new attribute(strings[2486], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2487], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2248], new named_type(IFC2X3_IfcShapeAspect_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPermit_type->set_attributes({
            new attribute(strings[2488], new named_type(IFC2X3_IfcIdentifier_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcPerson_type->set_attributes({
            new attribute(strings[2471], new named_type(IFC2X3_IfcIdentifier_type), true),
            new attribute(strings[2489], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2490], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2491], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLabel_type)), true),
            new attribute(strings[2492], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLabel_type)), true),
            new attribute(strings[2493], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLabel_type)), true),
            new attribute(strings[2472], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcActorRole_type)), true),
            new attribute(strings[2473], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcAddress_type)), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPersonAndOrganization_type->set_attributes({
            new attribute(strings[2494], new named_type(IFC2X3_IfcPerson_type), false),
            new attribute(strings[2495], new named_type(IFC2X3_IfcOrganization_type), false),
            new attribute(strings[2472], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcActorRole_type)), true)
    },{
            false, false, false
    });
    IFC2X3_IfcPhysicalComplexQuantity_type->set_attributes({
            new attribute(strings[2496], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcPhysicalQuantity_type)), false),
            new attribute(strings[2497], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2498], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2499], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcPhysicalQuantity_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false
    });
    IFC2X3_IfcPhysicalSimpleQuantity_type->set_attributes({
            new attribute(strings[2207], new named_type(IFC2X3_IfcNamedUnit_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcPile_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcPileTypeEnum_type), false),
            new attribute(strings[2254], new named_type(IFC2X3_IfcPileConstructionEnum_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPipeFittingType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcPipeFittingTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPipeSegmentType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcPipeSegmentTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPixelTexture_type->set_attributes({
            new attribute(strings[2089], new named_type(IFC2X3_IfcInteger_type), false),
            new attribute(strings[2106], new named_type(IFC2X3_IfcInteger_type), false),
            new attribute(strings[2500], new named_type(IFC2X3_IfcInteger_type), false),
            new attribute(strings[2501], new aggregation_type(aggregation_type::list_type, 1, -1, new simple_type(simple_type::binary_type)), false)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPlacement_type->set_attributes({
            new attribute(strings[2288], new named_type(IFC2X3_IfcCartesianPoint_type), false)
    },{
            false
    });
    IFC2X3_IfcPlanarBox_type->set_attributes({
            new attribute(strings[2502], new named_type(IFC2X3_IfcAxis2Placement_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcPlanarExtent_type->set_attributes({
            new attribute(strings[2503], new named_type(IFC2X3_IfcLengthMeasure_type), false),
            new attribute(strings[2504], new named_type(IFC2X3_IfcLengthMeasure_type), false)
    },{
            false, false
    });
    IFC2X3_IfcPlane_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcPlate_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPlateType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcPlateTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPoint_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcPointOnCurve_type->set_attributes({
            new attribute(strings[2458], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2505], new named_type(IFC2X3_IfcParameterValue_type), false)
    },{
            false, false
    });
    IFC2X3_IfcPointOnSurface_type->set_attributes({
            new attribute(strings[2191], new named_type(IFC2X3_IfcSurface_type), false),
            new attribute(strings[2506], new named_type(IFC2X3_IfcParameterValue_type), false),
            new attribute(strings[2507], new named_type(IFC2X3_IfcParameterValue_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcPolyLoop_type->set_attributes({
            new attribute(strings[2508], new aggregation_type(aggregation_type::list_type, 3, -1, new named_type(IFC2X3_IfcCartesianPoint_type)), false)
    },{
            false
    });
    IFC2X3_IfcPolygonalBoundedHalfSpace_type->set_attributes({
            new attribute(strings[2132], new named_type(IFC2X3_IfcAxis2Placement3D_type), false),
            new attribute(strings[2509], new named_type(IFC2X3_IfcBoundedCurve_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcPolyline_type->set_attributes({
            new attribute(strings[2510], new aggregation_type(aggregation_type::list_type, 2, -1, new named_type(IFC2X3_IfcCartesianPoint_type)), false)
    },{
            false
    });
    IFC2X3_IfcPort_type->set_attributes({
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcPostalAddress_type->set_attributes({
            new attribute(strings[2511], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2512], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLabel_type)), true),
            new attribute(strings[2513], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2514], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2515], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2516], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2517], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPreDefinedColour_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcPreDefinedCurveFont_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcPreDefinedDimensionSymbol_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcPreDefinedItem_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false)
    },{
            false
    });
    IFC2X3_IfcPreDefinedPointMarkerSymbol_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcPreDefinedSymbol_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcPreDefinedTerminatorSymbol_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcPreDefinedTextFont_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcPresentationLayerAssignment_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2518], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcLayeredItem_type)), false),
            new attribute(strings[2025], new named_type(IFC2X3_IfcIdentifier_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcPresentationLayerWithStyle_type->set_attributes({
            new attribute(strings[2519], new simple_type(simple_type::logical_type), false),
            new attribute(strings[2520], new simple_type(simple_type::logical_type), false),
            new attribute(strings[2521], new simple_type(simple_type::logical_type), false),
            new attribute(strings[2522], new aggregation_type(aggregation_type::set_type, 0, -1, new named_type(IFC2X3_IfcPresentationStyleSelect_type)), false)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPresentationStyle_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false
    });
    IFC2X3_IfcPresentationStyleAssignment_type->set_attributes({
            new attribute(strings[2523], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcPresentationStyleSelect_type)), false)
    },{
            false
    });
    IFC2X3_IfcProcedure_type->set_attributes({
            new attribute(strings[2524], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2525], new named_type(IFC2X3_IfcProcedureTypeEnum_type), false),
            new attribute(strings[2526], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcProcess_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcProduct_type->set_attributes({
            new attribute(strings[2527], new named_type(IFC2X3_IfcObjectPlacement_type), true),
            new attribute(strings[2528], new named_type(IFC2X3_IfcProductRepresentation_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcProductDefinitionShape_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcProductRepresentation_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2529], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcRepresentation_type)), false)
    },{
            false, false, false
    });
    IFC2X3_IfcProductsOfCombustionProperties_type->set_attributes({
            new attribute(strings[2530], new named_type(IFC2X3_IfcSpecificHeatCapacityMeasure_type), true),
            new attribute(strings[2531], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2532], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2533], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcProfileDef_type->set_attributes({
            new attribute(strings[2534], new named_type(IFC2X3_IfcProfileTypeEnum_type), false),
            new attribute(strings[2535], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false
    });
    IFC2X3_IfcProfileProperties_type->set_attributes({
            new attribute(strings[2535], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2536], new named_type(IFC2X3_IfcProfileDef_type), true)
    },{
            false, false
    });
    IFC2X3_IfcProject_type->set_attributes({
            new attribute(strings[2537], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2538], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2539], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcRepresentationContext_type)), false),
            new attribute(strings[2540], new named_type(IFC2X3_IfcUnitAssignment_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcProjectOrder_type->set_attributes({
            new attribute(strings[2172], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2000], new named_type(IFC2X3_IfcProjectOrderTypeEnum_type), false),
            new attribute(strings[2169], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcProjectOrderRecord_type->set_attributes({
            new attribute(strings[2541], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcRelAssignsToProjectOrder_type)), false),
            new attribute(strings[2000], new named_type(IFC2X3_IfcProjectOrderRecordTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcProjectionCurve_type->set_attributes({
    },{
            false, false, false
    });
    IFC2X3_IfcProjectionElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcProperty_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false
    });
    IFC2X3_IfcPropertyBoundedValue_type->set_attributes({
            new attribute(strings[2542], new named_type(IFC2X3_IfcValue_type), true),
            new attribute(strings[2543], new named_type(IFC2X3_IfcValue_type), true),
            new attribute(strings[2207], new named_type(IFC2X3_IfcUnit_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcPropertyConstraintRelationship_type->set_attributes({
            new attribute(strings[2151], new named_type(IFC2X3_IfcConstraint_type), false),
            new attribute(strings[2544], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcProperty_type)), false),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcPropertyDefinition_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcPropertyDependencyRelationship_type->set_attributes({
            new attribute(strings[2545], new named_type(IFC2X3_IfcProperty_type), false),
            new attribute(strings[2546], new named_type(IFC2X3_IfcProperty_type), false),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2547], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcPropertyEnumeratedValue_type->set_attributes({
            new attribute(strings[2548], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcValue_type)), false),
            new attribute(strings[2549], new named_type(IFC2X3_IfcPropertyEnumeration_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcPropertyEnumeration_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2548], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcValue_type)), false),
            new attribute(strings[2207], new named_type(IFC2X3_IfcUnit_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcPropertyListValue_type->set_attributes({
            new attribute(strings[2372], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcValue_type)), false),
            new attribute(strings[2207], new named_type(IFC2X3_IfcUnit_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcPropertyReferenceValue_type->set_attributes({
            new attribute(strings[2122], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2550], new named_type(IFC2X3_IfcObjectReferenceSelect_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcPropertySet_type->set_attributes({
            new attribute(strings[2123], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcProperty_type)), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcPropertySetDefinition_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcPropertySingleValue_type->set_attributes({
            new attribute(strings[2551], new named_type(IFC2X3_IfcValue_type), true),
            new attribute(strings[2207], new named_type(IFC2X3_IfcUnit_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcPropertyTableValue_type->set_attributes({
            new attribute(strings[2552], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcValue_type)), false),
            new attribute(strings[2553], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcValue_type)), false),
            new attribute(strings[2547], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2554], new named_type(IFC2X3_IfcUnit_type), true),
            new attribute(strings[2555], new named_type(IFC2X3_IfcUnit_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcProtectiveDeviceType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcProtectiveDeviceTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcProxy_type->set_attributes({
            new attribute(strings[2556], new named_type(IFC2X3_IfcObjectTypeEnum_type), false),
            new attribute(strings[2275], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcPumpType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcPumpTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcQuantityArea_type->set_attributes({
            new attribute(strings[2557], new named_type(IFC2X3_IfcAreaMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcQuantityCount_type->set_attributes({
            new attribute(strings[2558], new named_type(IFC2X3_IfcCountMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcQuantityLength_type->set_attributes({
            new attribute(strings[2559], new named_type(IFC2X3_IfcLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcQuantityTime_type->set_attributes({
            new attribute(strings[2560], new named_type(IFC2X3_IfcTimeMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcQuantityVolume_type->set_attributes({
            new attribute(strings[2561], new named_type(IFC2X3_IfcVolumeMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcQuantityWeight_type->set_attributes({
            new attribute(strings[2562], new named_type(IFC2X3_IfcMassMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcRadiusDimension_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcRailing_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcRailingTypeEnum_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRailingType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcRailingTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRamp_type->set_attributes({
            new attribute(strings[2563], new named_type(IFC2X3_IfcRampTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRampFlight_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRampFlightType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcRampFlightTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRationalBezierCurve_type->set_attributes({
            new attribute(strings[2564], new aggregation_type(aggregation_type::list_type, 2, -1, new simple_type(simple_type::real_type)), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRectangleHollowProfileDef_type->set_attributes({
            new attribute(strings[2090], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2565], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2566], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRectangleProfileDef_type->set_attributes({
            new attribute(strings[2079], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2080], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcRectangularPyramid_type->set_attributes({
            new attribute(strings[2056], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2057], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2106], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcRectangularTrimmedSurface_type->set_attributes({
            new attribute(strings[2191], new named_type(IFC2X3_IfcSurface_type), false),
            new attribute(strings[2567], new named_type(IFC2X3_IfcParameterValue_type), false),
            new attribute(strings[2568], new named_type(IFC2X3_IfcParameterValue_type), false),
            new attribute(strings[2569], new named_type(IFC2X3_IfcParameterValue_type), false),
            new attribute(strings[2570], new named_type(IFC2X3_IfcParameterValue_type), false),
            new attribute(strings[2571], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2572], new simple_type(simple_type::boolean_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcReferencesValueDocument_type->set_attributes({
            new attribute(strings[2573], new named_type(IFC2X3_IfcDocumentSelect_type), false),
            new attribute(strings[2574], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcAppliedValue_type)), false),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcRegularTimeSeries_type->set_attributes({
            new attribute(strings[2575], new named_type(IFC2X3_IfcTimeMeasure_type), false),
            new attribute(strings[2370], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcTimeSeriesValue_type)), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcReinforcementBarProperties_type->set_attributes({
            new attribute(strings[2576], new named_type(IFC2X3_IfcAreaMeasure_type), false),
            new attribute(strings[2577], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2578], new named_type(IFC2X3_IfcReinforcingBarSurfaceEnum_type), true),
            new attribute(strings[2579], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2580], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2581], new named_type(IFC2X3_IfcCountMeasure_type), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcReinforcementDefinitionProperties_type->set_attributes({
            new attribute(strings[2582], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2583], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcSectionReinforcementProperties_type)), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcReinforcingBar_type->set_attributes({
            new attribute(strings[2431], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2339], new named_type(IFC2X3_IfcAreaMeasure_type), false),
            new attribute(strings[2584], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2585], new named_type(IFC2X3_IfcReinforcingBarRoleEnum_type), false),
            new attribute(strings[2578], new named_type(IFC2X3_IfcReinforcingBarSurfaceEnum_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcReinforcingElement_type->set_attributes({
            new attribute(strings[2577], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcReinforcingMesh_type->set_attributes({
            new attribute(strings[2586], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2587], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2588], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2589], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2590], new named_type(IFC2X3_IfcAreaMeasure_type), false),
            new attribute(strings[2591], new named_type(IFC2X3_IfcAreaMeasure_type), false),
            new attribute(strings[2592], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2593], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAggregates_type->set_attributes({
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssigns_type->set_attributes({
            new attribute(strings[2594], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcObjectDefinition_type)), false),
            new attribute(strings[2595], new named_type(IFC2X3_IfcObjectTypeEnum_type), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssignsTasks_type->set_attributes({
            new attribute(strings[2596], new named_type(IFC2X3_IfcScheduleTimeControl_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssignsToActor_type->set_attributes({
            new attribute(strings[2597], new named_type(IFC2X3_IfcActor_type), false),
            new attribute(strings[2598], new named_type(IFC2X3_IfcActorRole_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssignsToControl_type->set_attributes({
            new attribute(strings[2599], new named_type(IFC2X3_IfcControl_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssignsToGroup_type->set_attributes({
            new attribute(strings[2600], new named_type(IFC2X3_IfcGroup_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssignsToProcess_type->set_attributes({
            new attribute(strings[2601], new named_type(IFC2X3_IfcProcess_type), false),
            new attribute(strings[2602], new named_type(IFC2X3_IfcMeasureWithUnit_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssignsToProduct_type->set_attributes({
            new attribute(strings[2603], new named_type(IFC2X3_IfcProduct_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssignsToProjectOrder_type->set_attributes({
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssignsToResource_type->set_attributes({
            new attribute(strings[2604], new named_type(IFC2X3_IfcResource_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssociates_type->set_attributes({
            new attribute(strings[2594], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcRoot_type)), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcRelAssociatesAppliedValue_type->set_attributes({
            new attribute(strings[2605], new named_type(IFC2X3_IfcAppliedValue_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssociatesApproval_type->set_attributes({
            new attribute(strings[2030], new named_type(IFC2X3_IfcApproval_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssociatesClassification_type->set_attributes({
            new attribute(strings[2606], new named_type(IFC2X3_IfcClassificationNotationSelect_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssociatesConstraint_type->set_attributes({
            new attribute(strings[2607], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2151], new named_type(IFC2X3_IfcConstraint_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssociatesDocument_type->set_attributes({
            new attribute(strings[2234], new named_type(IFC2X3_IfcDocumentSelect_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssociatesLibrary_type->set_attributes({
            new attribute(strings[2608], new named_type(IFC2X3_IfcLibrarySelect_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssociatesMaterial_type->set_attributes({
            new attribute(strings[2609], new named_type(IFC2X3_IfcMaterialSelect_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelAssociatesProfileProperties_type->set_attributes({
            new attribute(strings[2610], new named_type(IFC2X3_IfcProfileProperties_type), false),
            new attribute(strings[2611], new named_type(IFC2X3_IfcShapeAspect_type), true),
            new attribute(strings[2612], new named_type(IFC2X3_IfcOrientationSelect_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnects_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcRelConnectsElements_type->set_attributes({
            new attribute(strings[2613], new named_type(IFC2X3_IfcConnectionGeometry_type), true),
            new attribute(strings[2614], new named_type(IFC2X3_IfcElement_type), false),
            new attribute(strings[2615], new named_type(IFC2X3_IfcElement_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnectsPathElements_type->set_attributes({
            new attribute(strings[2616], new aggregation_type(aggregation_type::list_type, 0, -1, new simple_type(simple_type::integer_type)), false),
            new attribute(strings[2617], new aggregation_type(aggregation_type::list_type, 0, -1, new simple_type(simple_type::integer_type)), false),
            new attribute(strings[2618], new named_type(IFC2X3_IfcConnectionTypeEnum_type), false),
            new attribute(strings[2619], new named_type(IFC2X3_IfcConnectionTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnectsPortToElement_type->set_attributes({
            new attribute(strings[2620], new named_type(IFC2X3_IfcPort_type), false),
            new attribute(strings[2615], new named_type(IFC2X3_IfcElement_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnectsPorts_type->set_attributes({
            new attribute(strings[2620], new named_type(IFC2X3_IfcPort_type), false),
            new attribute(strings[2621], new named_type(IFC2X3_IfcPort_type), false),
            new attribute(strings[2622], new named_type(IFC2X3_IfcElement_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnectsStructuralActivity_type->set_attributes({
            new attribute(strings[2614], new named_type(IFC2X3_IfcStructuralActivityAssignmentSelect_type), false),
            new attribute(strings[2623], new named_type(IFC2X3_IfcStructuralActivity_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnectsStructuralElement_type->set_attributes({
            new attribute(strings[2614], new named_type(IFC2X3_IfcElement_type), false),
            new attribute(strings[2624], new named_type(IFC2X3_IfcStructuralMember_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnectsStructuralMember_type->set_attributes({
            new attribute(strings[2625], new named_type(IFC2X3_IfcStructuralMember_type), false),
            new attribute(strings[2626], new named_type(IFC2X3_IfcStructuralConnection_type), false),
            new attribute(strings[2627], new named_type(IFC2X3_IfcBoundaryCondition_type), true),
            new attribute(strings[2628], new named_type(IFC2X3_IfcStructuralConnectionCondition_type), true),
            new attribute(strings[2629], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2630], new named_type(IFC2X3_IfcAxis2Placement3D_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnectsWithEccentricity_type->set_attributes({
            new attribute(strings[2631], new named_type(IFC2X3_IfcConnectionGeometry_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelConnectsWithRealizingElements_type->set_attributes({
            new attribute(strings[2632], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcElement_type)), false),
            new attribute(strings[2633], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelContainedInSpatialStructure_type->set_attributes({
            new attribute(strings[2634], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcProduct_type)), false),
            new attribute(strings[2635], new named_type(IFC2X3_IfcSpatialStructureElement_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelCoversBldgElements_type->set_attributes({
            new attribute(strings[2636], new named_type(IFC2X3_IfcElement_type), false),
            new attribute(strings[2637], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcCovering_type)), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelCoversSpaces_type->set_attributes({
            new attribute(strings[2638], new named_type(IFC2X3_IfcSpace_type), false),
            new attribute(strings[2637], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcCovering_type)), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelDecomposes_type->set_attributes({
            new attribute(strings[2639], new named_type(IFC2X3_IfcObjectDefinition_type), false),
            new attribute(strings[2594], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcObjectDefinition_type)), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelDefines_type->set_attributes({
            new attribute(strings[2594], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcObject_type)), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcRelDefinesByProperties_type->set_attributes({
            new attribute(strings[2640], new named_type(IFC2X3_IfcPropertySetDefinition_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelDefinesByType_type->set_attributes({
            new attribute(strings[2641], new named_type(IFC2X3_IfcTypeObject_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelFillsElement_type->set_attributes({
            new attribute(strings[2642], new named_type(IFC2X3_IfcOpeningElement_type), false),
            new attribute(strings[2643], new named_type(IFC2X3_IfcElement_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelFlowControlElements_type->set_attributes({
            new attribute(strings[2644], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcDistributionControlElement_type)), false),
            new attribute(strings[2645], new named_type(IFC2X3_IfcDistributionFlowElement_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelInteractionRequirements_type->set_attributes({
            new attribute(strings[2646], new named_type(IFC2X3_IfcCountMeasure_type), true),
            new attribute(strings[2647], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2648], new named_type(IFC2X3_IfcSpatialStructureElement_type), true),
            new attribute(strings[2649], new named_type(IFC2X3_IfcSpaceProgram_type), false),
            new attribute(strings[2650], new named_type(IFC2X3_IfcSpaceProgram_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelNests_type->set_attributes({
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelOccupiesSpaces_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelOverridesProperties_type->set_attributes({
            new attribute(strings[2651], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcProperty_type)), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelProjectsElement_type->set_attributes({
            new attribute(strings[2614], new named_type(IFC2X3_IfcElement_type), false),
            new attribute(strings[2652], new named_type(IFC2X3_IfcFeatureElementAddition_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelReferencedInSpatialStructure_type->set_attributes({
            new attribute(strings[2634], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcProduct_type)), false),
            new attribute(strings[2635], new named_type(IFC2X3_IfcSpatialStructureElement_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelSchedulesCostItems_type->set_attributes({
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelSequence_type->set_attributes({
            new attribute(strings[2601], new named_type(IFC2X3_IfcProcess_type), false),
            new attribute(strings[2653], new named_type(IFC2X3_IfcProcess_type), false),
            new attribute(strings[2654], new named_type(IFC2X3_IfcTimeMeasure_type), false),
            new attribute(strings[2655], new named_type(IFC2X3_IfcSequenceEnum_type), false)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelServicesBuildings_type->set_attributes({
            new attribute(strings[2656], new named_type(IFC2X3_IfcSystem_type), false),
            new attribute(strings[2657], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcSpatialStructureElement_type)), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelSpaceBoundary_type->set_attributes({
            new attribute(strings[2658], new named_type(IFC2X3_IfcSpace_type), false),
            new attribute(strings[2643], new named_type(IFC2X3_IfcElement_type), true),
            new attribute(strings[2613], new named_type(IFC2X3_IfcConnectionGeometry_type), true),
            new attribute(strings[2659], new named_type(IFC2X3_IfcPhysicalOrVirtualEnum_type), false),
            new attribute(strings[2660], new named_type(IFC2X3_IfcInternalOrExternalEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRelVoidsElement_type->set_attributes({
            new attribute(strings[2636], new named_type(IFC2X3_IfcElement_type), false),
            new attribute(strings[2661], new named_type(IFC2X3_IfcFeatureElementSubtraction_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcRelationship_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcRelaxation_type->set_attributes({
            new attribute(strings[2662], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), false),
            new attribute(strings[2663], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), false)
    },{
            false, false
    });
    IFC2X3_IfcRepresentation_type->set_attributes({
            new attribute(strings[2664], new named_type(IFC2X3_IfcRepresentationContext_type), false),
            new attribute(strings[2665], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2666], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2667], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcRepresentationItem_type)), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcRepresentationContext_type->set_attributes({
            new attribute(strings[2668], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2669], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false
    });
    IFC2X3_IfcRepresentationItem_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcRepresentationMap_type->set_attributes({
            new attribute(strings[2670], new named_type(IFC2X3_IfcAxis2Placement_type), false),
            new attribute(strings[2671], new named_type(IFC2X3_IfcRepresentation_type), false)
    },{
            false, false
    });
    IFC2X3_IfcResource_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcRevolvedAreaSolid_type->set_attributes({
            new attribute(strings[2047], new named_type(IFC2X3_IfcAxis1Placement_type), false),
            new attribute(strings[2672], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcRibPlateProfileProperties_type->set_attributes({
            new attribute(strings[2105], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2673], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2674], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2675], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2676], new named_type(IFC2X3_IfcRibPlateDirectionEnum_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcRightCircularCone_type->set_attributes({
            new attribute(strings[2106], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2677], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcRightCircularCylinder_type->set_attributes({
            new attribute(strings[2106], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcRoof_type->set_attributes({
            new attribute(strings[2563], new named_type(IFC2X3_IfcRoofTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRoot_type->set_attributes({
            new attribute(strings[2678], new named_type(IFC2X3_IfcGloballyUniqueId_type), false),
            new attribute(strings[2679], new named_type(IFC2X3_IfcOwnerHistory_type), false),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcRoundedEdgeFeature_type->set_attributes({
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcRoundedRectangleProfileDef_type->set_attributes({
            new attribute(strings[2680], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcSIUnit_type->set_attributes({
            new attribute(strings[2681], new named_type(IFC2X3_IfcSIPrefix_type), true),
            new attribute(strings[2013], new named_type(IFC2X3_IfcSIUnitName_type), false)
    },{
            true, false, false, false
    });
    IFC2X3_IfcSanitaryTerminalType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcSanitaryTerminalTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcScheduleTimeControl_type->set_attributes({
            new attribute(strings[2682], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2683], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2684], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2685], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2686], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2687], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2688], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2689], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2690], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2691], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2692], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2693], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2694], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2695], new simple_type(simple_type::boolean_type), true),
            new attribute(strings[2696], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2697], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2698], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2699], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSectionProperties_type->set_attributes({
            new attribute(strings[2700], new named_type(IFC2X3_IfcSectionTypeEnum_type), false),
            new attribute(strings[2701], new named_type(IFC2X3_IfcProfileDef_type), false),
            new attribute(strings[2702], new named_type(IFC2X3_IfcProfileDef_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcSectionReinforcementProperties_type->set_attributes({
            new attribute(strings[2703], new named_type(IFC2X3_IfcLengthMeasure_type), false),
            new attribute(strings[2704], new named_type(IFC2X3_IfcLengthMeasure_type), false),
            new attribute(strings[2705], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2706], new named_type(IFC2X3_IfcReinforcingBarRoleEnum_type), false),
            new attribute(strings[2707], new named_type(IFC2X3_IfcSectionProperties_type), false),
            new attribute(strings[2708], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcReinforcementBarProperties_type)), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcSectionedSpine_type->set_attributes({
            new attribute(strings[2709], new named_type(IFC2X3_IfcCompositeCurve_type), false),
            new attribute(strings[2710], new aggregation_type(aggregation_type::list_type, 2, -1, new named_type(IFC2X3_IfcProfileDef_type)), false),
            new attribute(strings[2711], new aggregation_type(aggregation_type::list_type, 2, -1, new named_type(IFC2X3_IfcAxis2Placement3D_type)), false)
    },{
            false, false, false
    });
    IFC2X3_IfcSensorType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcSensorTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcServiceLife_type->set_attributes({
            new attribute(strings[2712], new named_type(IFC2X3_IfcServiceLifeTypeEnum_type), false),
            new attribute(strings[2713], new named_type(IFC2X3_IfcTimeMeasure_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcServiceLifeFactor_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcServiceLifeFactorTypeEnum_type), false),
            new attribute(strings[2714], new named_type(IFC2X3_IfcMeasureValue_type), true),
            new attribute(strings[2715], new named_type(IFC2X3_IfcMeasureValue_type), false),
            new attribute(strings[2716], new named_type(IFC2X3_IfcMeasureValue_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcShapeAspect_type->set_attributes({
            new attribute(strings[2717], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcShapeModel_type)), false),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2718], new simple_type(simple_type::logical_type), false),
            new attribute(strings[2719], new named_type(IFC2X3_IfcProductDefinitionShape_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcShapeModel_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcShapeRepresentation_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcShellBasedSurfaceModel_type->set_attributes({
            new attribute(strings[2720], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcShell_type)), false)
    },{
            false
    });
    IFC2X3_IfcSimpleProperty_type->set_attributes({
    },{
            false, false
    });
    IFC2X3_IfcSite_type->set_attributes({
            new attribute(strings[2721], new named_type(IFC2X3_IfcCompoundPlaneAngleMeasure_type), true),
            new attribute(strings[2722], new named_type(IFC2X3_IfcCompoundPlaneAngleMeasure_type), true),
            new attribute(strings[2723], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2724], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2725], new named_type(IFC2X3_IfcPostalAddress_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSlab_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcSlabTypeEnum_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSlabType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcSlabTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSlippageConnectionCondition_type->set_attributes({
            new attribute(strings[2726], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2727], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2728], new named_type(IFC2X3_IfcLengthMeasure_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcSolidModel_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcSoundProperties_type->set_attributes({
            new attribute(strings[2729], new named_type(IFC2X3_IfcBoolean_type), false),
            new attribute(strings[2730], new named_type(IFC2X3_IfcSoundScaleEnum_type), true),
            new attribute(strings[2731], new aggregation_type(aggregation_type::list_type, 1, 8, new named_type(IFC2X3_IfcSoundValue_type)), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcSoundValue_type->set_attributes({
            new attribute(strings[2732], new named_type(IFC2X3_IfcTimeSeries_type), true),
            new attribute(strings[2733], new named_type(IFC2X3_IfcFrequencyMeasure_type), false),
            new attribute(strings[2734], new named_type(IFC2X3_IfcDerivedMeasureValue_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcSpace_type->set_attributes({
            new attribute(strings[2735], new named_type(IFC2X3_IfcInternalOrExternalEnum_type), false),
            new attribute(strings[2736], new named_type(IFC2X3_IfcLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSpaceHeaterType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcSpaceHeaterTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSpaceProgram_type->set_attributes({
            new attribute(strings[2737], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2738], new named_type(IFC2X3_IfcAreaMeasure_type), true),
            new attribute(strings[2739], new named_type(IFC2X3_IfcAreaMeasure_type), true),
            new attribute(strings[2740], new named_type(IFC2X3_IfcSpatialStructureElement_type), true),
            new attribute(strings[2741], new named_type(IFC2X3_IfcAreaMeasure_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSpaceThermalLoadProperties_type->set_attributes({
            new attribute(strings[2742], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2743], new named_type(IFC2X3_IfcThermalLoadSourceEnum_type), false),
            new attribute(strings[2313], new named_type(IFC2X3_IfcPropertySourceEnum_type), false),
            new attribute(strings[2744], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2745], new named_type(IFC2X3_IfcPowerMeasure_type), false),
            new attribute(strings[2746], new named_type(IFC2X3_IfcPowerMeasure_type), true),
            new attribute(strings[2747], new named_type(IFC2X3_IfcTimeSeries_type), true),
            new attribute(strings[2748], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2319], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2749], new named_type(IFC2X3_IfcThermalLoadTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSpaceType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcSpaceTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSpatialStructureElement_type->set_attributes({
            new attribute(strings[2537], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2086], new named_type(IFC2X3_IfcElementCompositionEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSpatialStructureElementType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSphere_type->set_attributes({
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false)
    },{
            false, false
    });
    IFC2X3_IfcStackTerminalType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcStackTerminalTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStair_type->set_attributes({
            new attribute(strings[2563], new named_type(IFC2X3_IfcStairTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStairFlight_type->set_attributes({
            new attribute(strings[2750], new simple_type(simple_type::integer_type), true),
            new attribute(strings[2751], new simple_type(simple_type::integer_type), true),
            new attribute(strings[2752], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2753], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStairFlightType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcStairFlightTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralAction_type->set_attributes({
            new attribute(strings[2754], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2755], new named_type(IFC2X3_IfcStructuralReaction_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralActivity_type->set_attributes({
            new attribute(strings[2756], new named_type(IFC2X3_IfcStructuralLoad_type), false),
            new attribute(strings[2006], new named_type(IFC2X3_IfcGlobalOrLocalEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralAnalysisModel_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcAnalysisModelTypeEnum_type), false),
            new attribute(strings[2757], new named_type(IFC2X3_IfcAxis2Placement3D_type), true),
            new attribute(strings[2758], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcStructuralLoadGroup_type)), true),
            new attribute(strings[2759], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcStructuralResultGroup_type)), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralConnection_type->set_attributes({
            new attribute(strings[2627], new named_type(IFC2X3_IfcBoundaryCondition_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralConnectionCondition_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false
    });
    IFC2X3_IfcStructuralCurveConnection_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralCurveMember_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcStructuralCurveTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralCurveMemberVarying_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralItem_type->set_attributes({
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLinearAction_type->set_attributes({
            new attribute(strings[2760], new named_type(IFC2X3_IfcProjectedOrTrueLengthEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLinearActionVarying_type->set_attributes({
            new attribute(strings[2761], new named_type(IFC2X3_IfcShapeAspect_type), false),
            new attribute(strings[2762], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcStructuralLoad_type)), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLoad_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false
    });
    IFC2X3_IfcStructuralLoadGroup_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcLoadGroupTypeEnum_type), false),
            new attribute(strings[2763], new named_type(IFC2X3_IfcActionTypeEnum_type), false),
            new attribute(strings[2764], new named_type(IFC2X3_IfcActionSourceTypeEnum_type), false),
            new attribute(strings[2765], new named_type(IFC2X3_IfcRatioMeasure_type), true),
            new attribute(strings[2001], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLoadLinearForce_type->set_attributes({
            new attribute(strings[2766], new named_type(IFC2X3_IfcLinearForceMeasure_type), true),
            new attribute(strings[2767], new named_type(IFC2X3_IfcLinearForceMeasure_type), true),
            new attribute(strings[2768], new named_type(IFC2X3_IfcLinearForceMeasure_type), true),
            new attribute(strings[2769], new named_type(IFC2X3_IfcLinearMomentMeasure_type), true),
            new attribute(strings[2770], new named_type(IFC2X3_IfcLinearMomentMeasure_type), true),
            new attribute(strings[2771], new named_type(IFC2X3_IfcLinearMomentMeasure_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLoadPlanarForce_type->set_attributes({
            new attribute(strings[2772], new named_type(IFC2X3_IfcPlanarForceMeasure_type), true),
            new attribute(strings[2773], new named_type(IFC2X3_IfcPlanarForceMeasure_type), true),
            new attribute(strings[2774], new named_type(IFC2X3_IfcPlanarForceMeasure_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcStructuralLoadSingleDisplacement_type->set_attributes({
            new attribute(strings[2775], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2776], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2777], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2778], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true),
            new attribute(strings[2779], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true),
            new attribute(strings[2780], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLoadSingleDisplacementDistortion_type->set_attributes({
            new attribute(strings[2781], new named_type(IFC2X3_IfcCurvatureMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLoadSingleForce_type->set_attributes({
            new attribute(strings[2782], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2783], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2784], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2785], new named_type(IFC2X3_IfcTorqueMeasure_type), true),
            new attribute(strings[2786], new named_type(IFC2X3_IfcTorqueMeasure_type), true),
            new attribute(strings[2787], new named_type(IFC2X3_IfcTorqueMeasure_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLoadSingleForceWarping_type->set_attributes({
            new attribute(strings[2788], new named_type(IFC2X3_IfcWarpingMomentMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralLoadStatic_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcStructuralLoadTemperature_type->set_attributes({
            new attribute(strings[2789], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), true),
            new attribute(strings[2790], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), true),
            new attribute(strings[2791], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcStructuralMember_type->set_attributes({
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralPlanarAction_type->set_attributes({
            new attribute(strings[2760], new named_type(IFC2X3_IfcProjectedOrTrueLengthEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralPlanarActionVarying_type->set_attributes({
            new attribute(strings[2761], new named_type(IFC2X3_IfcShapeAspect_type), false),
            new attribute(strings[2762], new aggregation_type(aggregation_type::list_type, 2, -1, new named_type(IFC2X3_IfcStructuralLoad_type)), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralPointAction_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralPointConnection_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralPointReaction_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralProfileProperties_type->set_attributes({
            new attribute(strings[2792], new named_type(IFC2X3_IfcMomentOfInertiaMeasure_type), true),
            new attribute(strings[2793], new named_type(IFC2X3_IfcMomentOfInertiaMeasure_type), true),
            new attribute(strings[2794], new named_type(IFC2X3_IfcMomentOfInertiaMeasure_type), true),
            new attribute(strings[2795], new named_type(IFC2X3_IfcMomentOfInertiaMeasure_type), true),
            new attribute(strings[2796], new named_type(IFC2X3_IfcWarpingConstantMeasure_type), true),
            new attribute(strings[2797], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2798], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2799], new named_type(IFC2X3_IfcAreaMeasure_type), true),
            new attribute(strings[2800], new named_type(IFC2X3_IfcAreaMeasure_type), true),
            new attribute(strings[2801], new named_type(IFC2X3_IfcSectionModulusMeasure_type), true),
            new attribute(strings[2802], new named_type(IFC2X3_IfcSectionModulusMeasure_type), true),
            new attribute(strings[2803], new named_type(IFC2X3_IfcSectionModulusMeasure_type), true),
            new attribute(strings[2804], new named_type(IFC2X3_IfcSectionModulusMeasure_type), true),
            new attribute(strings[2805], new named_type(IFC2X3_IfcSectionModulusMeasure_type), true),
            new attribute(strings[2093], new named_type(IFC2X3_IfcLengthMeasure_type), true),
            new attribute(strings[2046], new named_type(IFC2X3_IfcLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralReaction_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralResultGroup_type->set_attributes({
            new attribute(strings[2806], new named_type(IFC2X3_IfcAnalysisTheoryTypeEnum_type), false),
            new attribute(strings[2807], new named_type(IFC2X3_IfcStructuralLoadGroup_type), true),
            new attribute(strings[2808], new simple_type(simple_type::boolean_type), false)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralSteelProfileProperties_type->set_attributes({
            new attribute(strings[2809], new named_type(IFC2X3_IfcAreaMeasure_type), true),
            new attribute(strings[2810], new named_type(IFC2X3_IfcAreaMeasure_type), true),
            new attribute(strings[2811], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true),
            new attribute(strings[2812], new named_type(IFC2X3_IfcPositiveRatioMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralSurfaceConnection_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralSurfaceMember_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcStructuralSurfaceTypeEnum_type), false),
            new attribute(strings[2105], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuralSurfaceMemberVarying_type->set_attributes({
            new attribute(strings[2813], new aggregation_type(aggregation_type::list_type, 2, -1, new named_type(IFC2X3_IfcPositiveLengthMeasure_type)), false),
            new attribute(strings[2814], new named_type(IFC2X3_IfcShapeAspect_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcStructuredDimensionCallout_type->set_attributes({
    },{
            false
    });
    IFC2X3_IfcStyleModel_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcStyledItem_type->set_attributes({
            new attribute(strings[2007], new named_type(IFC2X3_IfcRepresentationItem_type), true),
            new attribute(strings[2523], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcPresentationStyleAssignment_type)), false),
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false
    });
    IFC2X3_IfcStyledRepresentation_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcSubContractResource_type->set_attributes({
            new attribute(strings[2815], new named_type(IFC2X3_IfcActorSelect_type), true),
            new attribute(strings[2816], new named_type(IFC2X3_IfcText_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSubedge_type->set_attributes({
            new attribute(strings[2817], new named_type(IFC2X3_IfcEdge_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcSurface_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcSurfaceCurveSweptAreaSolid_type->set_attributes({
            new attribute(strings[2818], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2819], new named_type(IFC2X3_IfcParameterValue_type), false),
            new attribute(strings[2820], new named_type(IFC2X3_IfcParameterValue_type), false),
            new attribute(strings[2821], new named_type(IFC2X3_IfcSurface_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcSurfaceOfLinearExtrusion_type->set_attributes({
            new attribute(strings[2290], new named_type(IFC2X3_IfcDirection_type), false),
            new attribute(strings[2088], new named_type(IFC2X3_IfcLengthMeasure_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcSurfaceOfRevolution_type->set_attributes({
            new attribute(strings[2822], new named_type(IFC2X3_IfcAxis1Placement_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcSurfaceStyle_type->set_attributes({
            new attribute(strings[2823], new named_type(IFC2X3_IfcSurfaceSide_type), false),
            new attribute(strings[2523], new aggregation_type(aggregation_type::set_type, 1, 5, new named_type(IFC2X3_IfcSurfaceStyleElementSelect_type)), false)
    },{
            false, false, false
    });
    IFC2X3_IfcSurfaceStyleLighting_type->set_attributes({
            new attribute(strings[2824], new named_type(IFC2X3_IfcColourRgb_type), false),
            new attribute(strings[2825], new named_type(IFC2X3_IfcColourRgb_type), false),
            new attribute(strings[2826], new named_type(IFC2X3_IfcColourRgb_type), false),
            new attribute(strings[2827], new named_type(IFC2X3_IfcColourRgb_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcSurfaceStyleRefraction_type->set_attributes({
            new attribute(strings[2828], new named_type(IFC2X3_IfcReal_type), true),
            new attribute(strings[2829], new named_type(IFC2X3_IfcReal_type), true)
    },{
            false, false
    });
    IFC2X3_IfcSurfaceStyleRendering_type->set_attributes({
            new attribute(strings[2830], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2831], new named_type(IFC2X3_IfcColourOrFactor_type), true),
            new attribute(strings[2826], new named_type(IFC2X3_IfcColourOrFactor_type), true),
            new attribute(strings[2824], new named_type(IFC2X3_IfcColourOrFactor_type), true),
            new attribute(strings[2832], new named_type(IFC2X3_IfcColourOrFactor_type), true),
            new attribute(strings[2833], new named_type(IFC2X3_IfcColourOrFactor_type), true),
            new attribute(strings[2834], new named_type(IFC2X3_IfcSpecularHighlightSelect_type), true),
            new attribute(strings[2835], new named_type(IFC2X3_IfcReflectanceMethodEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSurfaceStyleShading_type->set_attributes({
            new attribute(strings[2836], new named_type(IFC2X3_IfcColourRgb_type), false)
    },{
            false
    });
    IFC2X3_IfcSurfaceStyleWithTextures_type->set_attributes({
            new attribute(strings[2837], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcSurfaceTexture_type)), false)
    },{
            false
    });
    IFC2X3_IfcSurfaceTexture_type->set_attributes({
            new attribute(strings[2838], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2839], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2840], new named_type(IFC2X3_IfcSurfaceTextureEnum_type), false),
            new attribute(strings[2841], new named_type(IFC2X3_IfcCartesianTransformationOperator2D_type), true)
    },{
            false, false, false, false
    });
    IFC2X3_IfcSweptAreaSolid_type->set_attributes({
            new attribute(strings[2842], new named_type(IFC2X3_IfcProfileDef_type), false),
            new attribute(strings[2132], new named_type(IFC2X3_IfcAxis2Placement3D_type), false)
    },{
            false, false
    });
    IFC2X3_IfcSweptDiskSolid_type->set_attributes({
            new attribute(strings[2818], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2107], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2843], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2819], new named_type(IFC2X3_IfcParameterValue_type), false),
            new attribute(strings[2820], new named_type(IFC2X3_IfcParameterValue_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcSweptSurface_type->set_attributes({
            new attribute(strings[2844], new named_type(IFC2X3_IfcProfileDef_type), false),
            new attribute(strings[2132], new named_type(IFC2X3_IfcAxis2Placement3D_type), false)
    },{
            false, false
    });
    IFC2X3_IfcSwitchingDeviceType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcSwitchingDeviceTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcSymbolStyle_type->set_attributes({
            new attribute(strings[2845], new named_type(IFC2X3_IfcSymbolStyleSelect_type), false)
    },{
            false, false
    });
    IFC2X3_IfcSystem_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcSystemFurnitureElementType_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTShapeProfileDef_type->set_attributes({
            new attribute(strings[2088], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2846], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2180], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2363], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2364], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2847], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2848], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2849], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true),
            new attribute(strings[2850], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true),
            new attribute(strings[2046], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTable_type->set_attributes({
            new attribute(strings[2013], new simple_type(simple_type::string_type), false),
            new attribute(strings[2851], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcTableRow_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcTableRow_type->set_attributes({
            new attribute(strings[2852], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcValue_type)), false),
            new attribute(strings[2853], new simple_type(simple_type::boolean_type), false)
    },{
            false, false
    });
    IFC2X3_IfcTankType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcTankTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTask_type->set_attributes({
            new attribute(strings[2854], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2169], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2855], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2856], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2857], new simple_type(simple_type::integer_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTelecomAddress_type->set_attributes({
            new attribute(strings[2858], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLabel_type)), true),
            new attribute(strings[2859], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLabel_type)), true),
            new attribute(strings[2860], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2861], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcLabel_type)), true),
            new attribute(strings[2862], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTendon_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcTendonTypeEnum_type), false),
            new attribute(strings[2431], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2339], new named_type(IFC2X3_IfcAreaMeasure_type), false),
            new attribute(strings[2863], new named_type(IFC2X3_IfcForceMeasure_type), true),
            new attribute(strings[2864], new named_type(IFC2X3_IfcPressureMeasure_type), true),
            new attribute(strings[2865], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2866], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2867], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTendonAnchor_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTerminatorSymbol_type->set_attributes({
            new attribute(strings[2868], new named_type(IFC2X3_IfcAnnotationCurveOccurrence_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcTextLiteral_type->set_attributes({
            new attribute(strings[2869], new named_type(IFC2X3_IfcPresentableText_type), false),
            new attribute(strings[2502], new named_type(IFC2X3_IfcAxis2Placement_type), false),
            new attribute(strings[2870], new named_type(IFC2X3_IfcTextPath_type), false)
    },{
            false, false, false
    });
    IFC2X3_IfcTextLiteralWithExtent_type->set_attributes({
            new attribute(strings[2871], new named_type(IFC2X3_IfcPlanarExtent_type), false),
            new attribute(strings[2872], new named_type(IFC2X3_IfcBoxAlignment_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcTextStyle_type->set_attributes({
            new attribute(strings[2873], new named_type(IFC2X3_IfcCharacterStyleSelect_type), true),
            new attribute(strings[2874], new named_type(IFC2X3_IfcTextStyleSelect_type), true),
            new attribute(strings[2875], new named_type(IFC2X3_IfcTextFontSelect_type), false)
    },{
            false, false, false, false
    });
    IFC2X3_IfcTextStyleFontModel_type->set_attributes({
            new attribute(strings[2876], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcTextFontName_type)), true),
            new attribute(strings[2877], new named_type(IFC2X3_IfcFontStyle_type), true),
            new attribute(strings[2878], new named_type(IFC2X3_IfcFontVariant_type), true),
            new attribute(strings[2879], new named_type(IFC2X3_IfcFontWeight_type), true),
            new attribute(strings[2880], new named_type(IFC2X3_IfcSizeSelect_type), false)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcTextStyleForDefinedFont_type->set_attributes({
            new attribute(strings[2881], new named_type(IFC2X3_IfcColour_type), false),
            new attribute(strings[2882], new named_type(IFC2X3_IfcColour_type), true)
    },{
            false, false
    });
    IFC2X3_IfcTextStyleTextModel_type->set_attributes({
            new attribute(strings[2883], new named_type(IFC2X3_IfcSizeSelect_type), true),
            new attribute(strings[2884], new named_type(IFC2X3_IfcTextAlignment_type), true),
            new attribute(strings[2885], new named_type(IFC2X3_IfcTextDecoration_type), true),
            new attribute(strings[2886], new named_type(IFC2X3_IfcSizeSelect_type), true),
            new attribute(strings[2887], new named_type(IFC2X3_IfcSizeSelect_type), true),
            new attribute(strings[2888], new named_type(IFC2X3_IfcTextTransformation_type), true),
            new attribute(strings[2889], new named_type(IFC2X3_IfcSizeSelect_type), true)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcTextStyleWithBoxCharacteristics_type->set_attributes({
            new attribute(strings[2890], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2891], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2892], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true),
            new attribute(strings[2893], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true),
            new attribute(strings[2894], new named_type(IFC2X3_IfcSizeSelect_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcTextureCoordinate_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcTextureCoordinateGenerator_type->set_attributes({
            new attribute(strings[2895], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[2896], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcSimpleValue_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcTextureMap_type->set_attributes({
            new attribute(strings[2897], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcVertexBasedTextureMap_type)), false)
    },{
            false
    });
    IFC2X3_IfcTextureVertex_type->set_attributes({
            new attribute(strings[2097], new aggregation_type(aggregation_type::list_type, 2, 2, new named_type(IFC2X3_IfcParameterValue_type)), false)
    },{
            false
    });
    IFC2X3_IfcThermalMaterialProperties_type->set_attributes({
            new attribute(strings[2530], new named_type(IFC2X3_IfcSpecificHeatCapacityMeasure_type), true),
            new attribute(strings[2898], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), true),
            new attribute(strings[2899], new named_type(IFC2X3_IfcThermodynamicTemperatureMeasure_type), true),
            new attribute(strings[2900], new named_type(IFC2X3_IfcThermalConductivityMeasure_type), true)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcTimeSeries_type->set_attributes({
            new attribute(strings[2013], new named_type(IFC2X3_IfcLabel_type), false),
            new attribute(strings[1999], new named_type(IFC2X3_IfcText_type), true),
            new attribute(strings[2901], new named_type(IFC2X3_IfcDateTimeSelect_type), false),
            new attribute(strings[2902], new named_type(IFC2X3_IfcDateTimeSelect_type), false),
            new attribute(strings[2903], new named_type(IFC2X3_IfcTimeSeriesDataTypeEnum_type), false),
            new attribute(strings[2904], new named_type(IFC2X3_IfcDataOriginEnum_type), false),
            new attribute(strings[2905], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2207], new named_type(IFC2X3_IfcUnit_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTimeSeriesReferenceRelationship_type->set_attributes({
            new attribute(strings[2906], new named_type(IFC2X3_IfcTimeSeries_type), false),
            new attribute(strings[2907], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcDocumentSelect_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcTimeSeriesSchedule_type->set_attributes({
            new attribute(strings[2908], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcDateTimeSelect_type)), true),
            new attribute(strings[2909], new named_type(IFC2X3_IfcTimeSeriesScheduleTypeEnum_type), false),
            new attribute(strings[2910], new named_type(IFC2X3_IfcTimeSeries_type), false)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTimeSeriesValue_type->set_attributes({
            new attribute(strings[2372], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcValue_type)), false)
    },{
            false
    });
    IFC2X3_IfcTopologicalRepresentationItem_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcTopologyRepresentation_type->set_attributes({
    },{
            false, false, false, false
    });
    IFC2X3_IfcTransformerType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcTransformerTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTransportElement_type->set_attributes({
            new attribute(strings[2253], new named_type(IFC2X3_IfcTransportElementTypeEnum_type), true),
            new attribute(strings[2911], new named_type(IFC2X3_IfcMassMeasure_type), true),
            new attribute(strings[2912], new named_type(IFC2X3_IfcCountMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTransportElementType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcTransportElementTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTrapeziumProfileDef_type->set_attributes({
            new attribute(strings[2913], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2914], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2080], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2915], new named_type(IFC2X3_IfcLengthMeasure_type), false)
    },{
            false, false, false, false, false, false, false
    });
    IFC2X3_IfcTrimmedCurve_type->set_attributes({
            new attribute(strings[2458], new named_type(IFC2X3_IfcCurve_type), false),
            new attribute(strings[2916], new aggregation_type(aggregation_type::set_type, 1, 2, new named_type(IFC2X3_IfcTrimmingSelect_type)), false),
            new attribute(strings[2917], new aggregation_type(aggregation_type::set_type, 1, 2, new named_type(IFC2X3_IfcTrimmingSelect_type)), false),
            new attribute(strings[2918], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2919], new named_type(IFC2X3_IfcTrimmingPreference_type), false)
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcTubeBundleType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcTubeBundleTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcTwoDirectionRepeatFactor_type->set_attributes({
            new attribute(strings[2920], new named_type(IFC2X3_IfcVector_type), false)
    },{
            false, false
    });
    IFC2X3_IfcTypeObject_type->set_attributes({
            new attribute(strings[2921], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2922], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcPropertySetDefinition_type)), true)
    },{
            false, false, false, false, false, false
    });
    IFC2X3_IfcTypeProduct_type->set_attributes({
            new attribute(strings[2923], new aggregation_type(aggregation_type::list_type, 1, -1, new named_type(IFC2X3_IfcRepresentationMap_type)), true),
            new attribute(strings[2275], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcUShapeProfileDef_type->set_attributes({
            new attribute(strings[2088], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2846], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2180], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2363], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2364], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2373], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2850], new named_type(IFC2X3_IfcPlaneAngleMeasure_type), true),
            new attribute(strings[2093], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcUnitAssignment_type->set_attributes({
            new attribute(strings[2924], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcUnit_type)), false)
    },{
            false
    });
    IFC2X3_IfcUnitaryEquipmentType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcUnitaryEquipmentTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcValveType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcValveTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcVector_type->set_attributes({
            new attribute(strings[2294], new named_type(IFC2X3_IfcDirection_type), false),
            new attribute(strings[2925], new named_type(IFC2X3_IfcLengthMeasure_type), false)
    },{
            false, false
    });
    IFC2X3_IfcVertex_type->set_attributes({
    },{
            
    });
    IFC2X3_IfcVertexBasedTextureMap_type->set_attributes({
            new attribute(strings[2926], new aggregation_type(aggregation_type::list_type, 3, -1, new named_type(IFC2X3_IfcTextureVertex_type)), false),
            new attribute(strings[2927], new aggregation_type(aggregation_type::list_type, 3, -1, new named_type(IFC2X3_IfcCartesianPoint_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcVertexLoop_type->set_attributes({
            new attribute(strings[2928], new named_type(IFC2X3_IfcVertex_type), false)
    },{
            false
    });
    IFC2X3_IfcVertexPoint_type->set_attributes({
            new attribute(strings[2929], new named_type(IFC2X3_IfcPoint_type), false)
    },{
            false
    });
    IFC2X3_IfcVibrationIsolatorType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcVibrationIsolatorTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcVirtualElement_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcVirtualGridIntersection_type->set_attributes({
            new attribute(strings[2930], new aggregation_type(aggregation_type::list_type, 2, 2, new named_type(IFC2X3_IfcGridAxis_type)), false),
            new attribute(strings[2931], new aggregation_type(aggregation_type::list_type, 2, 3, new named_type(IFC2X3_IfcLengthMeasure_type)), false)
    },{
            false, false
    });
    IFC2X3_IfcWall_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWallStandardCase_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWallType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcWallTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWasteTerminalType_type->set_attributes({
            new attribute(strings[2000], new named_type(IFC2X3_IfcWasteTerminalTypeEnum_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWaterProperties_type->set_attributes({
            new attribute(strings[2932], new simple_type(simple_type::boolean_type), true),
            new attribute(strings[2933], new named_type(IFC2X3_IfcIonConcentrationMeasure_type), true),
            new attribute(strings[2934], new named_type(IFC2X3_IfcIonConcentrationMeasure_type), true),
            new attribute(strings[2935], new named_type(IFC2X3_IfcIonConcentrationMeasure_type), true),
            new attribute(strings[2936], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2937], new named_type(IFC2X3_IfcPHMeasure_type), true),
            new attribute(strings[2938], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWindow_type->set_attributes({
            new attribute(strings[2175], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2237], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWindowLiningProperties_type->set_attributes({
            new attribute(strings[2238], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2239], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2242], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2939], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2940], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2941], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2942], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2943], new named_type(IFC2X3_IfcNormalisedRatioMeasure_type), true),
            new attribute(strings[2248], new named_type(IFC2X3_IfcShapeAspect_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWindowPanelProperties_type->set_attributes({
            new attribute(strings[2253], new named_type(IFC2X3_IfcWindowPanelOperationEnum_type), false),
            new attribute(strings[2252], new named_type(IFC2X3_IfcWindowPanelPositionEnum_type), false),
            new attribute(strings[2486], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2487], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2248], new named_type(IFC2X3_IfcShapeAspect_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWindowStyle_type->set_attributes({
            new attribute(strings[2254], new named_type(IFC2X3_IfcWindowStyleConstructionEnum_type), false),
            new attribute(strings[2253], new named_type(IFC2X3_IfcWindowStyleOperationEnum_type), false),
            new attribute(strings[2255], new simple_type(simple_type::boolean_type), false),
            new attribute(strings[2256], new simple_type(simple_type::boolean_type), false)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWorkControl_type->set_attributes({
            new attribute(strings[2025], new named_type(IFC2X3_IfcIdentifier_type), false),
            new attribute(strings[2484], new named_type(IFC2X3_IfcDateTimeSelect_type), false),
            new attribute(strings[2944], new aggregation_type(aggregation_type::set_type, 1, -1, new named_type(IFC2X3_IfcPerson_type)), true),
            new attribute(strings[2001], new named_type(IFC2X3_IfcLabel_type), true),
            new attribute(strings[2945], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2694], new named_type(IFC2X3_IfcTimeMeasure_type), true),
            new attribute(strings[2901], new named_type(IFC2X3_IfcDateTimeSelect_type), false),
            new attribute(strings[2946], new named_type(IFC2X3_IfcDateTimeSelect_type), true),
            new attribute(strings[2947], new named_type(IFC2X3_IfcWorkControlTypeEnum_type), true),
            new attribute(strings[2948], new named_type(IFC2X3_IfcLabel_type), true)
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWorkPlan_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcWorkSchedule_type->set_attributes({
    },{
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcZShapeProfileDef_type->set_attributes({
            new attribute(strings[2088], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2846], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2180], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2363], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), false),
            new attribute(strings[2364], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true),
            new attribute(strings[2373], new named_type(IFC2X3_IfcPositiveLengthMeasure_type), true)
    },{
            false, false, false, false, false, false, false, false, false
    });
    IFC2X3_IfcZone_type->set_attributes({
    },{
            false, false, false, false, false
    });
    IFC2X3_IfcActor_type->set_inverse_attributes({
            new inverse_attribute(strings[2949], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelAssignsToActor_type, IFC2X3_IfcRelAssignsToActor_type->attributes()[0])
    });
    IFC2X3_IfcAddress_type->set_inverse_attributes({
            new inverse_attribute(strings[2950], inverse_attribute::set_type, 0, -1, IFC2X3_IfcPerson_type, IFC2X3_IfcPerson_type->attributes()[7]),
            new inverse_attribute(strings[2951], inverse_attribute::set_type, 0, -1, IFC2X3_IfcOrganization_type, IFC2X3_IfcOrganization_type->attributes()[4])
    });
    IFC2X3_IfcAnnotation_type->set_inverse_attributes({
            new inverse_attribute(strings[2952], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelContainedInSpatialStructure_type, IFC2X3_IfcRelContainedInSpatialStructure_type->attributes()[0])
    });
    IFC2X3_IfcAppliedValue_type->set_inverse_attributes({
            new inverse_attribute(strings[2953], inverse_attribute::set_type, 0, -1, IFC2X3_IfcReferencesValueDocument_type, IFC2X3_IfcReferencesValueDocument_type->attributes()[1]),
            new inverse_attribute(strings[2954], inverse_attribute::set_type, 0, -1, IFC2X3_IfcAppliedValueRelationship_type, IFC2X3_IfcAppliedValueRelationship_type->attributes()[0]),
            new inverse_attribute(strings[2955], inverse_attribute::set_type, 0, -1, IFC2X3_IfcAppliedValueRelationship_type, IFC2X3_IfcAppliedValueRelationship_type->attributes()[1])
    });
    IFC2X3_IfcApproval_type->set_inverse_attributes({
            new inverse_attribute(strings[2956], inverse_attribute::set_type, 0, -1, IFC2X3_IfcApprovalActorRelationship_type, IFC2X3_IfcApprovalActorRelationship_type->attributes()[1]),
            new inverse_attribute(strings[2957], inverse_attribute::set_type, 0, -1, IFC2X3_IfcApprovalRelationship_type, IFC2X3_IfcApprovalRelationship_type->attributes()[0]),
            new inverse_attribute(strings[2958], inverse_attribute::set_type, 0, -1, IFC2X3_IfcApprovalRelationship_type, IFC2X3_IfcApprovalRelationship_type->attributes()[1])
    });
    IFC2X3_IfcClassification_type->set_inverse_attributes({
            new inverse_attribute(strings[2959], inverse_attribute::set_type, 0, -1, IFC2X3_IfcClassificationItem_type, IFC2X3_IfcClassificationItem_type->attributes()[1])
    });
    IFC2X3_IfcClassificationItem_type->set_inverse_attributes({
            new inverse_attribute(strings[2960], inverse_attribute::set_type, 0, 1, IFC2X3_IfcClassificationItemRelationship_type, IFC2X3_IfcClassificationItemRelationship_type->attributes()[1]),
            new inverse_attribute(strings[2961], inverse_attribute::set_type, 0, 1, IFC2X3_IfcClassificationItemRelationship_type, IFC2X3_IfcClassificationItemRelationship_type->attributes()[0])
    });
    IFC2X3_IfcCompositeCurveSegment_type->set_inverse_attributes({
            new inverse_attribute(strings[2962], inverse_attribute::set_type, 1, -1, IFC2X3_IfcCompositeCurve_type, IFC2X3_IfcCompositeCurve_type->attributes()[0])
    });
    IFC2X3_IfcConstraint_type->set_inverse_attributes({
            new inverse_attribute(strings[2963], inverse_attribute::set_type, 0, -1, IFC2X3_IfcConstraintClassificationRelationship_type, IFC2X3_IfcConstraintClassificationRelationship_type->attributes()[0]),
            new inverse_attribute(strings[2964], inverse_attribute::set_type, 0, -1, IFC2X3_IfcConstraintRelationship_type, IFC2X3_IfcConstraintRelationship_type->attributes()[2]),
            new inverse_attribute(strings[2957], inverse_attribute::set_type, 0, -1, IFC2X3_IfcConstraintRelationship_type, IFC2X3_IfcConstraintRelationship_type->attributes()[3]),
            new inverse_attribute(strings[2965], inverse_attribute::set_type, 0, -1, IFC2X3_IfcPropertyConstraintRelationship_type, IFC2X3_IfcPropertyConstraintRelationship_type->attributes()[0]),
            new inverse_attribute(strings[2966], inverse_attribute::set_type, 0, -1, IFC2X3_IfcConstraintAggregationRelationship_type, IFC2X3_IfcConstraintAggregationRelationship_type->attributes()[2]),
            new inverse_attribute(strings[2967], inverse_attribute::set_type, 0, -1, IFC2X3_IfcConstraintAggregationRelationship_type, IFC2X3_IfcConstraintAggregationRelationship_type->attributes()[3])
    });
    IFC2X3_IfcControl_type->set_inverse_attributes({
            new inverse_attribute(strings[2968], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelAssignsToControl_type, IFC2X3_IfcRelAssignsToControl_type->attributes()[0])
    });
    IFC2X3_IfcCovering_type->set_inverse_attributes({
            new inverse_attribute(strings[2969], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelCoversSpaces_type, IFC2X3_IfcRelCoversSpaces_type->attributes()[1]),
            new inverse_attribute(strings[2970], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelCoversBldgElements_type, IFC2X3_IfcRelCoversBldgElements_type->attributes()[1])
    });
    IFC2X3_IfcDimensionCurve_type->set_inverse_attributes({
            new inverse_attribute(strings[2971], inverse_attribute::set_type, 0, 2, IFC2X3_IfcTerminatorSymbol_type, IFC2X3_IfcTerminatorSymbol_type->attributes()[0])
    });
    IFC2X3_IfcDistributionControlElement_type->set_inverse_attributes({
            new inverse_attribute(strings[2972], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelFlowControlElements_type, IFC2X3_IfcRelFlowControlElements_type->attributes()[0])
    });
    IFC2X3_IfcDistributionFlowElement_type->set_inverse_attributes({
            new inverse_attribute(strings[2973], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelFlowControlElements_type, IFC2X3_IfcRelFlowControlElements_type->attributes()[1])
    });
    IFC2X3_IfcDocumentInformation_type->set_inverse_attributes({
            new inverse_attribute(strings[2974], inverse_attribute::set_type, 0, -1, IFC2X3_IfcDocumentInformationRelationship_type, IFC2X3_IfcDocumentInformationRelationship_type->attributes()[1]),
            new inverse_attribute(strings[2975], inverse_attribute::set_type, 0, 1, IFC2X3_IfcDocumentInformationRelationship_type, IFC2X3_IfcDocumentInformationRelationship_type->attributes()[0])
    });
    IFC2X3_IfcDocumentReference_type->set_inverse_attributes({
            new inverse_attribute(strings[2976], inverse_attribute::set_type, 0, 1, IFC2X3_IfcDocumentInformation_type, IFC2X3_IfcDocumentInformation_type->attributes()[3])
    });
    IFC2X3_IfcDraughtingCallout_type->set_inverse_attributes({
            new inverse_attribute(strings[2977], inverse_attribute::set_type, 0, -1, IFC2X3_IfcDraughtingCalloutRelationship_type, IFC2X3_IfcDraughtingCalloutRelationship_type->attributes()[3]),
            new inverse_attribute(strings[2978], inverse_attribute::set_type, 0, -1, IFC2X3_IfcDraughtingCalloutRelationship_type, IFC2X3_IfcDraughtingCalloutRelationship_type->attributes()[2])
    });
    IFC2X3_IfcElement_type->set_inverse_attributes({
            new inverse_attribute(strings[2979], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelConnectsStructuralElement_type, IFC2X3_IfcRelConnectsStructuralElement_type->attributes()[0]),
            new inverse_attribute(strings[2980], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelFillsElement_type, IFC2X3_IfcRelFillsElement_type->attributes()[1]),
            new inverse_attribute(strings[2981], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelConnectsElements_type, IFC2X3_IfcRelConnectsElements_type->attributes()[1]),
            new inverse_attribute(strings[2982], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelCoversBldgElements_type, IFC2X3_IfcRelCoversBldgElements_type->attributes()[0]),
            new inverse_attribute(strings[2983], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelProjectsElement_type, IFC2X3_IfcRelProjectsElement_type->attributes()[0]),
            new inverse_attribute(strings[2984], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelReferencedInSpatialStructure_type, IFC2X3_IfcRelReferencedInSpatialStructure_type->attributes()[0]),
            new inverse_attribute(strings[2985], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelConnectsPortToElement_type, IFC2X3_IfcRelConnectsPortToElement_type->attributes()[1]),
            new inverse_attribute(strings[2986], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelVoidsElement_type, IFC2X3_IfcRelVoidsElement_type->attributes()[0]),
            new inverse_attribute(strings[2987], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelConnectsWithRealizingElements_type, IFC2X3_IfcRelConnectsWithRealizingElements_type->attributes()[0]),
            new inverse_attribute(strings[2988], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelSpaceBoundary_type, IFC2X3_IfcRelSpaceBoundary_type->attributes()[1]),
            new inverse_attribute(strings[2989], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelConnectsElements_type, IFC2X3_IfcRelConnectsElements_type->attributes()[2]),
            new inverse_attribute(strings[2952], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelContainedInSpatialStructure_type, IFC2X3_IfcRelContainedInSpatialStructure_type->attributes()[0])
    });
    IFC2X3_IfcFeatureElementAddition_type->set_inverse_attributes({
            new inverse_attribute(strings[2990], inverse_attribute::unspecified_type, -1, -1, IFC2X3_IfcRelProjectsElement_type, IFC2X3_IfcRelProjectsElement_type->attributes()[1])
    });
    IFC2X3_IfcFeatureElementSubtraction_type->set_inverse_attributes({
            new inverse_attribute(strings[2991], inverse_attribute::unspecified_type, -1, -1, IFC2X3_IfcRelVoidsElement_type, IFC2X3_IfcRelVoidsElement_type->attributes()[1])
    });
    IFC2X3_IfcGeometricRepresentationContext_type->set_inverse_attributes({
            new inverse_attribute(strings[2992], inverse_attribute::set_type, 0, -1, IFC2X3_IfcGeometricRepresentationSubContext_type, IFC2X3_IfcGeometricRepresentationSubContext_type->attributes()[0])
    });
    IFC2X3_IfcGrid_type->set_inverse_attributes({
            new inverse_attribute(strings[2952], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelContainedInSpatialStructure_type, IFC2X3_IfcRelContainedInSpatialStructure_type->attributes()[0])
    });
    IFC2X3_IfcGridAxis_type->set_inverse_attributes({
            new inverse_attribute(strings[2993], inverse_attribute::set_type, 0, 1, IFC2X3_IfcGrid_type, IFC2X3_IfcGrid_type->attributes()[2]),
            new inverse_attribute(strings[2994], inverse_attribute::set_type, 0, 1, IFC2X3_IfcGrid_type, IFC2X3_IfcGrid_type->attributes()[1]),
            new inverse_attribute(strings[2995], inverse_attribute::set_type, 0, 1, IFC2X3_IfcGrid_type, IFC2X3_IfcGrid_type->attributes()[0]),
            new inverse_attribute(strings[2996], inverse_attribute::set_type, 0, -1, IFC2X3_IfcVirtualGridIntersection_type, IFC2X3_IfcVirtualGridIntersection_type->attributes()[0])
    });
    IFC2X3_IfcGroup_type->set_inverse_attributes({
            new inverse_attribute(strings[2997], inverse_attribute::unspecified_type, -1, -1, IFC2X3_IfcRelAssignsToGroup_type, IFC2X3_IfcRelAssignsToGroup_type->attributes()[0])
    });
    IFC2X3_IfcLibraryReference_type->set_inverse_attributes({
            new inverse_attribute(strings[2998], inverse_attribute::set_type, 0, 1, IFC2X3_IfcLibraryInformation_type, IFC2X3_IfcLibraryInformation_type->attributes()[4])
    });
    IFC2X3_IfcMaterial_type->set_inverse_attributes({
            new inverse_attribute(strings[2999], inverse_attribute::set_type, 0, 1, IFC2X3_IfcMaterialDefinitionRepresentation_type, IFC2X3_IfcMaterialDefinitionRepresentation_type->attributes()[0]),
            new inverse_attribute(strings[2963], inverse_attribute::set_type, 0, 1, IFC2X3_IfcMaterialClassificationRelationship_type, IFC2X3_IfcMaterialClassificationRelationship_type->attributes()[1])
    });
    IFC2X3_IfcMaterialLayer_type->set_inverse_attributes({
            new inverse_attribute(strings[3000], inverse_attribute::unspecified_type, -1, -1, IFC2X3_IfcMaterialLayerSet_type, IFC2X3_IfcMaterialLayerSet_type->attributes()[0])
    });
    IFC2X3_IfcObject_type->set_inverse_attributes({
            new inverse_attribute(strings[3001], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelDefines_type, IFC2X3_IfcRelDefines_type->attributes()[0])
    });
    IFC2X3_IfcObjectDefinition_type->set_inverse_attributes({
            new inverse_attribute(strings[3002], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelAssigns_type, IFC2X3_IfcRelAssigns_type->attributes()[0]),
            new inverse_attribute(strings[3003], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelDecomposes_type, IFC2X3_IfcRelDecomposes_type->attributes()[0]),
            new inverse_attribute(strings[3004], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelDecomposes_type, IFC2X3_IfcRelDecomposes_type->attributes()[1]),
            new inverse_attribute(strings[3005], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelAssociates_type, IFC2X3_IfcRelAssociates_type->attributes()[0])
    });
    IFC2X3_IfcObjectPlacement_type->set_inverse_attributes({
            new inverse_attribute(strings[3006], inverse_attribute::set_type, 1, 1, IFC2X3_IfcProduct_type, IFC2X3_IfcProduct_type->attributes()[0]),
            new inverse_attribute(strings[3007], inverse_attribute::set_type, 0, -1, IFC2X3_IfcLocalPlacement_type, IFC2X3_IfcLocalPlacement_type->attributes()[0])
    });
    IFC2X3_IfcOpeningElement_type->set_inverse_attributes({
            new inverse_attribute(strings[3008], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelFillsElement_type, IFC2X3_IfcRelFillsElement_type->attributes()[0])
    });
    IFC2X3_IfcOrganization_type->set_inverse_attributes({
            new inverse_attribute(strings[3009], inverse_attribute::set_type, 0, -1, IFC2X3_IfcOrganizationRelationship_type, IFC2X3_IfcOrganizationRelationship_type->attributes()[3]),
            new inverse_attribute(strings[2958], inverse_attribute::set_type, 0, -1, IFC2X3_IfcOrganizationRelationship_type, IFC2X3_IfcOrganizationRelationship_type->attributes()[2]),
            new inverse_attribute(strings[3010], inverse_attribute::set_type, 0, -1, IFC2X3_IfcPersonAndOrganization_type, IFC2X3_IfcPersonAndOrganization_type->attributes()[1])
    });
    IFC2X3_IfcPerson_type->set_inverse_attributes({
            new inverse_attribute(strings[3011], inverse_attribute::set_type, 0, -1, IFC2X3_IfcPersonAndOrganization_type, IFC2X3_IfcPersonAndOrganization_type->attributes()[0])
    });
    IFC2X3_IfcPhysicalQuantity_type->set_inverse_attributes({
            new inverse_attribute(strings[3012], inverse_attribute::set_type, 0, 1, IFC2X3_IfcPhysicalComplexQuantity_type, IFC2X3_IfcPhysicalComplexQuantity_type->attributes()[0])
    });
    IFC2X3_IfcPort_type->set_inverse_attributes({
            new inverse_attribute(strings[3013], inverse_attribute::unspecified_type, -1, -1, IFC2X3_IfcRelConnectsPortToElement_type, IFC2X3_IfcRelConnectsPortToElement_type->attributes()[0]),
            new inverse_attribute(strings[2989], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelConnectsPorts_type, IFC2X3_IfcRelConnectsPorts_type->attributes()[1]),
            new inverse_attribute(strings[2981], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelConnectsPorts_type, IFC2X3_IfcRelConnectsPorts_type->attributes()[0])
    });
    IFC2X3_IfcProcess_type->set_inverse_attributes({
            new inverse_attribute(strings[3014], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelAssignsToProcess_type, IFC2X3_IfcRelAssignsToProcess_type->attributes()[0]),
            new inverse_attribute(strings[3015], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelSequence_type, IFC2X3_IfcRelSequence_type->attributes()[1]),
            new inverse_attribute(strings[3016], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelSequence_type, IFC2X3_IfcRelSequence_type->attributes()[0])
    });
    IFC2X3_IfcProduct_type->set_inverse_attributes({
            new inverse_attribute(strings[3017], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelAssignsToProduct_type, IFC2X3_IfcRelAssignsToProduct_type->attributes()[0])
    });
    IFC2X3_IfcProductDefinitionShape_type->set_inverse_attributes({
            new inverse_attribute(strings[3018], inverse_attribute::set_type, 1, 1, IFC2X3_IfcProduct_type, IFC2X3_IfcProduct_type->attributes()[1]),
            new inverse_attribute(strings[3019], inverse_attribute::set_type, 0, -1, IFC2X3_IfcShapeAspect_type, IFC2X3_IfcShapeAspect_type->attributes()[4])
    });
    IFC2X3_IfcProperty_type->set_inverse_attributes({
            new inverse_attribute(strings[3020], inverse_attribute::set_type, 0, -1, IFC2X3_IfcPropertyDependencyRelationship_type, IFC2X3_IfcPropertyDependencyRelationship_type->attributes()[0]),
            new inverse_attribute(strings[3021], inverse_attribute::set_type, 0, -1, IFC2X3_IfcPropertyDependencyRelationship_type, IFC2X3_IfcPropertyDependencyRelationship_type->attributes()[1]),
            new inverse_attribute(strings[3012], inverse_attribute::set_type, 0, 1, IFC2X3_IfcComplexProperty_type, IFC2X3_IfcComplexProperty_type->attributes()[1])
    });
    IFC2X3_IfcPropertyDefinition_type->set_inverse_attributes({
            new inverse_attribute(strings[3005], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelAssociates_type, IFC2X3_IfcRelAssociates_type->attributes()[0])
    });
    IFC2X3_IfcPropertySetDefinition_type->set_inverse_attributes({
            new inverse_attribute(strings[3022], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelDefinesByProperties_type, IFC2X3_IfcRelDefinesByProperties_type->attributes()[0]),
            new inverse_attribute(strings[3023], inverse_attribute::set_type, 0, 1, IFC2X3_IfcTypeObject_type, IFC2X3_IfcTypeObject_type->attributes()[1])
    });
    IFC2X3_IfcRepresentation_type->set_inverse_attributes({
            new inverse_attribute(strings[3024], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRepresentationMap_type, IFC2X3_IfcRepresentationMap_type->attributes()[1]),
            new inverse_attribute(strings[3025], inverse_attribute::set_type, 0, -1, IFC2X3_IfcPresentationLayerAssignment_type, IFC2X3_IfcPresentationLayerAssignment_type->attributes()[2]),
            new inverse_attribute(strings[3026], inverse_attribute::set_type, 0, 1, IFC2X3_IfcProductRepresentation_type, IFC2X3_IfcProductRepresentation_type->attributes()[2])
    });
    IFC2X3_IfcRepresentationContext_type->set_inverse_attributes({
            new inverse_attribute(strings[3027], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRepresentation_type, IFC2X3_IfcRepresentation_type->attributes()[0])
    });
    IFC2X3_IfcRepresentationItem_type->set_inverse_attributes({
            new inverse_attribute(strings[3025], inverse_attribute::set_type, 0, -1, IFC2X3_IfcPresentationLayerAssignment_type, IFC2X3_IfcPresentationLayerAssignment_type->attributes()[2]),
            new inverse_attribute(strings[3028], inverse_attribute::set_type, 0, 1, IFC2X3_IfcStyledItem_type, IFC2X3_IfcStyledItem_type->attributes()[0])
    });
    IFC2X3_IfcRepresentationMap_type->set_inverse_attributes({
            new inverse_attribute(strings[3029], inverse_attribute::set_type, 0, -1, IFC2X3_IfcMappedItem_type, IFC2X3_IfcMappedItem_type->attributes()[0])
    });
    IFC2X3_IfcResource_type->set_inverse_attributes({
            new inverse_attribute(strings[3030], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelAssignsToResource_type, IFC2X3_IfcRelAssignsToResource_type->attributes()[0])
    });
    IFC2X3_IfcScheduleTimeControl_type->set_inverse_attributes({
            new inverse_attribute(strings[3031], inverse_attribute::unspecified_type, -1, -1, IFC2X3_IfcRelAssignsTasks_type, IFC2X3_IfcRelAssignsTasks_type->attributes()[0])
    });
    IFC2X3_IfcShapeModel_type->set_inverse_attributes({
            new inverse_attribute(strings[3032], inverse_attribute::set_type, 0, 1, IFC2X3_IfcShapeAspect_type, IFC2X3_IfcShapeAspect_type->attributes()[0])
    });
    IFC2X3_IfcSpace_type->set_inverse_attributes({
            new inverse_attribute(strings[2982], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelCoversSpaces_type, IFC2X3_IfcRelCoversSpaces_type->attributes()[0]),
            new inverse_attribute(strings[3033], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelSpaceBoundary_type, IFC2X3_IfcRelSpaceBoundary_type->attributes()[0])
    });
    IFC2X3_IfcSpaceProgram_type->set_inverse_attributes({
            new inverse_attribute(strings[3034], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelInteractionRequirements_type, IFC2X3_IfcRelInteractionRequirements_type->attributes()[3]),
            new inverse_attribute(strings[3035], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelInteractionRequirements_type, IFC2X3_IfcRelInteractionRequirements_type->attributes()[4])
    });
    IFC2X3_IfcSpatialStructureElement_type->set_inverse_attributes({
            new inverse_attribute(strings[3036], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelReferencedInSpatialStructure_type, IFC2X3_IfcRelReferencedInSpatialStructure_type->attributes()[1]),
            new inverse_attribute(strings[3037], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelServicesBuildings_type, IFC2X3_IfcRelServicesBuildings_type->attributes()[1]),
            new inverse_attribute(strings[3038], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelContainedInSpatialStructure_type, IFC2X3_IfcRelContainedInSpatialStructure_type->attributes()[1])
    });
    IFC2X3_IfcStructuralActivity_type->set_inverse_attributes({
            new inverse_attribute(strings[3039], inverse_attribute::unspecified_type, -1, -1, IFC2X3_IfcRelConnectsStructuralActivity_type, IFC2X3_IfcRelConnectsStructuralActivity_type->attributes()[1])
    });
    IFC2X3_IfcStructuralConnection_type->set_inverse_attributes({
            new inverse_attribute(strings[3040], inverse_attribute::set_type, 1, -1, IFC2X3_IfcRelConnectsStructuralMember_type, IFC2X3_IfcRelConnectsStructuralMember_type->attributes()[1])
    });
    IFC2X3_IfcStructuralItem_type->set_inverse_attributes({
            new inverse_attribute(strings[3041], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelConnectsStructuralActivity_type, IFC2X3_IfcRelConnectsStructuralActivity_type->attributes()[0])
    });
    IFC2X3_IfcStructuralLoadGroup_type->set_inverse_attributes({
            new inverse_attribute(strings[3042], inverse_attribute::set_type, 0, 1, IFC2X3_IfcStructuralResultGroup_type, IFC2X3_IfcStructuralResultGroup_type->attributes()[1]),
            new inverse_attribute(strings[3043], inverse_attribute::set_type, 0, -1, IFC2X3_IfcStructuralAnalysisModel_type, IFC2X3_IfcStructuralAnalysisModel_type->attributes()[2])
    });
    IFC2X3_IfcStructuralMember_type->set_inverse_attributes({
            new inverse_attribute(strings[3044], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelConnectsStructuralElement_type, IFC2X3_IfcRelConnectsStructuralElement_type->attributes()[1]),
            new inverse_attribute(strings[3045], inverse_attribute::set_type, 0, -1, IFC2X3_IfcRelConnectsStructuralMember_type, IFC2X3_IfcRelConnectsStructuralMember_type->attributes()[0])
    });
    IFC2X3_IfcStructuralReaction_type->set_inverse_attributes({
            new inverse_attribute(strings[3046], inverse_attribute::set_type, 0, -1, IFC2X3_IfcStructuralAction_type, IFC2X3_IfcStructuralAction_type->attributes()[1])
    });
    IFC2X3_IfcStructuralResultGroup_type->set_inverse_attributes({
            new inverse_attribute(strings[3047], inverse_attribute::set_type, 0, 1, IFC2X3_IfcStructuralAnalysisModel_type, IFC2X3_IfcStructuralAnalysisModel_type->attributes()[3])
    });
    IFC2X3_IfcSystem_type->set_inverse_attributes({
            new inverse_attribute(strings[3048], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelServicesBuildings_type, IFC2X3_IfcRelServicesBuildings_type->attributes()[0])
    });
    IFC2X3_IfcTableRow_type->set_inverse_attributes({
            new inverse_attribute(strings[3049], inverse_attribute::unspecified_type, -1, -1, IFC2X3_IfcTable_type, IFC2X3_IfcTable_type->attributes()[1])
    });
    IFC2X3_IfcTextureCoordinate_type->set_inverse_attributes({
            new inverse_attribute(strings[3050], inverse_attribute::set_type, 1, 1, IFC2X3_IfcAnnotationSurface_type, IFC2X3_IfcAnnotationSurface_type->attributes()[1])
    });
    IFC2X3_IfcTimeSeries_type->set_inverse_attributes({
            new inverse_attribute(strings[3051], inverse_attribute::set_type, 0, 1, IFC2X3_IfcTimeSeriesReferenceRelationship_type, IFC2X3_IfcTimeSeriesReferenceRelationship_type->attributes()[0])
    });
    IFC2X3_IfcTypeObject_type->set_inverse_attributes({
            new inverse_attribute(strings[3052], inverse_attribute::set_type, 0, 1, IFC2X3_IfcRelDefinesByType_type, IFC2X3_IfcRelDefinesByType_type->attributes()[0])
    });
    IFC2X3_IfcCompositeCurve_type->set_subtypes({
        IFC2X3_Ifc2DCompositeCurve_type
    });
    IFC2X3_IfcControl_type->set_subtypes({
        IFC2X3_IfcActionRequest_type,IFC2X3_IfcConditionCriterion_type,IFC2X3_IfcCostItem_type,IFC2X3_IfcCostSchedule_type,IFC2X3_IfcEquipmentStandard_type,IFC2X3_IfcFurnitureStandard_type,IFC2X3_IfcPerformanceHistory_type,IFC2X3_IfcPermit_type,IFC2X3_IfcProjectOrder_type,IFC2X3_IfcProjectOrderRecord_type,IFC2X3_IfcScheduleTimeControl_type,IFC2X3_IfcServiceLife_type,IFC2X3_IfcSpaceProgram_type,IFC2X3_IfcTimeSeriesSchedule_type,IFC2X3_IfcWorkControl_type
    });
    IFC2X3_IfcObject_type->set_subtypes({
        IFC2X3_IfcActor_type,IFC2X3_IfcControl_type,IFC2X3_IfcGroup_type,IFC2X3_IfcProcess_type,IFC2X3_IfcProduct_type,IFC2X3_IfcProject_type,IFC2X3_IfcResource_type
    });
    IFC2X3_IfcDistributionControlElementType_type->set_subtypes({
        IFC2X3_IfcActuatorType_type,IFC2X3_IfcAlarmType_type,IFC2X3_IfcControllerType_type,IFC2X3_IfcFlowInstrumentType_type,IFC2X3_IfcSensorType_type
    });
    IFC2X3_IfcFlowControllerType_type->set_subtypes({
        IFC2X3_IfcAirTerminalBoxType_type,IFC2X3_IfcDamperType_type,IFC2X3_IfcElectricTimeControlType_type,IFC2X3_IfcFlowMeterType_type,IFC2X3_IfcProtectiveDeviceType_type,IFC2X3_IfcSwitchingDeviceType_type,IFC2X3_IfcValveType_type
    });
    IFC2X3_IfcFlowTerminalType_type->set_subtypes({
        IFC2X3_IfcAirTerminalType_type,IFC2X3_IfcElectricApplianceType_type,IFC2X3_IfcElectricHeaterType_type,IFC2X3_IfcFireSuppressionTerminalType_type,IFC2X3_IfcGasTerminalType_type,IFC2X3_IfcLampType_type,IFC2X3_IfcLightFixtureType_type,IFC2X3_IfcOutletType_type,IFC2X3_IfcSanitaryTerminalType_type,IFC2X3_IfcStackTerminalType_type,IFC2X3_IfcWasteTerminalType_type
    });
    IFC2X3_IfcEnergyConversionDeviceType_type->set_subtypes({
        IFC2X3_IfcAirToAirHeatRecoveryType_type,IFC2X3_IfcBoilerType_type,IFC2X3_IfcChillerType_type,IFC2X3_IfcCoilType_type,IFC2X3_IfcCondenserType_type,IFC2X3_IfcCooledBeamType_type,IFC2X3_IfcCoolingTowerType_type,IFC2X3_IfcElectricGeneratorType_type,IFC2X3_IfcElectricMotorType_type,IFC2X3_IfcEvaporativeCoolerType_type,IFC2X3_IfcEvaporatorType_type,IFC2X3_IfcHeatExchangerType_type,IFC2X3_IfcHumidifierType_type,IFC2X3_IfcMotorConnectionType_type,IFC2X3_IfcSpaceHeaterType_type,IFC2X3_IfcTransformerType_type,IFC2X3_IfcTubeBundleType_type,IFC2X3_IfcUnitaryEquipmentType_type
    });
    IFC2X3_IfcDimensionCurveDirectedCallout_type->set_subtypes({
        IFC2X3_IfcAngularDimension_type,IFC2X3_IfcDiameterDimension_type,IFC2X3_IfcLinearDimension_type,IFC2X3_IfcRadiusDimension_type
    });
    IFC2X3_IfcProduct_type->set_subtypes({
        IFC2X3_IfcAnnotation_type,IFC2X3_IfcElement_type,IFC2X3_IfcGrid_type,IFC2X3_IfcPort_type,IFC2X3_IfcProxy_type,IFC2X3_IfcSpatialStructureElement_type,IFC2X3_IfcStructuralActivity_type,IFC2X3_IfcStructuralItem_type
    });
    IFC2X3_IfcAnnotationOccurrence_type->set_subtypes({
        IFC2X3_IfcAnnotationCurveOccurrence_type,IFC2X3_IfcAnnotationFillAreaOccurrence_type,IFC2X3_IfcAnnotationSurfaceOccurrence_type,IFC2X3_IfcAnnotationSymbolOccurrence_type,IFC2X3_IfcAnnotationTextOccurrence_type
    });
    IFC2X3_IfcGeometricRepresentationItem_type->set_subtypes({
        IFC2X3_IfcAnnotationFillArea_type,IFC2X3_IfcAnnotationSurface_type,IFC2X3_IfcBooleanResult_type,IFC2X3_IfcBoundingBox_type,IFC2X3_IfcCartesianTransformationOperator_type,IFC2X3_IfcCompositeCurveSegment_type,IFC2X3_IfcCsgPrimitive3D_type,IFC2X3_IfcCurve_type,IFC2X3_IfcDefinedSymbol_type,IFC2X3_IfcDirection_type,IFC2X3_IfcDraughtingCallout_type,IFC2X3_IfcFaceBasedSurfaceModel_type,IFC2X3_IfcFillAreaStyleHatching_type,IFC2X3_IfcFillAreaStyleTileSymbolWithStyle_type,IFC2X3_IfcFillAreaStyleTiles_type,IFC2X3_IfcGeometricSet_type,IFC2X3_IfcHalfSpaceSolid_type,IFC2X3_IfcLightSource_type,IFC2X3_IfcOneDirectionRepeatFactor_type,IFC2X3_IfcPlacement_type,IFC2X3_IfcPlanarExtent_type,IFC2X3_IfcPoint_type,IFC2X3_IfcSectionedSpine_type,IFC2X3_IfcShellBasedSurfaceModel_type,IFC2X3_IfcSolidModel_type,IFC2X3_IfcSurface_type,IFC2X3_IfcTextLiteral_type,IFC2X3_IfcVector_type
    });
    IFC2X3_IfcStyledItem_type->set_subtypes({
        IFC2X3_IfcAnnotationOccurrence_type
    });
    IFC2X3_IfcProfileDef_type->set_subtypes({
        IFC2X3_IfcArbitraryClosedProfileDef_type,IFC2X3_IfcArbitraryOpenProfileDef_type,IFC2X3_IfcCompositeProfileDef_type,IFC2X3_IfcDerivedProfileDef_type,IFC2X3_IfcParameterizedProfileDef_type
    });
    IFC2X3_IfcArbitraryClosedProfileDef_type->set_subtypes({
        IFC2X3_IfcArbitraryProfileDefWithVoids_type
    });
    IFC2X3_IfcGroup_type->set_subtypes({
        IFC2X3_IfcAsset_type,IFC2X3_IfcCondition_type,IFC2X3_IfcInventory_type,IFC2X3_IfcStructuralLoadGroup_type,IFC2X3_IfcStructuralResultGroup_type,IFC2X3_IfcSystem_type,IFC2X3_IfcZone_type
    });
    IFC2X3_IfcIShapeProfileDef_type->set_subtypes({
        IFC2X3_IfcAsymmetricIShapeProfileDef_type
    });
    IFC2X3_IfcPlacement_type->set_subtypes({
        IFC2X3_IfcAxis1Placement_type,IFC2X3_IfcAxis2Placement2D_type,IFC2X3_IfcAxis2Placement3D_type
    });
    IFC2X3_IfcBoundedCurve_type->set_subtypes({
        IFC2X3_IfcBSplineCurve_type,IFC2X3_IfcCompositeCurve_type,IFC2X3_IfcPolyline_type,IFC2X3_IfcTrimmedCurve_type
    });
    IFC2X3_IfcBuildingElement_type->set_subtypes({
        IFC2X3_IfcBeam_type,IFC2X3_IfcBuildingElementComponent_type,IFC2X3_IfcBuildingElementProxy_type,IFC2X3_IfcColumn_type,IFC2X3_IfcCovering_type,IFC2X3_IfcCurtainWall_type,IFC2X3_IfcDoor_type,IFC2X3_IfcFooting_type,IFC2X3_IfcMember_type,IFC2X3_IfcPile_type,IFC2X3_IfcPlate_type,IFC2X3_IfcRailing_type,IFC2X3_IfcRamp_type,IFC2X3_IfcRampFlight_type,IFC2X3_IfcRoof_type,IFC2X3_IfcSlab_type,IFC2X3_IfcStair_type,IFC2X3_IfcStairFlight_type,IFC2X3_IfcWall_type,IFC2X3_IfcWindow_type
    });
    IFC2X3_IfcBuildingElementType_type->set_subtypes({
        IFC2X3_IfcBeamType_type,IFC2X3_IfcBuildingElementProxyType_type,IFC2X3_IfcColumnType_type,IFC2X3_IfcCoveringType_type,IFC2X3_IfcCurtainWallType_type,IFC2X3_IfcMemberType_type,IFC2X3_IfcPlateType_type,IFC2X3_IfcRailingType_type,IFC2X3_IfcRampFlightType_type,IFC2X3_IfcSlabType_type,IFC2X3_IfcStairFlightType_type,IFC2X3_IfcWallType_type
    });
    IFC2X3_IfcBSplineCurve_type->set_subtypes({
        IFC2X3_IfcBezierCurve_type
    });
    IFC2X3_IfcSurfaceTexture_type->set_subtypes({
        IFC2X3_IfcBlobTexture_type,IFC2X3_IfcImageTexture_type,IFC2X3_IfcPixelTexture_type
    });
    IFC2X3_IfcCsgPrimitive3D_type->set_subtypes({
        IFC2X3_IfcBlock_type,IFC2X3_IfcRectangularPyramid_type,IFC2X3_IfcRightCircularCone_type,IFC2X3_IfcRightCircularCylinder_type,IFC2X3_IfcSphere_type
    });
    IFC2X3_IfcBooleanResult_type->set_subtypes({
        IFC2X3_IfcBooleanClippingResult_type
    });
    IFC2X3_IfcBoundaryCondition_type->set_subtypes({
        IFC2X3_IfcBoundaryEdgeCondition_type,IFC2X3_IfcBoundaryFaceCondition_type,IFC2X3_IfcBoundaryNodeCondition_type
    });
    IFC2X3_IfcBoundaryNodeCondition_type->set_subtypes({
        IFC2X3_IfcBoundaryNodeConditionWarping_type
    });
    IFC2X3_IfcCurve_type->set_subtypes({
        IFC2X3_IfcBoundedCurve_type,IFC2X3_IfcConic_type,IFC2X3_IfcLine_type,IFC2X3_IfcOffsetCurve2D_type,IFC2X3_IfcOffsetCurve3D_type
    });
    IFC2X3_IfcSurface_type->set_subtypes({
        IFC2X3_IfcBoundedSurface_type,IFC2X3_IfcElementarySurface_type,IFC2X3_IfcSweptSurface_type
    });
    IFC2X3_IfcHalfSpaceSolid_type->set_subtypes({
        IFC2X3_IfcBoxedHalfSpace_type,IFC2X3_IfcPolygonalBoundedHalfSpace_type
    });
    IFC2X3_IfcSpatialStructureElement_type->set_subtypes({
        IFC2X3_IfcBuilding_type,IFC2X3_IfcBuildingStorey_type,IFC2X3_IfcSite_type,IFC2X3_IfcSpace_type
    });
    IFC2X3_IfcElement_type->set_subtypes({
        IFC2X3_IfcBuildingElement_type,IFC2X3_IfcDistributionElement_type,IFC2X3_IfcElectricalElement_type,IFC2X3_IfcElementAssembly_type,IFC2X3_IfcElementComponent_type,IFC2X3_IfcEquipmentElement_type,IFC2X3_IfcFeatureElement_type,IFC2X3_IfcFurnishingElement_type,IFC2X3_IfcTransportElement_type,IFC2X3_IfcVirtualElement_type
    });
    IFC2X3_IfcBuildingElementComponent_type->set_subtypes({
        IFC2X3_IfcBuildingElementPart_type,IFC2X3_IfcReinforcingElement_type
    });
    IFC2X3_IfcElementType_type->set_subtypes({
        IFC2X3_IfcBuildingElementType_type,IFC2X3_IfcDistributionElementType_type,IFC2X3_IfcElementComponentType_type,IFC2X3_IfcFurnishingElementType_type,IFC2X3_IfcSpatialStructureElementType_type,IFC2X3_IfcTransportElementType_type
    });
    IFC2X3_IfcParameterizedProfileDef_type->set_subtypes({
        IFC2X3_IfcCShapeProfileDef_type,IFC2X3_IfcCircleProfileDef_type,IFC2X3_IfcCraneRailAShapeProfileDef_type,IFC2X3_IfcCraneRailFShapeProfileDef_type,IFC2X3_IfcEllipseProfileDef_type,IFC2X3_IfcIShapeProfileDef_type,IFC2X3_IfcLShapeProfileDef_type,IFC2X3_IfcRectangleProfileDef_type,IFC2X3_IfcTShapeProfileDef_type,IFC2X3_IfcTrapeziumProfileDef_type,IFC2X3_IfcUShapeProfileDef_type,IFC2X3_IfcZShapeProfileDef_type
    });
    IFC2X3_IfcFlowFittingType_type->set_subtypes({
        IFC2X3_IfcCableCarrierFittingType_type,IFC2X3_IfcDuctFittingType_type,IFC2X3_IfcJunctionBoxType_type,IFC2X3_IfcPipeFittingType_type
    });
    IFC2X3_IfcFlowSegmentType_type->set_subtypes({
        IFC2X3_IfcCableCarrierSegmentType_type,IFC2X3_IfcCableSegmentType_type,IFC2X3_IfcDuctSegmentType_type,IFC2X3_IfcPipeSegmentType_type
    });
    IFC2X3_IfcPoint_type->set_subtypes({
        IFC2X3_IfcCartesianPoint_type,IFC2X3_IfcPointOnCurve_type,IFC2X3_IfcPointOnSurface_type
    });
    IFC2X3_IfcCartesianTransformationOperator_type->set_subtypes({
        IFC2X3_IfcCartesianTransformationOperator2D_type,IFC2X3_IfcCartesianTransformationOperator3D_type
    });
    IFC2X3_IfcCartesianTransformationOperator2D_type->set_subtypes({
        IFC2X3_IfcCartesianTransformationOperator2DnonUniform_type
    });
    IFC2X3_IfcCartesianTransformationOperator3D_type->set_subtypes({
        IFC2X3_IfcCartesianTransformationOperator3DnonUniform_type
    });
    IFC2X3_IfcArbitraryOpenProfileDef_type->set_subtypes({
        IFC2X3_IfcCenterLineProfileDef_type
    });
    IFC2X3_IfcEdgeFeature_type->set_subtypes({
        IFC2X3_IfcChamferEdgeFeature_type,IFC2X3_IfcRoundedEdgeFeature_type
    });
    IFC2X3_IfcConic_type->set_subtypes({
        IFC2X3_IfcCircle_type,IFC2X3_IfcEllipse_type
    });
    IFC2X3_IfcCircleProfileDef_type->set_subtypes({
        IFC2X3_IfcCircleHollowProfileDef_type
    });
    IFC2X3_IfcExternalReference_type->set_subtypes({
        IFC2X3_IfcClassificationReference_type,IFC2X3_IfcDocumentReference_type,IFC2X3_IfcExternallyDefinedHatchStyle_type,IFC2X3_IfcExternallyDefinedSurfaceStyle_type,IFC2X3_IfcExternallyDefinedSymbol_type,IFC2X3_IfcExternallyDefinedTextFont_type,IFC2X3_IfcLibraryReference_type
    });
    IFC2X3_IfcConnectedFaceSet_type->set_subtypes({
        IFC2X3_IfcClosedShell_type,IFC2X3_IfcOpenShell_type
    });
    IFC2X3_IfcColourSpecification_type->set_subtypes({
        IFC2X3_IfcColourRgb_type
    });
    IFC2X3_IfcProperty_type->set_subtypes({
        IFC2X3_IfcComplexProperty_type,IFC2X3_IfcSimpleProperty_type
    });
    IFC2X3_IfcFlowMovingDeviceType_type->set_subtypes({
        IFC2X3_IfcCompressorType_type,IFC2X3_IfcFanType_type,IFC2X3_IfcPumpType_type
    });
    IFC2X3_IfcTopologicalRepresentationItem_type->set_subtypes({
        IFC2X3_IfcConnectedFaceSet_type,IFC2X3_IfcEdge_type,IFC2X3_IfcFace_type,IFC2X3_IfcFaceBound_type,IFC2X3_IfcLoop_type,IFC2X3_IfcPath_type,IFC2X3_IfcVertex_type
    });
    IFC2X3_IfcConnectionGeometry_type->set_subtypes({
        IFC2X3_IfcConnectionCurveGeometry_type,IFC2X3_IfcConnectionPointGeometry_type,IFC2X3_IfcConnectionPortGeometry_type,IFC2X3_IfcConnectionSurfaceGeometry_type
    });
    IFC2X3_IfcConnectionPointGeometry_type->set_subtypes({
        IFC2X3_IfcConnectionPointEccentricity_type
    });
    IFC2X3_IfcConstructionResource_type->set_subtypes({
        IFC2X3_IfcConstructionEquipmentResource_type,IFC2X3_IfcConstructionMaterialResource_type,IFC2X3_IfcConstructionProductResource_type,IFC2X3_IfcCrewResource_type,IFC2X3_IfcLaborResource_type,IFC2X3_IfcSubContractResource_type
    });
    IFC2X3_IfcResource_type->set_subtypes({
        IFC2X3_IfcConstructionResource_type
    });
    IFC2X3_IfcNamedUnit_type->set_subtypes({
        IFC2X3_IfcContextDependentUnit_type,IFC2X3_IfcConversionBasedUnit_type,IFC2X3_IfcSIUnit_type
    });
    IFC2X3_IfcAppliedValue_type->set_subtypes({
        IFC2X3_IfcCostValue_type,IFC2X3_IfcEnvironmentalImpactValue_type
    });
    IFC2X3_IfcSolidModel_type->set_subtypes({
        IFC2X3_IfcCsgSolid_type,IFC2X3_IfcManifoldSolidBrep_type,IFC2X3_IfcSweptAreaSolid_type,IFC2X3_IfcSweptDiskSolid_type
    });
    IFC2X3_IfcBoundedSurface_type->set_subtypes({
        IFC2X3_IfcCurveBoundedPlane_type,IFC2X3_IfcRectangularTrimmedSurface_type
    });
    IFC2X3_IfcPresentationStyle_type->set_subtypes({
        IFC2X3_IfcCurveStyle_type,IFC2X3_IfcFillAreaStyle_type,IFC2X3_IfcSurfaceStyle_type,IFC2X3_IfcSymbolStyle_type,IFC2X3_IfcTextStyle_type
    });
    IFC2X3_IfcDraughtingCalloutRelationship_type->set_subtypes({
        IFC2X3_IfcDimensionCalloutRelationship_type,IFC2X3_IfcDimensionPair_type
    });
    IFC2X3_IfcAnnotationCurveOccurrence_type->set_subtypes({
        IFC2X3_IfcDimensionCurve_type,IFC2X3_IfcProjectionCurve_type
    });
    IFC2X3_IfcDraughtingCallout_type->set_subtypes({
        IFC2X3_IfcDimensionCurveDirectedCallout_type,IFC2X3_IfcStructuredDimensionCallout_type
    });
    IFC2X3_IfcTerminatorSymbol_type->set_subtypes({
        IFC2X3_IfcDimensionCurveTerminator_type
    });
    IFC2X3_IfcElementComponent_type->set_subtypes({
        IFC2X3_IfcDiscreteAccessory_type,IFC2X3_IfcFastener_type
    });
    IFC2X3_IfcElementComponentType_type->set_subtypes({
        IFC2X3_IfcDiscreteAccessoryType_type,IFC2X3_IfcFastenerType_type
    });
    IFC2X3_IfcDistributionFlowElement_type->set_subtypes({
        IFC2X3_IfcDistributionChamberElement_type,IFC2X3_IfcEnergyConversionDevice_type,IFC2X3_IfcFlowController_type,IFC2X3_IfcFlowFitting_type,IFC2X3_IfcFlowMovingDevice_type,IFC2X3_IfcFlowSegment_type,IFC2X3_IfcFlowStorageDevice_type,IFC2X3_IfcFlowTerminal_type,IFC2X3_IfcFlowTreatmentDevice_type
    });
    IFC2X3_IfcDistributionFlowElementType_type->set_subtypes({
        IFC2X3_IfcDistributionChamberElementType_type,IFC2X3_IfcEnergyConversionDeviceType_type,IFC2X3_IfcFlowControllerType_type,IFC2X3_IfcFlowFittingType_type,IFC2X3_IfcFlowMovingDeviceType_type,IFC2X3_IfcFlowSegmentType_type,IFC2X3_IfcFlowStorageDeviceType_type,IFC2X3_IfcFlowTerminalType_type,IFC2X3_IfcFlowTreatmentDeviceType_type
    });
    IFC2X3_IfcDistributionElement_type->set_subtypes({
        IFC2X3_IfcDistributionControlElement_type,IFC2X3_IfcDistributionFlowElement_type
    });
    IFC2X3_IfcDistributionElementType_type->set_subtypes({
        IFC2X3_IfcDistributionControlElementType_type,IFC2X3_IfcDistributionFlowElementType_type
    });
    IFC2X3_IfcPort_type->set_subtypes({
        IFC2X3_IfcDistributionPort_type
    });
    IFC2X3_IfcPropertySetDefinition_type->set_subtypes({
        IFC2X3_IfcDoorLiningProperties_type,IFC2X3_IfcDoorPanelProperties_type,IFC2X3_IfcElementQuantity_type,IFC2X3_IfcEnergyProperties_type,IFC2X3_IfcFluidFlowProperties_type,IFC2X3_IfcPermeableCoveringProperties_type,IFC2X3_IfcPropertySet_type,IFC2X3_IfcReinforcementDefinitionProperties_type,IFC2X3_IfcServiceLifeFactor_type,IFC2X3_IfcSoundProperties_type,IFC2X3_IfcSoundValue_type,IFC2X3_IfcSpaceThermalLoadProperties_type,IFC2X3_IfcWindowLiningProperties_type,IFC2X3_IfcWindowPanelProperties_type
    });
    IFC2X3_IfcTypeProduct_type->set_subtypes({
        IFC2X3_IfcDoorStyle_type,IFC2X3_IfcElementType_type,IFC2X3_IfcWindowStyle_type
    });
    IFC2X3_IfcPreDefinedColour_type->set_subtypes({
        IFC2X3_IfcDraughtingPreDefinedColour_type
    });
    IFC2X3_IfcPreDefinedCurveFont_type->set_subtypes({
        IFC2X3_IfcDraughtingPreDefinedCurveFont_type
    });
    IFC2X3_IfcPreDefinedTextFont_type->set_subtypes({
        IFC2X3_IfcDraughtingPreDefinedTextFont_type,IFC2X3_IfcTextStyleFontModel_type
    });
    IFC2X3_IfcFlowTreatmentDeviceType_type->set_subtypes({
        IFC2X3_IfcDuctSilencerType_type,IFC2X3_IfcFilterType_type
    });
    IFC2X3_IfcEdge_type->set_subtypes({
        IFC2X3_IfcEdgeCurve_type,IFC2X3_IfcOrientedEdge_type,IFC2X3_IfcSubedge_type
    });
    IFC2X3_IfcFeatureElementSubtraction_type->set_subtypes({
        IFC2X3_IfcEdgeFeature_type,IFC2X3_IfcOpeningElement_type
    });
    IFC2X3_IfcLoop_type->set_subtypes({
        IFC2X3_IfcEdgeLoop_type,IFC2X3_IfcPolyLoop_type,IFC2X3_IfcVertexLoop_type
    });
    IFC2X3_IfcFlowController_type->set_subtypes({
        IFC2X3_IfcElectricDistributionPoint_type
    });
    IFC2X3_IfcFlowStorageDeviceType_type->set_subtypes({
        IFC2X3_IfcElectricFlowStorageDeviceType_type,IFC2X3_IfcTankType_type
    });
    IFC2X3_IfcEnergyProperties_type->set_subtypes({
        IFC2X3_IfcElectricalBaseProperties_type
    });
    IFC2X3_IfcSystem_type->set_subtypes({
        IFC2X3_IfcElectricalCircuit_type,IFC2X3_IfcStructuralAnalysisModel_type
    });
    IFC2X3_IfcMaterialProperties_type->set_subtypes({
        IFC2X3_IfcExtendedMaterialProperties_type,IFC2X3_IfcFuelProperties_type,IFC2X3_IfcGeneralMaterialProperties_type,IFC2X3_IfcHygroscopicMaterialProperties_type,IFC2X3_IfcMechanicalMaterialProperties_type,IFC2X3_IfcOpticalMaterialProperties_type,IFC2X3_IfcProductsOfCombustionProperties_type,IFC2X3_IfcThermalMaterialProperties_type,IFC2X3_IfcWaterProperties_type
    });
    IFC2X3_IfcSweptAreaSolid_type->set_subtypes({
        IFC2X3_IfcExtrudedAreaSolid_type,IFC2X3_IfcRevolvedAreaSolid_type,IFC2X3_IfcSurfaceCurveSweptAreaSolid_type
    });
    IFC2X3_IfcFaceBound_type->set_subtypes({
        IFC2X3_IfcFaceOuterBound_type
    });
    IFC2X3_IfcFace_type->set_subtypes({
        IFC2X3_IfcFaceSurface_type
    });
    IFC2X3_IfcManifoldSolidBrep_type->set_subtypes({
        IFC2X3_IfcFacetedBrep_type,IFC2X3_IfcFacetedBrepWithVoids_type
    });
    IFC2X3_IfcStructuralConnectionCondition_type->set_subtypes({
        IFC2X3_IfcFailureConnectionCondition_type,IFC2X3_IfcSlippageConnectionCondition_type
    });
    IFC2X3_IfcFeatureElement_type->set_subtypes({
        IFC2X3_IfcFeatureElementAddition_type,IFC2X3_IfcFeatureElementSubtraction_type
    });
    IFC2X3_IfcFurnishingElementType_type->set_subtypes({
        IFC2X3_IfcFurnitureType_type,IFC2X3_IfcSystemFurnitureElementType_type
    });
    IFC2X3_IfcProfileProperties_type->set_subtypes({
        IFC2X3_IfcGeneralProfileProperties_type,IFC2X3_IfcRibPlateProfileProperties_type
    });
    IFC2X3_IfcGeometricSet_type->set_subtypes({
        IFC2X3_IfcGeometricCurveSet_type
    });
    IFC2X3_IfcRepresentationContext_type->set_subtypes({
        IFC2X3_IfcGeometricRepresentationContext_type
    });
    IFC2X3_IfcRepresentationItem_type->set_subtypes({
        IFC2X3_IfcGeometricRepresentationItem_type,IFC2X3_IfcMappedItem_type,IFC2X3_IfcStyledItem_type,IFC2X3_IfcTopologicalRepresentationItem_type
    });
    IFC2X3_IfcGeometricRepresentationContext_type->set_subtypes({
        IFC2X3_IfcGeometricRepresentationSubContext_type
    });
    IFC2X3_IfcObjectPlacement_type->set_subtypes({
        IFC2X3_IfcGridPlacement_type,IFC2X3_IfcLocalPlacement_type
    });
    IFC2X3_IfcTimeSeries_type->set_subtypes({
        IFC2X3_IfcIrregularTimeSeries_type,IFC2X3_IfcRegularTimeSeries_type
    });
    IFC2X3_IfcLightSource_type->set_subtypes({
        IFC2X3_IfcLightSourceAmbient_type,IFC2X3_IfcLightSourceDirectional_type,IFC2X3_IfcLightSourceGoniometric_type,IFC2X3_IfcLightSourcePositional_type
    });
    IFC2X3_IfcLightSourcePositional_type->set_subtypes({
        IFC2X3_IfcLightSourceSpot_type
    });
    IFC2X3_IfcProductRepresentation_type->set_subtypes({
        IFC2X3_IfcMaterialDefinitionRepresentation_type,IFC2X3_IfcProductDefinitionShape_type
    });
    IFC2X3_IfcMechanicalMaterialProperties_type->set_subtypes({
        IFC2X3_IfcMechanicalConcreteMaterialProperties_type,IFC2X3_IfcMechanicalSteelMaterialProperties_type
    });
    IFC2X3_IfcFastener_type->set_subtypes({
        IFC2X3_IfcMechanicalFastener_type
    });
    IFC2X3_IfcFastenerType_type->set_subtypes({
        IFC2X3_IfcMechanicalFastenerType_type
    });
    IFC2X3_IfcConstraint_type->set_subtypes({
        IFC2X3_IfcMetric_type,IFC2X3_IfcObjective_type
    });
    IFC2X3_IfcTask_type->set_subtypes({
        IFC2X3_IfcMove_type,IFC2X3_IfcOrderAction_type
    });
    IFC2X3_IfcObjectDefinition_type->set_subtypes({
        IFC2X3_IfcObject_type,IFC2X3_IfcTypeObject_type
    });
    IFC2X3_IfcRoot_type->set_subtypes({
        IFC2X3_IfcObjectDefinition_type,IFC2X3_IfcPropertyDefinition_type,IFC2X3_IfcRelationship_type
    });
    IFC2X3_IfcActor_type->set_subtypes({
        IFC2X3_IfcOccupant_type
    });
    IFC2X3_IfcPhysicalQuantity_type->set_subtypes({
        IFC2X3_IfcPhysicalComplexQuantity_type,IFC2X3_IfcPhysicalSimpleQuantity_type
    });
    IFC2X3_IfcPlanarExtent_type->set_subtypes({
        IFC2X3_IfcPlanarBox_type
    });
    IFC2X3_IfcElementarySurface_type->set_subtypes({
        IFC2X3_IfcPlane_type
    });
    IFC2X3_IfcAddress_type->set_subtypes({
        IFC2X3_IfcPostalAddress_type,IFC2X3_IfcTelecomAddress_type
    });
    IFC2X3_IfcPreDefinedItem_type->set_subtypes({
        IFC2X3_IfcPreDefinedColour_type,IFC2X3_IfcPreDefinedCurveFont_type,IFC2X3_IfcPreDefinedSymbol_type,IFC2X3_IfcPreDefinedTextFont_type
    });
    IFC2X3_IfcPreDefinedSymbol_type->set_subtypes({
        IFC2X3_IfcPreDefinedDimensionSymbol_type,IFC2X3_IfcPreDefinedPointMarkerSymbol_type,IFC2X3_IfcPreDefinedTerminatorSymbol_type
    });
    IFC2X3_IfcPresentationLayerAssignment_type->set_subtypes({
        IFC2X3_IfcPresentationLayerWithStyle_type
    });
    IFC2X3_IfcProcess_type->set_subtypes({
        IFC2X3_IfcProcedure_type,IFC2X3_IfcTask_type
    });
    IFC2X3_IfcFeatureElementAddition_type->set_subtypes({
        IFC2X3_IfcProjectionElement_type
    });
    IFC2X3_IfcSimpleProperty_type->set_subtypes({
        IFC2X3_IfcPropertyBoundedValue_type,IFC2X3_IfcPropertyEnumeratedValue_type,IFC2X3_IfcPropertyListValue_type,IFC2X3_IfcPropertyReferenceValue_type,IFC2X3_IfcPropertySingleValue_type,IFC2X3_IfcPropertyTableValue_type
    });
    IFC2X3_IfcPropertyDefinition_type->set_subtypes({
        IFC2X3_IfcPropertySetDefinition_type
    });
    IFC2X3_IfcPhysicalSimpleQuantity_type->set_subtypes({
        IFC2X3_IfcQuantityArea_type,IFC2X3_IfcQuantityCount_type,IFC2X3_IfcQuantityLength_type,IFC2X3_IfcQuantityTime_type,IFC2X3_IfcQuantityVolume_type,IFC2X3_IfcQuantityWeight_type
    });
    IFC2X3_IfcBezierCurve_type->set_subtypes({
        IFC2X3_IfcRationalBezierCurve_type
    });
    IFC2X3_IfcRectangleProfileDef_type->set_subtypes({
        IFC2X3_IfcRectangleHollowProfileDef_type,IFC2X3_IfcRoundedRectangleProfileDef_type
    });
    IFC2X3_IfcReinforcingElement_type->set_subtypes({
        IFC2X3_IfcReinforcingBar_type,IFC2X3_IfcReinforcingMesh_type,IFC2X3_IfcTendon_type,IFC2X3_IfcTendonAnchor_type
    });
    IFC2X3_IfcRelDecomposes_type->set_subtypes({
        IFC2X3_IfcRelAggregates_type,IFC2X3_IfcRelNests_type
    });
    IFC2X3_IfcRelationship_type->set_subtypes({
        IFC2X3_IfcRelAssigns_type,IFC2X3_IfcRelAssociates_type,IFC2X3_IfcRelConnects_type,IFC2X3_IfcRelDecomposes_type,IFC2X3_IfcRelDefines_type
    });
    IFC2X3_IfcRelAssignsToControl_type->set_subtypes({
        IFC2X3_IfcRelAssignsTasks_type,IFC2X3_IfcRelAssignsToProjectOrder_type,IFC2X3_IfcRelSchedulesCostItems_type
    });
    IFC2X3_IfcRelAssigns_type->set_subtypes({
        IFC2X3_IfcRelAssignsToActor_type,IFC2X3_IfcRelAssignsToControl_type,IFC2X3_IfcRelAssignsToGroup_type,IFC2X3_IfcRelAssignsToProcess_type,IFC2X3_IfcRelAssignsToProduct_type,IFC2X3_IfcRelAssignsToResource_type
    });
    IFC2X3_IfcRelAssociates_type->set_subtypes({
        IFC2X3_IfcRelAssociatesAppliedValue_type,IFC2X3_IfcRelAssociatesApproval_type,IFC2X3_IfcRelAssociatesClassification_type,IFC2X3_IfcRelAssociatesConstraint_type,IFC2X3_IfcRelAssociatesDocument_type,IFC2X3_IfcRelAssociatesLibrary_type,IFC2X3_IfcRelAssociatesMaterial_type,IFC2X3_IfcRelAssociatesProfileProperties_type
    });
    IFC2X3_IfcRelConnects_type->set_subtypes({
        IFC2X3_IfcRelConnectsElements_type,IFC2X3_IfcRelConnectsPortToElement_type,IFC2X3_IfcRelConnectsPorts_type,IFC2X3_IfcRelConnectsStructuralActivity_type,IFC2X3_IfcRelConnectsStructuralElement_type,IFC2X3_IfcRelConnectsStructuralMember_type,IFC2X3_IfcRelContainedInSpatialStructure_type,IFC2X3_IfcRelCoversBldgElements_type,IFC2X3_IfcRelCoversSpaces_type,IFC2X3_IfcRelFillsElement_type,IFC2X3_IfcRelFlowControlElements_type,IFC2X3_IfcRelInteractionRequirements_type,IFC2X3_IfcRelProjectsElement_type,IFC2X3_IfcRelReferencedInSpatialStructure_type,IFC2X3_IfcRelSequence_type,IFC2X3_IfcRelServicesBuildings_type,IFC2X3_IfcRelSpaceBoundary_type,IFC2X3_IfcRelVoidsElement_type
    });
    IFC2X3_IfcRelConnectsElements_type->set_subtypes({
        IFC2X3_IfcRelConnectsPathElements_type,IFC2X3_IfcRelConnectsWithRealizingElements_type
    });
    IFC2X3_IfcRelConnectsStructuralMember_type->set_subtypes({
        IFC2X3_IfcRelConnectsWithEccentricity_type
    });
    IFC2X3_IfcRelDefines_type->set_subtypes({
        IFC2X3_IfcRelDefinesByProperties_type,IFC2X3_IfcRelDefinesByType_type
    });
    IFC2X3_IfcRelAssignsToActor_type->set_subtypes({
        IFC2X3_IfcRelOccupiesSpaces_type
    });
    IFC2X3_IfcRelDefinesByProperties_type->set_subtypes({
        IFC2X3_IfcRelOverridesProperties_type
    });
    IFC2X3_IfcRepresentation_type->set_subtypes({
        IFC2X3_IfcShapeModel_type,IFC2X3_IfcStyleModel_type
    });
    IFC2X3_IfcShapeModel_type->set_subtypes({
        IFC2X3_IfcShapeRepresentation_type,IFC2X3_IfcTopologyRepresentation_type
    });
    IFC2X3_IfcSpatialStructureElementType_type->set_subtypes({
        IFC2X3_IfcSpaceType_type
    });
    IFC2X3_IfcStructuralActivity_type->set_subtypes({
        IFC2X3_IfcStructuralAction_type,IFC2X3_IfcStructuralReaction_type
    });
    IFC2X3_IfcStructuralItem_type->set_subtypes({
        IFC2X3_IfcStructuralConnection_type,IFC2X3_IfcStructuralMember_type
    });
    IFC2X3_IfcStructuralConnection_type->set_subtypes({
        IFC2X3_IfcStructuralCurveConnection_type,IFC2X3_IfcStructuralPointConnection_type,IFC2X3_IfcStructuralSurfaceConnection_type
    });
    IFC2X3_IfcStructuralMember_type->set_subtypes({
        IFC2X3_IfcStructuralCurveMember_type,IFC2X3_IfcStructuralSurfaceMember_type
    });
    IFC2X3_IfcStructuralCurveMember_type->set_subtypes({
        IFC2X3_IfcStructuralCurveMemberVarying_type
    });
    IFC2X3_IfcStructuralAction_type->set_subtypes({
        IFC2X3_IfcStructuralLinearAction_type,IFC2X3_IfcStructuralPlanarAction_type,IFC2X3_IfcStructuralPointAction_type
    });
    IFC2X3_IfcStructuralLinearAction_type->set_subtypes({
        IFC2X3_IfcStructuralLinearActionVarying_type
    });
    IFC2X3_IfcStructuralLoadStatic_type->set_subtypes({
        IFC2X3_IfcStructuralLoadLinearForce_type,IFC2X3_IfcStructuralLoadPlanarForce_type,IFC2X3_IfcStructuralLoadSingleDisplacement_type,IFC2X3_IfcStructuralLoadSingleForce_type,IFC2X3_IfcStructuralLoadTemperature_type
    });
    IFC2X3_IfcStructuralLoadSingleDisplacement_type->set_subtypes({
        IFC2X3_IfcStructuralLoadSingleDisplacementDistortion_type
    });
    IFC2X3_IfcStructuralLoadSingleForce_type->set_subtypes({
        IFC2X3_IfcStructuralLoadSingleForceWarping_type
    });
    IFC2X3_IfcStructuralLoad_type->set_subtypes({
        IFC2X3_IfcStructuralLoadStatic_type
    });
    IFC2X3_IfcStructuralPlanarAction_type->set_subtypes({
        IFC2X3_IfcStructuralPlanarActionVarying_type
    });
    IFC2X3_IfcStructuralReaction_type->set_subtypes({
        IFC2X3_IfcStructuralPointReaction_type
    });
    IFC2X3_IfcGeneralProfileProperties_type->set_subtypes({
        IFC2X3_IfcStructuralProfileProperties_type
    });
    IFC2X3_IfcStructuralProfileProperties_type->set_subtypes({
        IFC2X3_IfcStructuralSteelProfileProperties_type
    });
    IFC2X3_IfcStructuralSurfaceMember_type->set_subtypes({
        IFC2X3_IfcStructuralSurfaceMemberVarying_type
    });
    IFC2X3_IfcStyleModel_type->set_subtypes({
        IFC2X3_IfcStyledRepresentation_type
    });
    IFC2X3_IfcSweptSurface_type->set_subtypes({
        IFC2X3_IfcSurfaceOfLinearExtrusion_type,IFC2X3_IfcSurfaceOfRevolution_type
    });
    IFC2X3_IfcSurfaceStyleShading_type->set_subtypes({
        IFC2X3_IfcSurfaceStyleRendering_type
    });
    IFC2X3_IfcAnnotationSymbolOccurrence_type->set_subtypes({
        IFC2X3_IfcTerminatorSymbol_type
    });
    IFC2X3_IfcTextLiteral_type->set_subtypes({
        IFC2X3_IfcTextLiteralWithExtent_type
    });
    IFC2X3_IfcTextureCoordinate_type->set_subtypes({
        IFC2X3_IfcTextureCoordinateGenerator_type,IFC2X3_IfcTextureMap_type
    });
    IFC2X3_IfcOneDirectionRepeatFactor_type->set_subtypes({
        IFC2X3_IfcTwoDirectionRepeatFactor_type
    });
    IFC2X3_IfcTypeObject_type->set_subtypes({
        IFC2X3_IfcTypeProduct_type
    });
    IFC2X3_IfcVertex_type->set_subtypes({
        IFC2X3_IfcVertexPoint_type
    });
    IFC2X3_IfcDiscreteAccessoryType_type->set_subtypes({
        IFC2X3_IfcVibrationIsolatorType_type
    });
    IFC2X3_IfcWall_type->set_subtypes({
        IFC2X3_IfcWallStandardCase_type
    });
    IFC2X3_IfcWorkControl_type->set_subtypes({
        IFC2X3_IfcWorkPlan_type,IFC2X3_IfcWorkSchedule_type
    });

    std::vector<const declaration*> declarations= {
    IFC2X3_Ifc2DCompositeCurve_type,
    IFC2X3_IfcAbsorbedDoseMeasure_type,
    IFC2X3_IfcAccelerationMeasure_type,
    IFC2X3_IfcActionRequest_type,
    IFC2X3_IfcActionSourceTypeEnum_type,
    IFC2X3_IfcActionTypeEnum_type,
    IFC2X3_IfcActor_type,
    IFC2X3_IfcActorRole_type,
    IFC2X3_IfcActorSelect_type,
    IFC2X3_IfcActuatorType_type,
    IFC2X3_IfcActuatorTypeEnum_type,
    IFC2X3_IfcAddress_type,
    IFC2X3_IfcAddressTypeEnum_type,
    IFC2X3_IfcAheadOrBehind_type,
    IFC2X3_IfcAirTerminalBoxType_type,
    IFC2X3_IfcAirTerminalBoxTypeEnum_type,
    IFC2X3_IfcAirTerminalType_type,
    IFC2X3_IfcAirTerminalTypeEnum_type,
    IFC2X3_IfcAirToAirHeatRecoveryType_type,
    IFC2X3_IfcAirToAirHeatRecoveryTypeEnum_type,
    IFC2X3_IfcAlarmType_type,
    IFC2X3_IfcAlarmTypeEnum_type,
    IFC2X3_IfcAmountOfSubstanceMeasure_type,
    IFC2X3_IfcAnalysisModelTypeEnum_type,
    IFC2X3_IfcAnalysisTheoryTypeEnum_type,
    IFC2X3_IfcAngularDimension_type,
    IFC2X3_IfcAngularVelocityMeasure_type,
    IFC2X3_IfcAnnotation_type,
    IFC2X3_IfcAnnotationCurveOccurrence_type,
    IFC2X3_IfcAnnotationFillArea_type,
    IFC2X3_IfcAnnotationFillAreaOccurrence_type,
    IFC2X3_IfcAnnotationOccurrence_type,
    IFC2X3_IfcAnnotationSurface_type,
    IFC2X3_IfcAnnotationSurfaceOccurrence_type,
    IFC2X3_IfcAnnotationSymbolOccurrence_type,
    IFC2X3_IfcAnnotationTextOccurrence_type,
    IFC2X3_IfcApplication_type,
    IFC2X3_IfcAppliedValue_type,
    IFC2X3_IfcAppliedValueRelationship_type,
    IFC2X3_IfcAppliedValueSelect_type,
    IFC2X3_IfcApproval_type,
    IFC2X3_IfcApprovalActorRelationship_type,
    IFC2X3_IfcApprovalPropertyRelationship_type,
    IFC2X3_IfcApprovalRelationship_type,
    IFC2X3_IfcArbitraryClosedProfileDef_type,
    IFC2X3_IfcArbitraryOpenProfileDef_type,
    IFC2X3_IfcArbitraryProfileDefWithVoids_type,
    IFC2X3_IfcAreaMeasure_type,
    IFC2X3_IfcArithmeticOperatorEnum_type,
    IFC2X3_IfcAssemblyPlaceEnum_type,
    IFC2X3_IfcAsset_type,
    IFC2X3_IfcAsymmetricIShapeProfileDef_type,
    IFC2X3_IfcAxis1Placement_type,
    IFC2X3_IfcAxis2Placement_type,
    IFC2X3_IfcAxis2Placement2D_type,
    IFC2X3_IfcAxis2Placement3D_type,
    IFC2X3_IfcBeam_type,
    IFC2X3_IfcBeamType_type,
    IFC2X3_IfcBeamTypeEnum_type,
    IFC2X3_IfcBenchmarkEnum_type,
    IFC2X3_IfcBezierCurve_type,
    IFC2X3_IfcBlobTexture_type,
    IFC2X3_IfcBlock_type,
    IFC2X3_IfcBoilerType_type,
    IFC2X3_IfcBoilerTypeEnum_type,
    IFC2X3_IfcBoolean_type,
    IFC2X3_IfcBooleanClippingResult_type,
    IFC2X3_IfcBooleanOperand_type,
    IFC2X3_IfcBooleanOperator_type,
    IFC2X3_IfcBooleanResult_type,
    IFC2X3_IfcBoundaryCondition_type,
    IFC2X3_IfcBoundaryEdgeCondition_type,
    IFC2X3_IfcBoundaryFaceCondition_type,
    IFC2X3_IfcBoundaryNodeCondition_type,
    IFC2X3_IfcBoundaryNodeConditionWarping_type,
    IFC2X3_IfcBoundedCurve_type,
    IFC2X3_IfcBoundedSurface_type,
    IFC2X3_IfcBoundingBox_type,
    IFC2X3_IfcBoxAlignment_type,
    IFC2X3_IfcBoxedHalfSpace_type,
    IFC2X3_IfcBSplineCurve_type,
    IFC2X3_IfcBSplineCurveForm_type,
    IFC2X3_IfcBuilding_type,
    IFC2X3_IfcBuildingElement_type,
    IFC2X3_IfcBuildingElementComponent_type,
    IFC2X3_IfcBuildingElementPart_type,
    IFC2X3_IfcBuildingElementProxy_type,
    IFC2X3_IfcBuildingElementProxyType_type,
    IFC2X3_IfcBuildingElementProxyTypeEnum_type,
    IFC2X3_IfcBuildingElementType_type,
    IFC2X3_IfcBuildingStorey_type,
    IFC2X3_IfcCableCarrierFittingType_type,
    IFC2X3_IfcCableCarrierFittingTypeEnum_type,
    IFC2X3_IfcCableCarrierSegmentType_type,
    IFC2X3_IfcCableCarrierSegmentTypeEnum_type,
    IFC2X3_IfcCableSegmentType_type,
    IFC2X3_IfcCableSegmentTypeEnum_type,
    IFC2X3_IfcCalendarDate_type,
    IFC2X3_IfcCartesianPoint_type,
    IFC2X3_IfcCartesianTransformationOperator_type,
    IFC2X3_IfcCartesianTransformationOperator2D_type,
    IFC2X3_IfcCartesianTransformationOperator2DnonUniform_type,
    IFC2X3_IfcCartesianTransformationOperator3D_type,
    IFC2X3_IfcCartesianTransformationOperator3DnonUniform_type,
    IFC2X3_IfcCenterLineProfileDef_type,
    IFC2X3_IfcChamferEdgeFeature_type,
    IFC2X3_IfcChangeActionEnum_type,
    IFC2X3_IfcCharacterStyleSelect_type,
    IFC2X3_IfcChillerType_type,
    IFC2X3_IfcChillerTypeEnum_type,
    IFC2X3_IfcCircle_type,
    IFC2X3_IfcCircleHollowProfileDef_type,
    IFC2X3_IfcCircleProfileDef_type,
    IFC2X3_IfcClassification_type,
    IFC2X3_IfcClassificationItem_type,
    IFC2X3_IfcClassificationItemRelationship_type,
    IFC2X3_IfcClassificationNotation_type,
    IFC2X3_IfcClassificationNotationFacet_type,
    IFC2X3_IfcClassificationNotationSelect_type,
    IFC2X3_IfcClassificationReference_type,
    IFC2X3_IfcClosedShell_type,
    IFC2X3_IfcCoilType_type,
    IFC2X3_IfcCoilTypeEnum_type,
    IFC2X3_IfcColour_type,
    IFC2X3_IfcColourOrFactor_type,
    IFC2X3_IfcColourRgb_type,
    IFC2X3_IfcColourSpecification_type,
    IFC2X3_IfcColumn_type,
    IFC2X3_IfcColumnType_type,
    IFC2X3_IfcColumnTypeEnum_type,
    IFC2X3_IfcComplexNumber_type,
    IFC2X3_IfcComplexProperty_type,
    IFC2X3_IfcCompositeCurve_type,
    IFC2X3_IfcCompositeCurveSegment_type,
    IFC2X3_IfcCompositeProfileDef_type,
    IFC2X3_IfcCompoundPlaneAngleMeasure_type,
    IFC2X3_IfcCompressorType_type,
    IFC2X3_IfcCompressorTypeEnum_type,
    IFC2X3_IfcCondenserType_type,
    IFC2X3_IfcCondenserTypeEnum_type,
    IFC2X3_IfcCondition_type,
    IFC2X3_IfcConditionCriterion_type,
    IFC2X3_IfcConditionCriterionSelect_type,
    IFC2X3_IfcConic_type,
    IFC2X3_IfcConnectedFaceSet_type,
    IFC2X3_IfcConnectionCurveGeometry_type,
    IFC2X3_IfcConnectionGeometry_type,
    IFC2X3_IfcConnectionPointEccentricity_type,
    IFC2X3_IfcConnectionPointGeometry_type,
    IFC2X3_IfcConnectionPortGeometry_type,
    IFC2X3_IfcConnectionSurfaceGeometry_type,
    IFC2X3_IfcConnectionTypeEnum_type,
    IFC2X3_IfcConstraint_type,
    IFC2X3_IfcConstraintAggregationRelationship_type,
    IFC2X3_IfcConstraintClassificationRelationship_type,
    IFC2X3_IfcConstraintEnum_type,
    IFC2X3_IfcConstraintRelationship_type,
    IFC2X3_IfcConstructionEquipmentResource_type,
    IFC2X3_IfcConstructionMaterialResource_type,
    IFC2X3_IfcConstructionProductResource_type,
    IFC2X3_IfcConstructionResource_type,
    IFC2X3_IfcContextDependentMeasure_type,
    IFC2X3_IfcContextDependentUnit_type,
    IFC2X3_IfcControl_type,
    IFC2X3_IfcControllerType_type,
    IFC2X3_IfcControllerTypeEnum_type,
    IFC2X3_IfcConversionBasedUnit_type,
    IFC2X3_IfcCooledBeamType_type,
    IFC2X3_IfcCooledBeamTypeEnum_type,
    IFC2X3_IfcCoolingTowerType_type,
    IFC2X3_IfcCoolingTowerTypeEnum_type,
    IFC2X3_IfcCoordinatedUniversalTimeOffset_type,
    IFC2X3_IfcCostItem_type,
    IFC2X3_IfcCostSchedule_type,
    IFC2X3_IfcCostScheduleTypeEnum_type,
    IFC2X3_IfcCostValue_type,
    IFC2X3_IfcCountMeasure_type,
    IFC2X3_IfcCovering_type,
    IFC2X3_IfcCoveringType_type,
    IFC2X3_IfcCoveringTypeEnum_type,
    IFC2X3_IfcCraneRailAShapeProfileDef_type,
    IFC2X3_IfcCraneRailFShapeProfileDef_type,
    IFC2X3_IfcCrewResource_type,
    IFC2X3_IfcCsgPrimitive3D_type,
    IFC2X3_IfcCsgSelect_type,
    IFC2X3_IfcCsgSolid_type,
    IFC2X3_IfcCShapeProfileDef_type,
    IFC2X3_IfcCurrencyEnum_type,
    IFC2X3_IfcCurrencyRelationship_type,
    IFC2X3_IfcCurtainWall_type,
    IFC2X3_IfcCurtainWallType_type,
    IFC2X3_IfcCurtainWallTypeEnum_type,
    IFC2X3_IfcCurvatureMeasure_type,
    IFC2X3_IfcCurve_type,
    IFC2X3_IfcCurveBoundedPlane_type,
    IFC2X3_IfcCurveFontOrScaledCurveFontSelect_type,
    IFC2X3_IfcCurveOrEdgeCurve_type,
    IFC2X3_IfcCurveStyle_type,
    IFC2X3_IfcCurveStyleFont_type,
    IFC2X3_IfcCurveStyleFontAndScaling_type,
    IFC2X3_IfcCurveStyleFontPattern_type,
    IFC2X3_IfcCurveStyleFontSelect_type,
    IFC2X3_IfcDamperType_type,
    IFC2X3_IfcDamperTypeEnum_type,
    IFC2X3_IfcDataOriginEnum_type,
    IFC2X3_IfcDateAndTime_type,
    IFC2X3_IfcDateTimeSelect_type,
    IFC2X3_IfcDayInMonthNumber_type,
    IFC2X3_IfcDaylightSavingHour_type,
    IFC2X3_IfcDefinedSymbol_type,
    IFC2X3_IfcDefinedSymbolSelect_type,
    IFC2X3_IfcDerivedMeasureValue_type,
    IFC2X3_IfcDerivedProfileDef_type,
    IFC2X3_IfcDerivedUnit_type,
    IFC2X3_IfcDerivedUnitElement_type,
    IFC2X3_IfcDerivedUnitEnum_type,
    IFC2X3_IfcDescriptiveMeasure_type,
    IFC2X3_IfcDiameterDimension_type,
    IFC2X3_IfcDimensionalExponents_type,
    IFC2X3_IfcDimensionCalloutRelationship_type,
    IFC2X3_IfcDimensionCount_type,
    IFC2X3_IfcDimensionCurve_type,
    IFC2X3_IfcDimensionCurveDirectedCallout_type,
    IFC2X3_IfcDimensionCurveTerminator_type,
    IFC2X3_IfcDimensionExtentUsage_type,
    IFC2X3_IfcDimensionPair_type,
    IFC2X3_IfcDirection_type,
    IFC2X3_IfcDirectionSenseEnum_type,
    IFC2X3_IfcDiscreteAccessory_type,
    IFC2X3_IfcDiscreteAccessoryType_type,
    IFC2X3_IfcDistributionChamberElement_type,
    IFC2X3_IfcDistributionChamberElementType_type,
    IFC2X3_IfcDistributionChamberElementTypeEnum_type,
    IFC2X3_IfcDistributionControlElement_type,
    IFC2X3_IfcDistributionControlElementType_type,
    IFC2X3_IfcDistributionElement_type,
    IFC2X3_IfcDistributionElementType_type,
    IFC2X3_IfcDistributionFlowElement_type,
    IFC2X3_IfcDistributionFlowElementType_type,
    IFC2X3_IfcDistributionPort_type,
    IFC2X3_IfcDocumentConfidentialityEnum_type,
    IFC2X3_IfcDocumentElectronicFormat_type,
    IFC2X3_IfcDocumentInformation_type,
    IFC2X3_IfcDocumentInformationRelationship_type,
    IFC2X3_IfcDocumentReference_type,
    IFC2X3_IfcDocumentSelect_type,
    IFC2X3_IfcDocumentStatusEnum_type,
    IFC2X3_IfcDoor_type,
    IFC2X3_IfcDoorLiningProperties_type,
    IFC2X3_IfcDoorPanelOperationEnum_type,
    IFC2X3_IfcDoorPanelPositionEnum_type,
    IFC2X3_IfcDoorPanelProperties_type,
    IFC2X3_IfcDoorStyle_type,
    IFC2X3_IfcDoorStyleConstructionEnum_type,
    IFC2X3_IfcDoorStyleOperationEnum_type,
    IFC2X3_IfcDoseEquivalentMeasure_type,
    IFC2X3_IfcDraughtingCallout_type,
    IFC2X3_IfcDraughtingCalloutElement_type,
    IFC2X3_IfcDraughtingCalloutRelationship_type,
    IFC2X3_IfcDraughtingPreDefinedColour_type,
    IFC2X3_IfcDraughtingPreDefinedCurveFont_type,
    IFC2X3_IfcDraughtingPreDefinedTextFont_type,
    IFC2X3_IfcDuctFittingType_type,
    IFC2X3_IfcDuctFittingTypeEnum_type,
    IFC2X3_IfcDuctSegmentType_type,
    IFC2X3_IfcDuctSegmentTypeEnum_type,
    IFC2X3_IfcDuctSilencerType_type,
    IFC2X3_IfcDuctSilencerTypeEnum_type,
    IFC2X3_IfcDynamicViscosityMeasure_type,
    IFC2X3_IfcEdge_type,
    IFC2X3_IfcEdgeCurve_type,
    IFC2X3_IfcEdgeFeature_type,
    IFC2X3_IfcEdgeLoop_type,
    IFC2X3_IfcElectricalBaseProperties_type,
    IFC2X3_IfcElectricalCircuit_type,
    IFC2X3_IfcElectricalElement_type,
    IFC2X3_IfcElectricApplianceType_type,
    IFC2X3_IfcElectricApplianceTypeEnum_type,
    IFC2X3_IfcElectricCapacitanceMeasure_type,
    IFC2X3_IfcElectricChargeMeasure_type,
    IFC2X3_IfcElectricConductanceMeasure_type,
    IFC2X3_IfcElectricCurrentEnum_type,
    IFC2X3_IfcElectricCurrentMeasure_type,
    IFC2X3_IfcElectricDistributionPoint_type,
    IFC2X3_IfcElectricDistributionPointFunctionEnum_type,
    IFC2X3_IfcElectricFlowStorageDeviceType_type,
    IFC2X3_IfcElectricFlowStorageDeviceTypeEnum_type,
    IFC2X3_IfcElectricGeneratorType_type,
    IFC2X3_IfcElectricGeneratorTypeEnum_type,
    IFC2X3_IfcElectricHeaterType_type,
    IFC2X3_IfcElectricHeaterTypeEnum_type,
    IFC2X3_IfcElectricMotorType_type,
    IFC2X3_IfcElectricMotorTypeEnum_type,
    IFC2X3_IfcElectricResistanceMeasure_type,
    IFC2X3_IfcElectricTimeControlType_type,
    IFC2X3_IfcElectricTimeControlTypeEnum_type,
    IFC2X3_IfcElectricVoltageMeasure_type,
    IFC2X3_IfcElement_type,
    IFC2X3_IfcElementarySurface_type,
    IFC2X3_IfcElementAssembly_type,
    IFC2X3_IfcElementAssemblyTypeEnum_type,
    IFC2X3_IfcElementComponent_type,
    IFC2X3_IfcElementComponentType_type,
    IFC2X3_IfcElementCompositionEnum_type,
    IFC2X3_IfcElementQuantity_type,
    IFC2X3_IfcElementType_type,
    IFC2X3_IfcEllipse_type,
    IFC2X3_IfcEllipseProfileDef_type,
    IFC2X3_IfcEnergyConversionDevice_type,
    IFC2X3_IfcEnergyConversionDeviceType_type,
    IFC2X3_IfcEnergyMeasure_type,
    IFC2X3_IfcEnergyProperties_type,
    IFC2X3_IfcEnergySequenceEnum_type,
    IFC2X3_IfcEnvironmentalImpactCategoryEnum_type,
    IFC2X3_IfcEnvironmentalImpactValue_type,
    IFC2X3_IfcEquipmentElement_type,
    IFC2X3_IfcEquipmentStandard_type,
    IFC2X3_IfcEvaporativeCoolerType_type,
    IFC2X3_IfcEvaporativeCoolerTypeEnum_type,
    IFC2X3_IfcEvaporatorType_type,
    IFC2X3_IfcEvaporatorTypeEnum_type,
    IFC2X3_IfcExtendedMaterialProperties_type,
    IFC2X3_IfcExternallyDefinedHatchStyle_type,
    IFC2X3_IfcExternallyDefinedSurfaceStyle_type,
    IFC2X3_IfcExternallyDefinedSymbol_type,
    IFC2X3_IfcExternallyDefinedTextFont_type,
    IFC2X3_IfcExternalReference_type,
    IFC2X3_IfcExtrudedAreaSolid_type,
    IFC2X3_IfcFace_type,
    IFC2X3_IfcFaceBasedSurfaceModel_type,
    IFC2X3_IfcFaceBound_type,
    IFC2X3_IfcFaceOuterBound_type,
    IFC2X3_IfcFaceSurface_type,
    IFC2X3_IfcFacetedBrep_type,
    IFC2X3_IfcFacetedBrepWithVoids_type,
    IFC2X3_IfcFailureConnectionCondition_type,
    IFC2X3_IfcFanType_type,
    IFC2X3_IfcFanTypeEnum_type,
    IFC2X3_IfcFastener_type,
    IFC2X3_IfcFastenerType_type,
    IFC2X3_IfcFeatureElement_type,
    IFC2X3_IfcFeatureElementAddition_type,
    IFC2X3_IfcFeatureElementSubtraction_type,
    IFC2X3_IfcFillAreaStyle_type,
    IFC2X3_IfcFillAreaStyleHatching_type,
    IFC2X3_IfcFillAreaStyleTiles_type,
    IFC2X3_IfcFillAreaStyleTileShapeSelect_type,
    IFC2X3_IfcFillAreaStyleTileSymbolWithStyle_type,
    IFC2X3_IfcFillStyleSelect_type,
    IFC2X3_IfcFilterType_type,
    IFC2X3_IfcFilterTypeEnum_type,
    IFC2X3_IfcFireSuppressionTerminalType_type,
    IFC2X3_IfcFireSuppressionTerminalTypeEnum_type,
    IFC2X3_IfcFlowController_type,
    IFC2X3_IfcFlowControllerType_type,
    IFC2X3_IfcFlowDirectionEnum_type,
    IFC2X3_IfcFlowFitting_type,
    IFC2X3_IfcFlowFittingType_type,
    IFC2X3_IfcFlowInstrumentType_type,
    IFC2X3_IfcFlowInstrumentTypeEnum_type,
    IFC2X3_IfcFlowMeterType_type,
    IFC2X3_IfcFlowMeterTypeEnum_type,
    IFC2X3_IfcFlowMovingDevice_type,
    IFC2X3_IfcFlowMovingDeviceType_type,
    IFC2X3_IfcFlowSegment_type,
    IFC2X3_IfcFlowSegmentType_type,
    IFC2X3_IfcFlowStorageDevice_type,
    IFC2X3_IfcFlowStorageDeviceType_type,
    IFC2X3_IfcFlowTerminal_type,
    IFC2X3_IfcFlowTerminalType_type,
    IFC2X3_IfcFlowTreatmentDevice_type,
    IFC2X3_IfcFlowTreatmentDeviceType_type,
    IFC2X3_IfcFluidFlowProperties_type,
    IFC2X3_IfcFontStyle_type,
    IFC2X3_IfcFontVariant_type,
    IFC2X3_IfcFontWeight_type,
    IFC2X3_IfcFooting_type,
    IFC2X3_IfcFootingTypeEnum_type,
    IFC2X3_IfcForceMeasure_type,
    IFC2X3_IfcFrequencyMeasure_type,
    IFC2X3_IfcFuelProperties_type,
    IFC2X3_IfcFurnishingElement_type,
    IFC2X3_IfcFurnishingElementType_type,
    IFC2X3_IfcFurnitureStandard_type,
    IFC2X3_IfcFurnitureType_type,
    IFC2X3_IfcGasTerminalType_type,
    IFC2X3_IfcGasTerminalTypeEnum_type,
    IFC2X3_IfcGeneralMaterialProperties_type,
    IFC2X3_IfcGeneralProfileProperties_type,
    IFC2X3_IfcGeometricCurveSet_type,
    IFC2X3_IfcGeometricProjectionEnum_type,
    IFC2X3_IfcGeometricRepresentationContext_type,
    IFC2X3_IfcGeometricRepresentationItem_type,
    IFC2X3_IfcGeometricRepresentationSubContext_type,
    IFC2X3_IfcGeometricSet_type,
    IFC2X3_IfcGeometricSetSelect_type,
    IFC2X3_IfcGloballyUniqueId_type,
    IFC2X3_IfcGlobalOrLocalEnum_type,
    IFC2X3_IfcGrid_type,
    IFC2X3_IfcGridAxis_type,
    IFC2X3_IfcGridPlacement_type,
    IFC2X3_IfcGroup_type,
    IFC2X3_IfcHalfSpaceSolid_type,
    IFC2X3_IfcHatchLineDistanceSelect_type,
    IFC2X3_IfcHeatExchangerType_type,
    IFC2X3_IfcHeatExchangerTypeEnum_type,
    IFC2X3_IfcHeatFluxDensityMeasure_type,
    IFC2X3_IfcHeatingValueMeasure_type,
    IFC2X3_IfcHourInDay_type,
    IFC2X3_IfcHumidifierType_type,
    IFC2X3_IfcHumidifierTypeEnum_type,
    IFC2X3_IfcHygroscopicMaterialProperties_type,
    IFC2X3_IfcIdentifier_type,
    IFC2X3_IfcIlluminanceMeasure_type,
    IFC2X3_IfcImageTexture_type,
    IFC2X3_IfcInductanceMeasure_type,
    IFC2X3_IfcInteger_type,
    IFC2X3_IfcIntegerCountRateMeasure_type,
    IFC2X3_IfcInternalOrExternalEnum_type,
    IFC2X3_IfcInventory_type,
    IFC2X3_IfcInventoryTypeEnum_type,
    IFC2X3_IfcIonConcentrationMeasure_type,
    IFC2X3_IfcIrregularTimeSeries_type,
    IFC2X3_IfcIrregularTimeSeriesValue_type,
    IFC2X3_IfcIShapeProfileDef_type,
    IFC2X3_IfcIsothermalMoistureCapacityMeasure_type,
    IFC2X3_IfcJunctionBoxType_type,
    IFC2X3_IfcJunctionBoxTypeEnum_type,
    IFC2X3_IfcKinematicViscosityMeasure_type,
    IFC2X3_IfcLabel_type,
    IFC2X3_IfcLaborResource_type,
    IFC2X3_IfcLampType_type,
    IFC2X3_IfcLampTypeEnum_type,
    IFC2X3_IfcLayeredItem_type,
    IFC2X3_IfcLayerSetDirectionEnum_type,
    IFC2X3_IfcLengthMeasure_type,
    IFC2X3_IfcLibraryInformation_type,
    IFC2X3_IfcLibraryReference_type,
    IFC2X3_IfcLibrarySelect_type,
    IFC2X3_IfcLightDistributionCurveEnum_type,
    IFC2X3_IfcLightDistributionData_type,
    IFC2X3_IfcLightDistributionDataSourceSelect_type,
    IFC2X3_IfcLightEmissionSourceEnum_type,
    IFC2X3_IfcLightFixtureType_type,
    IFC2X3_IfcLightFixtureTypeEnum_type,
    IFC2X3_IfcLightIntensityDistribution_type,
    IFC2X3_IfcLightSource_type,
    IFC2X3_IfcLightSourceAmbient_type,
    IFC2X3_IfcLightSourceDirectional_type,
    IFC2X3_IfcLightSourceGoniometric_type,
    IFC2X3_IfcLightSourcePositional_type,
    IFC2X3_IfcLightSourceSpot_type,
    IFC2X3_IfcLine_type,
    IFC2X3_IfcLinearDimension_type,
    IFC2X3_IfcLinearForceMeasure_type,
    IFC2X3_IfcLinearMomentMeasure_type,
    IFC2X3_IfcLinearStiffnessMeasure_type,
    IFC2X3_IfcLinearVelocityMeasure_type,
    IFC2X3_IfcLoadGroupTypeEnum_type,
    IFC2X3_IfcLocalPlacement_type,
    IFC2X3_IfcLocalTime_type,
    IFC2X3_IfcLogical_type,
    IFC2X3_IfcLogicalOperatorEnum_type,
    IFC2X3_IfcLoop_type,
    IFC2X3_IfcLShapeProfileDef_type,
    IFC2X3_IfcLuminousFluxMeasure_type,
    IFC2X3_IfcLuminousIntensityDistributionMeasure_type,
    IFC2X3_IfcLuminousIntensityMeasure_type,
    IFC2X3_IfcMagneticFluxDensityMeasure_type,
    IFC2X3_IfcMagneticFluxMeasure_type,
    IFC2X3_IfcManifoldSolidBrep_type,
    IFC2X3_IfcMappedItem_type,
    IFC2X3_IfcMassDensityMeasure_type,
    IFC2X3_IfcMassFlowRateMeasure_type,
    IFC2X3_IfcMassMeasure_type,
    IFC2X3_IfcMassPerLengthMeasure_type,
    IFC2X3_IfcMaterial_type,
    IFC2X3_IfcMaterialClassificationRelationship_type,
    IFC2X3_IfcMaterialDefinitionRepresentation_type,
    IFC2X3_IfcMaterialLayer_type,
    IFC2X3_IfcMaterialLayerSet_type,
    IFC2X3_IfcMaterialLayerSetUsage_type,
    IFC2X3_IfcMaterialList_type,
    IFC2X3_IfcMaterialProperties_type,
    IFC2X3_IfcMaterialSelect_type,
    IFC2X3_IfcMeasureValue_type,
    IFC2X3_IfcMeasureWithUnit_type,
    IFC2X3_IfcMechanicalConcreteMaterialProperties_type,
    IFC2X3_IfcMechanicalFastener_type,
    IFC2X3_IfcMechanicalFastenerType_type,
    IFC2X3_IfcMechanicalMaterialProperties_type,
    IFC2X3_IfcMechanicalSteelMaterialProperties_type,
    IFC2X3_IfcMember_type,
    IFC2X3_IfcMemberType_type,
    IFC2X3_IfcMemberTypeEnum_type,
    IFC2X3_IfcMetric_type,
    IFC2X3_IfcMetricValueSelect_type,
    IFC2X3_IfcMinuteInHour_type,
    IFC2X3_IfcModulusOfElasticityMeasure_type,
    IFC2X3_IfcModulusOfLinearSubgradeReactionMeasure_type,
    IFC2X3_IfcModulusOfRotationalSubgradeReactionMeasure_type,
    IFC2X3_IfcModulusOfSubgradeReactionMeasure_type,
    IFC2X3_IfcMoistureDiffusivityMeasure_type,
    IFC2X3_IfcMolecularWeightMeasure_type,
    IFC2X3_IfcMomentOfInertiaMeasure_type,
    IFC2X3_IfcMonetaryMeasure_type,
    IFC2X3_IfcMonetaryUnit_type,
    IFC2X3_IfcMonthInYearNumber_type,
    IFC2X3_IfcMotorConnectionType_type,
    IFC2X3_IfcMotorConnectionTypeEnum_type,
    IFC2X3_IfcMove_type,
    IFC2X3_IfcNamedUnit_type,
    IFC2X3_IfcNormalisedRatioMeasure_type,
    IFC2X3_IfcNullStyle_type,
    IFC2X3_IfcNumericMeasure_type,
    IFC2X3_IfcObject_type,
    IFC2X3_IfcObjectDefinition_type,
    IFC2X3_IfcObjective_type,
    IFC2X3_IfcObjectiveEnum_type,
    IFC2X3_IfcObjectPlacement_type,
    IFC2X3_IfcObjectReferenceSelect_type,
    IFC2X3_IfcObjectTypeEnum_type,
    IFC2X3_IfcOccupant_type,
    IFC2X3_IfcOccupantTypeEnum_type,
    IFC2X3_IfcOffsetCurve2D_type,
    IFC2X3_IfcOffsetCurve3D_type,
    IFC2X3_IfcOneDirectionRepeatFactor_type,
    IFC2X3_IfcOpeningElement_type,
    IFC2X3_IfcOpenShell_type,
    IFC2X3_IfcOpticalMaterialProperties_type,
    IFC2X3_IfcOrderAction_type,
    IFC2X3_IfcOrganization_type,
    IFC2X3_IfcOrganizationRelationship_type,
    IFC2X3_IfcOrientationSelect_type,
    IFC2X3_IfcOrientedEdge_type,
    IFC2X3_IfcOutletType_type,
    IFC2X3_IfcOutletTypeEnum_type,
    IFC2X3_IfcOwnerHistory_type,
    IFC2X3_IfcParameterizedProfileDef_type,
    IFC2X3_IfcParameterValue_type,
    IFC2X3_IfcPath_type,
    IFC2X3_IfcPerformanceHistory_type,
    IFC2X3_IfcPermeableCoveringOperationEnum_type,
    IFC2X3_IfcPermeableCoveringProperties_type,
    IFC2X3_IfcPermit_type,
    IFC2X3_IfcPerson_type,
    IFC2X3_IfcPersonAndOrganization_type,
    IFC2X3_IfcPHMeasure_type,
    IFC2X3_IfcPhysicalComplexQuantity_type,
    IFC2X3_IfcPhysicalOrVirtualEnum_type,
    IFC2X3_IfcPhysicalQuantity_type,
    IFC2X3_IfcPhysicalSimpleQuantity_type,
    IFC2X3_IfcPile_type,
    IFC2X3_IfcPileConstructionEnum_type,
    IFC2X3_IfcPileTypeEnum_type,
    IFC2X3_IfcPipeFittingType_type,
    IFC2X3_IfcPipeFittingTypeEnum_type,
    IFC2X3_IfcPipeSegmentType_type,
    IFC2X3_IfcPipeSegmentTypeEnum_type,
    IFC2X3_IfcPixelTexture_type,
    IFC2X3_IfcPlacement_type,
    IFC2X3_IfcPlanarBox_type,
    IFC2X3_IfcPlanarExtent_type,
    IFC2X3_IfcPlanarForceMeasure_type,
    IFC2X3_IfcPlane_type,
    IFC2X3_IfcPlaneAngleMeasure_type,
    IFC2X3_IfcPlate_type,
    IFC2X3_IfcPlateType_type,
    IFC2X3_IfcPlateTypeEnum_type,
    IFC2X3_IfcPoint_type,
    IFC2X3_IfcPointOnCurve_type,
    IFC2X3_IfcPointOnSurface_type,
    IFC2X3_IfcPointOrVertexPoint_type,
    IFC2X3_IfcPolygonalBoundedHalfSpace_type,
    IFC2X3_IfcPolyline_type,
    IFC2X3_IfcPolyLoop_type,
    IFC2X3_IfcPort_type,
    IFC2X3_IfcPositiveLengthMeasure_type,
    IFC2X3_IfcPositivePlaneAngleMeasure_type,
    IFC2X3_IfcPositiveRatioMeasure_type,
    IFC2X3_IfcPostalAddress_type,
    IFC2X3_IfcPowerMeasure_type,
    IFC2X3_IfcPreDefinedColour_type,
    IFC2X3_IfcPreDefinedCurveFont_type,
    IFC2X3_IfcPreDefinedDimensionSymbol_type,
    IFC2X3_IfcPreDefinedItem_type,
    IFC2X3_IfcPreDefinedPointMarkerSymbol_type,
    IFC2X3_IfcPreDefinedSymbol_type,
    IFC2X3_IfcPreDefinedTerminatorSymbol_type,
    IFC2X3_IfcPreDefinedTextFont_type,
    IFC2X3_IfcPresentableText_type,
    IFC2X3_IfcPresentationLayerAssignment_type,
    IFC2X3_IfcPresentationLayerWithStyle_type,
    IFC2X3_IfcPresentationStyle_type,
    IFC2X3_IfcPresentationStyleAssignment_type,
    IFC2X3_IfcPresentationStyleSelect_type,
    IFC2X3_IfcPressureMeasure_type,
    IFC2X3_IfcProcedure_type,
    IFC2X3_IfcProcedureTypeEnum_type,
    IFC2X3_IfcProcess_type,
    IFC2X3_IfcProduct_type,
    IFC2X3_IfcProductDefinitionShape_type,
    IFC2X3_IfcProductRepresentation_type,
    IFC2X3_IfcProductsOfCombustionProperties_type,
    IFC2X3_IfcProfileDef_type,
    IFC2X3_IfcProfileProperties_type,
    IFC2X3_IfcProfileTypeEnum_type,
    IFC2X3_IfcProject_type,
    IFC2X3_IfcProjectedOrTrueLengthEnum_type,
    IFC2X3_IfcProjectionCurve_type,
    IFC2X3_IfcProjectionElement_type,
    IFC2X3_IfcProjectOrder_type,
    IFC2X3_IfcProjectOrderRecord_type,
    IFC2X3_IfcProjectOrderRecordTypeEnum_type,
    IFC2X3_IfcProjectOrderTypeEnum_type,
    IFC2X3_IfcProperty_type,
    IFC2X3_IfcPropertyBoundedValue_type,
    IFC2X3_IfcPropertyConstraintRelationship_type,
    IFC2X3_IfcPropertyDefinition_type,
    IFC2X3_IfcPropertyDependencyRelationship_type,
    IFC2X3_IfcPropertyEnumeratedValue_type,
    IFC2X3_IfcPropertyEnumeration_type,
    IFC2X3_IfcPropertyListValue_type,
    IFC2X3_IfcPropertyReferenceValue_type,
    IFC2X3_IfcPropertySet_type,
    IFC2X3_IfcPropertySetDefinition_type,
    IFC2X3_IfcPropertySingleValue_type,
    IFC2X3_IfcPropertySourceEnum_type,
    IFC2X3_IfcPropertyTableValue_type,
    IFC2X3_IfcProtectiveDeviceType_type,
    IFC2X3_IfcProtectiveDeviceTypeEnum_type,
    IFC2X3_IfcProxy_type,
    IFC2X3_IfcPumpType_type,
    IFC2X3_IfcPumpTypeEnum_type,
    IFC2X3_IfcQuantityArea_type,
    IFC2X3_IfcQuantityCount_type,
    IFC2X3_IfcQuantityLength_type,
    IFC2X3_IfcQuantityTime_type,
    IFC2X3_IfcQuantityVolume_type,
    IFC2X3_IfcQuantityWeight_type,
    IFC2X3_IfcRadioActivityMeasure_type,
    IFC2X3_IfcRadiusDimension_type,
    IFC2X3_IfcRailing_type,
    IFC2X3_IfcRailingType_type,
    IFC2X3_IfcRailingTypeEnum_type,
    IFC2X3_IfcRamp_type,
    IFC2X3_IfcRampFlight_type,
    IFC2X3_IfcRampFlightType_type,
    IFC2X3_IfcRampFlightTypeEnum_type,
    IFC2X3_IfcRampTypeEnum_type,
    IFC2X3_IfcRatioMeasure_type,
    IFC2X3_IfcRationalBezierCurve_type,
    IFC2X3_IfcReal_type,
    IFC2X3_IfcRectangleHollowProfileDef_type,
    IFC2X3_IfcRectangleProfileDef_type,
    IFC2X3_IfcRectangularPyramid_type,
    IFC2X3_IfcRectangularTrimmedSurface_type,
    IFC2X3_IfcReferencesValueDocument_type,
    IFC2X3_IfcReflectanceMethodEnum_type,
    IFC2X3_IfcRegularTimeSeries_type,
    IFC2X3_IfcReinforcementBarProperties_type,
    IFC2X3_IfcReinforcementDefinitionProperties_type,
    IFC2X3_IfcReinforcingBar_type,
    IFC2X3_IfcReinforcingBarRoleEnum_type,
    IFC2X3_IfcReinforcingBarSurfaceEnum_type,
    IFC2X3_IfcReinforcingElement_type,
    IFC2X3_IfcReinforcingMesh_type,
    IFC2X3_IfcRelAggregates_type,
    IFC2X3_IfcRelAssigns_type,
    IFC2X3_IfcRelAssignsTasks_type,
    IFC2X3_IfcRelAssignsToActor_type,
    IFC2X3_IfcRelAssignsToControl_type,
    IFC2X3_IfcRelAssignsToGroup_type,
    IFC2X3_IfcRelAssignsToProcess_type,
    IFC2X3_IfcRelAssignsToProduct_type,
    IFC2X3_IfcRelAssignsToProjectOrder_type,
    IFC2X3_IfcRelAssignsToResource_type,
    IFC2X3_IfcRelAssociates_type,
    IFC2X3_IfcRelAssociatesAppliedValue_type,
    IFC2X3_IfcRelAssociatesApproval_type,
    IFC2X3_IfcRelAssociatesClassification_type,
    IFC2X3_IfcRelAssociatesConstraint_type,
    IFC2X3_IfcRelAssociatesDocument_type,
    IFC2X3_IfcRelAssociatesLibrary_type,
    IFC2X3_IfcRelAssociatesMaterial_type,
    IFC2X3_IfcRelAssociatesProfileProperties_type,
    IFC2X3_IfcRelationship_type,
    IFC2X3_IfcRelaxation_type,
    IFC2X3_IfcRelConnects_type,
    IFC2X3_IfcRelConnectsElements_type,
    IFC2X3_IfcRelConnectsPathElements_type,
    IFC2X3_IfcRelConnectsPorts_type,
    IFC2X3_IfcRelConnectsPortToElement_type,
    IFC2X3_IfcRelConnectsStructuralActivity_type,
    IFC2X3_IfcRelConnectsStructuralElement_type,
    IFC2X3_IfcRelConnectsStructuralMember_type,
    IFC2X3_IfcRelConnectsWithEccentricity_type,
    IFC2X3_IfcRelConnectsWithRealizingElements_type,
    IFC2X3_IfcRelContainedInSpatialStructure_type,
    IFC2X3_IfcRelCoversBldgElements_type,
    IFC2X3_IfcRelCoversSpaces_type,
    IFC2X3_IfcRelDecomposes_type,
    IFC2X3_IfcRelDefines_type,
    IFC2X3_IfcRelDefinesByProperties_type,
    IFC2X3_IfcRelDefinesByType_type,
    IFC2X3_IfcRelFillsElement_type,
    IFC2X3_IfcRelFlowControlElements_type,
    IFC2X3_IfcRelInteractionRequirements_type,
    IFC2X3_IfcRelNests_type,
    IFC2X3_IfcRelOccupiesSpaces_type,
    IFC2X3_IfcRelOverridesProperties_type,
    IFC2X3_IfcRelProjectsElement_type,
    IFC2X3_IfcRelReferencedInSpatialStructure_type,
    IFC2X3_IfcRelSchedulesCostItems_type,
    IFC2X3_IfcRelSequence_type,
    IFC2X3_IfcRelServicesBuildings_type,
    IFC2X3_IfcRelSpaceBoundary_type,
    IFC2X3_IfcRelVoidsElement_type,
    IFC2X3_IfcRepresentation_type,
    IFC2X3_IfcRepresentationContext_type,
    IFC2X3_IfcRepresentationItem_type,
    IFC2X3_IfcRepresentationMap_type,
    IFC2X3_IfcResource_type,
    IFC2X3_IfcResourceConsumptionEnum_type,
    IFC2X3_IfcRevolvedAreaSolid_type,
    IFC2X3_IfcRibPlateDirectionEnum_type,
    IFC2X3_IfcRibPlateProfileProperties_type,
    IFC2X3_IfcRightCircularCone_type,
    IFC2X3_IfcRightCircularCylinder_type,
    IFC2X3_IfcRoleEnum_type,
    IFC2X3_IfcRoof_type,
    IFC2X3_IfcRoofTypeEnum_type,
    IFC2X3_IfcRoot_type,
    IFC2X3_IfcRotationalFrequencyMeasure_type,
    IFC2X3_IfcRotationalMassMeasure_type,
    IFC2X3_IfcRotationalStiffnessMeasure_type,
    IFC2X3_IfcRoundedEdgeFeature_type,
    IFC2X3_IfcRoundedRectangleProfileDef_type,
    IFC2X3_IfcSanitaryTerminalType_type,
    IFC2X3_IfcSanitaryTerminalTypeEnum_type,
    IFC2X3_IfcScheduleTimeControl_type,
    IFC2X3_IfcSecondInMinute_type,
    IFC2X3_IfcSectionalAreaIntegralMeasure_type,
    IFC2X3_IfcSectionedSpine_type,
    IFC2X3_IfcSectionModulusMeasure_type,
    IFC2X3_IfcSectionProperties_type,
    IFC2X3_IfcSectionReinforcementProperties_type,
    IFC2X3_IfcSectionTypeEnum_type,
    IFC2X3_IfcSensorType_type,
    IFC2X3_IfcSensorTypeEnum_type,
    IFC2X3_IfcSequenceEnum_type,
    IFC2X3_IfcServiceLife_type,
    IFC2X3_IfcServiceLifeFactor_type,
    IFC2X3_IfcServiceLifeFactorTypeEnum_type,
    IFC2X3_IfcServiceLifeTypeEnum_type,
    IFC2X3_IfcShapeAspect_type,
    IFC2X3_IfcShapeModel_type,
    IFC2X3_IfcShapeRepresentation_type,
    IFC2X3_IfcShearModulusMeasure_type,
    IFC2X3_IfcShell_type,
    IFC2X3_IfcShellBasedSurfaceModel_type,
    IFC2X3_IfcSimpleProperty_type,
    IFC2X3_IfcSimpleValue_type,
    IFC2X3_IfcSIPrefix_type,
    IFC2X3_IfcSite_type,
    IFC2X3_IfcSIUnit_type,
    IFC2X3_IfcSIUnitName_type,
    IFC2X3_IfcSizeSelect_type,
    IFC2X3_IfcSlab_type,
    IFC2X3_IfcSlabType_type,
    IFC2X3_IfcSlabTypeEnum_type,
    IFC2X3_IfcSlippageConnectionCondition_type,
    IFC2X3_IfcSolidAngleMeasure_type,
    IFC2X3_IfcSolidModel_type,
    IFC2X3_IfcSoundPowerMeasure_type,
    IFC2X3_IfcSoundPressureMeasure_type,
    IFC2X3_IfcSoundProperties_type,
    IFC2X3_IfcSoundScaleEnum_type,
    IFC2X3_IfcSoundValue_type,
    IFC2X3_IfcSpace_type,
    IFC2X3_IfcSpaceHeaterType_type,
    IFC2X3_IfcSpaceHeaterTypeEnum_type,
    IFC2X3_IfcSpaceProgram_type,
    IFC2X3_IfcSpaceThermalLoadProperties_type,
    IFC2X3_IfcSpaceType_type,
    IFC2X3_IfcSpaceTypeEnum_type,
    IFC2X3_IfcSpatialStructureElement_type,
    IFC2X3_IfcSpatialStructureElementType_type,
    IFC2X3_IfcSpecificHeatCapacityMeasure_type,
    IFC2X3_IfcSpecularExponent_type,
    IFC2X3_IfcSpecularHighlightSelect_type,
    IFC2X3_IfcSpecularRoughness_type,
    IFC2X3_IfcSphere_type,
    IFC2X3_IfcStackTerminalType_type,
    IFC2X3_IfcStackTerminalTypeEnum_type,
    IFC2X3_IfcStair_type,
    IFC2X3_IfcStairFlight_type,
    IFC2X3_IfcStairFlightType_type,
    IFC2X3_IfcStairFlightTypeEnum_type,
    IFC2X3_IfcStairTypeEnum_type,
    IFC2X3_IfcStateEnum_type,
    IFC2X3_IfcStructuralAction_type,
    IFC2X3_IfcStructuralActivity_type,
    IFC2X3_IfcStructuralActivityAssignmentSelect_type,
    IFC2X3_IfcStructuralAnalysisModel_type,
    IFC2X3_IfcStructuralConnection_type,
    IFC2X3_IfcStructuralConnectionCondition_type,
    IFC2X3_IfcStructuralCurveConnection_type,
    IFC2X3_IfcStructuralCurveMember_type,
    IFC2X3_IfcStructuralCurveMemberVarying_type,
    IFC2X3_IfcStructuralCurveTypeEnum_type,
    IFC2X3_IfcStructuralItem_type,
    IFC2X3_IfcStructuralLinearAction_type,
    IFC2X3_IfcStructuralLinearActionVarying_type,
    IFC2X3_IfcStructuralLoad_type,
    IFC2X3_IfcStructuralLoadGroup_type,
    IFC2X3_IfcStructuralLoadLinearForce_type,
    IFC2X3_IfcStructuralLoadPlanarForce_type,
    IFC2X3_IfcStructuralLoadSingleDisplacement_type,
    IFC2X3_IfcStructuralLoadSingleDisplacementDistortion_type,
    IFC2X3_IfcStructuralLoadSingleForce_type,
    IFC2X3_IfcStructuralLoadSingleForceWarping_type,
    IFC2X3_IfcStructuralLoadStatic_type,
    IFC2X3_IfcStructuralLoadTemperature_type,
    IFC2X3_IfcStructuralMember_type,
    IFC2X3_IfcStructuralPlanarAction_type,
    IFC2X3_IfcStructuralPlanarActionVarying_type,
    IFC2X3_IfcStructuralPointAction_type,
    IFC2X3_IfcStructuralPointConnection_type,
    IFC2X3_IfcStructuralPointReaction_type,
    IFC2X3_IfcStructuralProfileProperties_type,
    IFC2X3_IfcStructuralReaction_type,
    IFC2X3_IfcStructuralResultGroup_type,
    IFC2X3_IfcStructuralSteelProfileProperties_type,
    IFC2X3_IfcStructuralSurfaceConnection_type,
    IFC2X3_IfcStructuralSurfaceMember_type,
    IFC2X3_IfcStructuralSurfaceMemberVarying_type,
    IFC2X3_IfcStructuralSurfaceTypeEnum_type,
    IFC2X3_IfcStructuredDimensionCallout_type,
    IFC2X3_IfcStyledItem_type,
    IFC2X3_IfcStyledRepresentation_type,
    IFC2X3_IfcStyleModel_type,
    IFC2X3_IfcSubContractResource_type,
    IFC2X3_IfcSubedge_type,
    IFC2X3_IfcSurface_type,
    IFC2X3_IfcSurfaceCurveSweptAreaSolid_type,
    IFC2X3_IfcSurfaceOfLinearExtrusion_type,
    IFC2X3_IfcSurfaceOfRevolution_type,
    IFC2X3_IfcSurfaceOrFaceSurface_type,
    IFC2X3_IfcSurfaceSide_type,
    IFC2X3_IfcSurfaceStyle_type,
    IFC2X3_IfcSurfaceStyleElementSelect_type,
    IFC2X3_IfcSurfaceStyleLighting_type,
    IFC2X3_IfcSurfaceStyleRefraction_type,
    IFC2X3_IfcSurfaceStyleRendering_type,
    IFC2X3_IfcSurfaceStyleShading_type,
    IFC2X3_IfcSurfaceStyleWithTextures_type,
    IFC2X3_IfcSurfaceTexture_type,
    IFC2X3_IfcSurfaceTextureEnum_type,
    IFC2X3_IfcSweptAreaSolid_type,
    IFC2X3_IfcSweptDiskSolid_type,
    IFC2X3_IfcSweptSurface_type,
    IFC2X3_IfcSwitchingDeviceType_type,
    IFC2X3_IfcSwitchingDeviceTypeEnum_type,
    IFC2X3_IfcSymbolStyle_type,
    IFC2X3_IfcSymbolStyleSelect_type,
    IFC2X3_IfcSystem_type,
    IFC2X3_IfcSystemFurnitureElementType_type,
    IFC2X3_IfcTable_type,
    IFC2X3_IfcTableRow_type,
    IFC2X3_IfcTankType_type,
    IFC2X3_IfcTankTypeEnum_type,
    IFC2X3_IfcTask_type,
    IFC2X3_IfcTelecomAddress_type,
    IFC2X3_IfcTemperatureGradientMeasure_type,
    IFC2X3_IfcTendon_type,
    IFC2X3_IfcTendonAnchor_type,
    IFC2X3_IfcTendonTypeEnum_type,
    IFC2X3_IfcTerminatorSymbol_type,
    IFC2X3_IfcText_type,
    IFC2X3_IfcTextAlignment_type,
    IFC2X3_IfcTextDecoration_type,
    IFC2X3_IfcTextFontName_type,
    IFC2X3_IfcTextFontSelect_type,
    IFC2X3_IfcTextLiteral_type,
    IFC2X3_IfcTextLiteralWithExtent_type,
    IFC2X3_IfcTextPath_type,
    IFC2X3_IfcTextStyle_type,
    IFC2X3_IfcTextStyleFontModel_type,
    IFC2X3_IfcTextStyleForDefinedFont_type,
    IFC2X3_IfcTextStyleSelect_type,
    IFC2X3_IfcTextStyleTextModel_type,
    IFC2X3_IfcTextStyleWithBoxCharacteristics_type,
    IFC2X3_IfcTextTransformation_type,
    IFC2X3_IfcTextureCoordinate_type,
    IFC2X3_IfcTextureCoordinateGenerator_type,
    IFC2X3_IfcTextureMap_type,
    IFC2X3_IfcTextureVertex_type,
    IFC2X3_IfcThermalAdmittanceMeasure_type,
    IFC2X3_IfcThermalConductivityMeasure_type,
    IFC2X3_IfcThermalExpansionCoefficientMeasure_type,
    IFC2X3_IfcThermalLoadSourceEnum_type,
    IFC2X3_IfcThermalLoadTypeEnum_type,
    IFC2X3_IfcThermalMaterialProperties_type,
    IFC2X3_IfcThermalResistanceMeasure_type,
    IFC2X3_IfcThermalTransmittanceMeasure_type,
    IFC2X3_IfcThermodynamicTemperatureMeasure_type,
    IFC2X3_IfcTimeMeasure_type,
    IFC2X3_IfcTimeSeries_type,
    IFC2X3_IfcTimeSeriesDataTypeEnum_type,
    IFC2X3_IfcTimeSeriesReferenceRelationship_type,
    IFC2X3_IfcTimeSeriesSchedule_type,
    IFC2X3_IfcTimeSeriesScheduleTypeEnum_type,
    IFC2X3_IfcTimeSeriesValue_type,
    IFC2X3_IfcTimeStamp_type,
    IFC2X3_IfcTopologicalRepresentationItem_type,
    IFC2X3_IfcTopologyRepresentation_type,
    IFC2X3_IfcTorqueMeasure_type,
    IFC2X3_IfcTransformerType_type,
    IFC2X3_IfcTransformerTypeEnum_type,
    IFC2X3_IfcTransitionCode_type,
    IFC2X3_IfcTransportElement_type,
    IFC2X3_IfcTransportElementType_type,
    IFC2X3_IfcTransportElementTypeEnum_type,
    IFC2X3_IfcTrapeziumProfileDef_type,
    IFC2X3_IfcTrimmedCurve_type,
    IFC2X3_IfcTrimmingPreference_type,
    IFC2X3_IfcTrimmingSelect_type,
    IFC2X3_IfcTShapeProfileDef_type,
    IFC2X3_IfcTubeBundleType_type,
    IFC2X3_IfcTubeBundleTypeEnum_type,
    IFC2X3_IfcTwoDirectionRepeatFactor_type,
    IFC2X3_IfcTypeObject_type,
    IFC2X3_IfcTypeProduct_type,
    IFC2X3_IfcUnit_type,
    IFC2X3_IfcUnitaryEquipmentType_type,
    IFC2X3_IfcUnitaryEquipmentTypeEnum_type,
    IFC2X3_IfcUnitAssignment_type,
    IFC2X3_IfcUnitEnum_type,
    IFC2X3_IfcUShapeProfileDef_type,
    IFC2X3_IfcValue_type,
    IFC2X3_IfcValveType_type,
    IFC2X3_IfcValveTypeEnum_type,
    IFC2X3_IfcVaporPermeabilityMeasure_type,
    IFC2X3_IfcVector_type,
    IFC2X3_IfcVectorOrDirection_type,
    IFC2X3_IfcVertex_type,
    IFC2X3_IfcVertexBasedTextureMap_type,
    IFC2X3_IfcVertexLoop_type,
    IFC2X3_IfcVertexPoint_type,
    IFC2X3_IfcVibrationIsolatorType_type,
    IFC2X3_IfcVibrationIsolatorTypeEnum_type,
    IFC2X3_IfcVirtualElement_type,
    IFC2X3_IfcVirtualGridIntersection_type,
    IFC2X3_IfcVolumeMeasure_type,
    IFC2X3_IfcVolumetricFlowRateMeasure_type,
    IFC2X3_IfcWall_type,
    IFC2X3_IfcWallStandardCase_type,
    IFC2X3_IfcWallType_type,
    IFC2X3_IfcWallTypeEnum_type,
    IFC2X3_IfcWarpingConstantMeasure_type,
    IFC2X3_IfcWarpingMomentMeasure_type,
    IFC2X3_IfcWasteTerminalType_type,
    IFC2X3_IfcWasteTerminalTypeEnum_type,
    IFC2X3_IfcWaterProperties_type,
    IFC2X3_IfcWindow_type,
    IFC2X3_IfcWindowLiningProperties_type,
    IFC2X3_IfcWindowPanelOperationEnum_type,
    IFC2X3_IfcWindowPanelPositionEnum_type,
    IFC2X3_IfcWindowPanelProperties_type,
    IFC2X3_IfcWindowStyle_type,
    IFC2X3_IfcWindowStyleConstructionEnum_type,
    IFC2X3_IfcWindowStyleOperationEnum_type,
    IFC2X3_IfcWorkControl_type,
    IFC2X3_IfcWorkControlTypeEnum_type,
    IFC2X3_IfcWorkPlan_type,
    IFC2X3_IfcWorkSchedule_type,
    IFC2X3_IfcYearNumber_type,
    IFC2X3_IfcZone_type,
    IFC2X3_IfcZShapeProfileDef_type
        };
    return new schema_definition(strings[3053], declarations, new IFC2X3_instance_factory());
}


#if defined(__clang__)
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC pop_options
#elif defined(_MSC_VER)
#pragma optimize("", on)
#endif
        
static std::unique_ptr<schema_definition> schema;

void Ifc2x3::clear_schema() {
    schema.reset();
}

const schema_definition& Ifc2x3::get_schema() {
    if (!schema) {
        schema.reset(IFC2X3_populate_schema());
    }
    return *schema;
}

