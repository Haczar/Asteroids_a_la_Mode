#include "NativizedAssets.h"
#include "LeaderBoard__pf3166771619.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/ScaleBox.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Public/IAmbisonicsMixer.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollision.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/CrowdManagerBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdManager.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ULeaderBoard_C__pf3166771619::ULeaderBoard_C__pf3166771619(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ULeaderBoard_C__pf3166771619::StaticClass() == GetClass()))
	{
		ULeaderBoard_C__pf3166771619::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__TextxPAcro1d10AAA__pfG = nullptr;
	bpv__TextxPAcro1d1AAA__pfG = nullptr;
	bpv__TextxPAcro1d2AAA__pfG = nullptr;
	bpv__TextxPAcro1d3AAA__pfG = nullptr;
	bpv__TextxPAcro1d4AAA__pfG = nullptr;
	bpv__TextxPAcro1d5AAA__pfG = nullptr;
	bpv__TextxPAcro1d6AAA__pfG = nullptr;
	bpv__TextxPAcro1d7AAA__pfG = nullptr;
	bpv__TextxPAcro1d8AAA__pfG = nullptr;
	bpv__TextxPAcro1d9AAA__pfG = nullptr;
	bpv__TextxPAcro2d10AAA__pfG = nullptr;
	bpv__TextxPAcro2d1AAA__pfG = nullptr;
	bpv__TextxPAcro2d3AAA__pfG = nullptr;
	bpv__TextxPAcro2d4AAA__pfG = nullptr;
	bpv__TextxPAcro2d5AAA__pfG = nullptr;
	bpv__TextxPAcro2d6AAA__pfG = nullptr;
	bpv__TextxPAcro2d7AAA__pfG = nullptr;
	bpv__TextxPAcro2d92AAA__pfG = nullptr;
	bpv__TextxPAcrod8AAA__pfG = nullptr;
	bpv__TextxPAcrodd2AAA__pfG = nullptr;
	bpv__TextxPAcros1__pfG = nullptr;
	bpv__TextxPAcros10__pfG = nullptr;
	bpv__TextxPAcros2__pfG = nullptr;
	bpv__TextxPAcros3__pfG = nullptr;
	bpv__TextxPAcros4__pfG = nullptr;
	bpv__TextxPAcros5__pfG = nullptr;
	bpv__TextxPAcros6__pfG = nullptr;
	bpv__TextxPAcros7__pfG = nullptr;
	bpv__TextxPAcros8__pfG = nullptr;
	bpv__TextxScored1__pfG = nullptr;
	bpv__TextxScored10__pfG = nullptr;
	bpv__TextxScored2__pfG = nullptr;
	bpv__TextxScored3__pfG = nullptr;
	bpv__TextxScored4__pfG = nullptr;
	bpv__TextxScored5__pfG = nullptr;
	bpv__TextxScored6__pfG = nullptr;
	bpv__TextxScored7__pfG = nullptr;
	bpv__TextxScored8__pfG = nullptr;
	bpv__TextxScored9__pfG = nullptr;
	bpv__TextxScores1__pfG = nullptr;
	bpv__TextxScores10__pfG = nullptr;
	bpv__TextxScores2__pfG = nullptr;
	bpv__TextxScores3__pfG = nullptr;
	bpv__TextxScores4__pfG = nullptr;
	bpv__TextxScores5__pfG = nullptr;
	bpv__TextxScores6__pfG = nullptr;
	bpv__TextxScores7__pfG = nullptr;
	bpv__TextxScores8__pfG = nullptr;
	bpv__TextBlock_336__pf = nullptr;
	bpv__TextBlock_337__pf = nullptr;
	bCanEverTick = false;
	bCanEverPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void ULeaderBoard_C__pf3166771619::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void ULeaderBoard_C__pf3166771619::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__3->LayoutData.Offsets.Left = 21.964821f;
	__Local__3->LayoutData.Offsets.Top = 35.692833f;
	__Local__3->LayoutData.Offsets.Right = 1028.013672f;
	__Local__3->LayoutData.Offsets.Bottom = 1216.100220f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("VerticalBox_192"));
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(1);
	auto __Local__6 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__6->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_59"));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(2);
	auto __Local__9 = NewObject<UHorizontalBoxSlot>(__Local__7, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_15"));
	__Local__9->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("Singles"));
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(11);
	auto __Local__12 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"));
	__Local__12->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__12->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__12->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Texts"));
	__Local__13->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Singles"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6414B4B84F4298B4B476079024B12230") /* Key */
	);
	__Local__13->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__13->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__13->Font.Size = 64;
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__14 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_21"));
	__Local__14->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__14->Parent = __Local__10;
	auto __Local__15 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore1"));
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(4);
	auto __Local__17 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__17->Size.Value = 0.250000f;
	__Local__17->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox11"));
	__Local__18->bSingleLayoutPass = false;
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__19 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__19->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__19->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__19->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__19->Parent = __Local__15;
	auto __Local__20 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros1"));
	__Local__20->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__20->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__20->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__20->Slot = __Local__19;
	__Local__20->bIsVariable = true;
	__Local__19->Content = __Local__20;
	__Local__16.Add(__Local__19);
	auto __Local__21 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__21->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__21->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__21->Parent = __Local__15;
	auto __Local__22 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores1"));
	__Local__22->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__22->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__22->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__22->Slot = __Local__21;
	__Local__22->bIsVariable = true;
	__Local__21->Content = __Local__22;
	__Local__16.Add(__Local__21);
	auto __Local__23 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__23->Size.Value = 0.250000f;
	__Local__23->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__23->Parent = __Local__15;
	auto __Local__24 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox12"));
	__Local__24->bSingleLayoutPass = false;
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__16.Add(__Local__23);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__11.Add(__Local__14);
	auto __Local__25 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_35"));
	__Local__25->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__25->Parent = __Local__10;
	auto __Local__26 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore2"));
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__26), UPanelWidget::__PPO__Slots() )));
	__Local__27 = TArray<UPanelSlot*> ();
	__Local__27.Reserve(4);
	auto __Local__28 = NewObject<UHorizontalBoxSlot>(__Local__26, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__28->Size.Value = 0.250000f;
	__Local__28->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__28->Parent = __Local__26;
	auto __Local__29 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox21"));
	__Local__29->bSingleLayoutPass = false;
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__27.Add(__Local__28);
	auto __Local__30 = NewObject<UHorizontalBoxSlot>(__Local__26, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__30->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__30->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__30->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__30->Parent = __Local__26;
	auto __Local__31 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros2"));
	__Local__31->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__31->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__31->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__31->Slot = __Local__30;
	__Local__31->bIsVariable = true;
	__Local__30->Content = __Local__31;
	__Local__27.Add(__Local__30);
	auto __Local__32 = NewObject<UHorizontalBoxSlot>(__Local__26, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__32->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__32->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__32->Parent = __Local__26;
	auto __Local__33 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores2"));
	__Local__33->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__33->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__33->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__33->Slot = __Local__32;
	__Local__33->bIsVariable = true;
	__Local__32->Content = __Local__33;
	__Local__27.Add(__Local__32);
	auto __Local__34 = NewObject<UHorizontalBoxSlot>(__Local__26, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__34->Size.Value = 0.250000f;
	__Local__34->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__34->Parent = __Local__26;
	auto __Local__35 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox22"));
	__Local__35->bSingleLayoutPass = false;
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__27.Add(__Local__34);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__11.Add(__Local__25);
	auto __Local__36 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_36"));
	__Local__36->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__36->Parent = __Local__10;
	auto __Local__37 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore3"));
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__37), UPanelWidget::__PPO__Slots() )));
	__Local__38 = TArray<UPanelSlot*> ();
	__Local__38.Reserve(4);
	auto __Local__39 = NewObject<UHorizontalBoxSlot>(__Local__37, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__39->Size.Value = 0.250000f;
	__Local__39->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__39->Parent = __Local__37;
	auto __Local__40 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox31"));
	__Local__40->bSingleLayoutPass = false;
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__38.Add(__Local__39);
	auto __Local__41 = NewObject<UHorizontalBoxSlot>(__Local__37, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__41->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__41->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__41->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__41->Parent = __Local__37;
	auto __Local__42 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros3"));
	__Local__42->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__42->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__42->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__42->Slot = __Local__41;
	__Local__42->bIsVariable = true;
	__Local__41->Content = __Local__42;
	__Local__38.Add(__Local__41);
	auto __Local__43 = NewObject<UHorizontalBoxSlot>(__Local__37, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__43->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__43->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__43->Parent = __Local__37;
	auto __Local__44 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores3"));
	__Local__44->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__44->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__44->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__44->Slot = __Local__43;
	__Local__44->bIsVariable = true;
	__Local__43->Content = __Local__44;
	__Local__38.Add(__Local__43);
	auto __Local__45 = NewObject<UHorizontalBoxSlot>(__Local__37, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__45->Size.Value = 0.250000f;
	__Local__45->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__45->Parent = __Local__37;
	auto __Local__46 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox32"));
	__Local__46->bSingleLayoutPass = false;
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__38.Add(__Local__45);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__11.Add(__Local__36);
	auto __Local__47 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_37"));
	__Local__47->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__47->Parent = __Local__10;
	auto __Local__48 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore4"));
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__48), UPanelWidget::__PPO__Slots() )));
	__Local__49 = TArray<UPanelSlot*> ();
	__Local__49.Reserve(4);
	auto __Local__50 = NewObject<UHorizontalBoxSlot>(__Local__48, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__50->Size.Value = 0.250000f;
	__Local__50->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__50->Parent = __Local__48;
	auto __Local__51 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox41"));
	__Local__51->bSingleLayoutPass = false;
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__49.Add(__Local__50);
	auto __Local__52 = NewObject<UHorizontalBoxSlot>(__Local__48, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__52->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__52->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__52->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__52->Parent = __Local__48;
	auto __Local__53 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros4"));
	__Local__53->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__53->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__53->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__53->Slot = __Local__52;
	__Local__53->bIsVariable = true;
	__Local__52->Content = __Local__53;
	__Local__49.Add(__Local__52);
	auto __Local__54 = NewObject<UHorizontalBoxSlot>(__Local__48, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__54->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__54->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__54->Parent = __Local__48;
	auto __Local__55 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores4"));
	__Local__55->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__55->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__55->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__55->Slot = __Local__54;
	__Local__55->bIsVariable = true;
	__Local__54->Content = __Local__55;
	__Local__49.Add(__Local__54);
	auto __Local__56 = NewObject<UHorizontalBoxSlot>(__Local__48, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__56->Size.Value = 0.250000f;
	__Local__56->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__56->Parent = __Local__48;
	auto __Local__57 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox42"));
	__Local__57->bSingleLayoutPass = false;
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__49.Add(__Local__56);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__11.Add(__Local__47);
	auto __Local__58 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_38"));
	__Local__58->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__58->Parent = __Local__10;
	auto __Local__59 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore5"));
	auto& __Local__60 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__59), UPanelWidget::__PPO__Slots() )));
	__Local__60 = TArray<UPanelSlot*> ();
	__Local__60.Reserve(4);
	auto __Local__61 = NewObject<UHorizontalBoxSlot>(__Local__59, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__61->Size.Value = 0.250000f;
	__Local__61->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__61->Parent = __Local__59;
	auto __Local__62 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox51"));
	__Local__62->bSingleLayoutPass = false;
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__60.Add(__Local__61);
	auto __Local__63 = NewObject<UHorizontalBoxSlot>(__Local__59, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__63->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__63->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__63->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__63->Parent = __Local__59;
	auto __Local__64 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros5"));
	__Local__64->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__64->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__64->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__64->Slot = __Local__63;
	__Local__64->bIsVariable = true;
	__Local__63->Content = __Local__64;
	__Local__60.Add(__Local__63);
	auto __Local__65 = NewObject<UHorizontalBoxSlot>(__Local__59, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__65->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__65->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__65->Parent = __Local__59;
	auto __Local__66 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores5"));
	__Local__66->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__66->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__66->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__66->Slot = __Local__65;
	__Local__66->bIsVariable = true;
	__Local__65->Content = __Local__66;
	__Local__60.Add(__Local__65);
	auto __Local__67 = NewObject<UHorizontalBoxSlot>(__Local__59, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__67->Size.Value = 0.250000f;
	__Local__67->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__67->Parent = __Local__59;
	auto __Local__68 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox52"));
	__Local__68->bSingleLayoutPass = false;
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__60.Add(__Local__67);
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__11.Add(__Local__58);
	auto __Local__69 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_39"));
	__Local__69->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__69->Parent = __Local__10;
	auto __Local__70 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore6"));
	auto& __Local__71 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__70), UPanelWidget::__PPO__Slots() )));
	__Local__71 = TArray<UPanelSlot*> ();
	__Local__71.Reserve(4);
	auto __Local__72 = NewObject<UHorizontalBoxSlot>(__Local__70, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__72->Size.Value = 0.250000f;
	__Local__72->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__72->Parent = __Local__70;
	auto __Local__73 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox61"));
	__Local__73->bSingleLayoutPass = false;
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__71.Add(__Local__72);
	auto __Local__74 = NewObject<UHorizontalBoxSlot>(__Local__70, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__74->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__74->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__74->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__74->Parent = __Local__70;
	auto __Local__75 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros6"));
	__Local__75->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__75->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__75->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__75->Slot = __Local__74;
	__Local__75->bIsVariable = true;
	__Local__74->Content = __Local__75;
	__Local__71.Add(__Local__74);
	auto __Local__76 = NewObject<UHorizontalBoxSlot>(__Local__70, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__76->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__76->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__76->Parent = __Local__70;
	auto __Local__77 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores6"));
	__Local__77->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__77->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__77->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__77->Slot = __Local__76;
	__Local__77->bIsVariable = true;
	__Local__76->Content = __Local__77;
	__Local__71.Add(__Local__76);
	auto __Local__78 = NewObject<UHorizontalBoxSlot>(__Local__70, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__78->Size.Value = 0.250000f;
	__Local__78->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__78->Parent = __Local__70;
	auto __Local__79 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox62"));
	__Local__79->bSingleLayoutPass = false;
	__Local__79->Slot = __Local__78;
	__Local__78->Content = __Local__79;
	__Local__71.Add(__Local__78);
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__11.Add(__Local__69);
	auto __Local__80 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_40"));
	__Local__80->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__80->Parent = __Local__10;
	auto __Local__81 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore7"));
	auto& __Local__82 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__81), UPanelWidget::__PPO__Slots() )));
	__Local__82 = TArray<UPanelSlot*> ();
	__Local__82.Reserve(4);
	auto __Local__83 = NewObject<UHorizontalBoxSlot>(__Local__81, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__83->Size.Value = 0.250000f;
	__Local__83->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__83->Parent = __Local__81;
	auto __Local__84 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox71"));
	__Local__84->bSingleLayoutPass = false;
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__82.Add(__Local__83);
	auto __Local__85 = NewObject<UHorizontalBoxSlot>(__Local__81, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__85->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__85->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__85->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__85->Parent = __Local__81;
	auto __Local__86 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros7"));
	__Local__86->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__86->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__86->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__86->Slot = __Local__85;
	__Local__86->bIsVariable = true;
	__Local__85->Content = __Local__86;
	__Local__82.Add(__Local__85);
	auto __Local__87 = NewObject<UHorizontalBoxSlot>(__Local__81, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__87->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__87->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__87->Parent = __Local__81;
	auto __Local__88 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores7"));
	__Local__88->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__88->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__88->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__88->Slot = __Local__87;
	__Local__88->bIsVariable = true;
	__Local__87->Content = __Local__88;
	__Local__82.Add(__Local__87);
	auto __Local__89 = NewObject<UHorizontalBoxSlot>(__Local__81, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__89->Size.Value = 0.250000f;
	__Local__89->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__89->Parent = __Local__81;
	auto __Local__90 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox72"));
	__Local__90->bSingleLayoutPass = false;
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__82.Add(__Local__89);
	__Local__81->Slot = __Local__80;
	__Local__80->Content = __Local__81;
	__Local__11.Add(__Local__80);
	auto __Local__91 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_41"));
	__Local__91->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__91->Parent = __Local__10;
	auto __Local__92 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore8"));
	auto& __Local__93 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__92), UPanelWidget::__PPO__Slots() )));
	__Local__93 = TArray<UPanelSlot*> ();
	__Local__93.Reserve(4);
	auto __Local__94 = NewObject<UHorizontalBoxSlot>(__Local__92, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__94->Size.Value = 0.250000f;
	__Local__94->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__94->Parent = __Local__92;
	auto __Local__95 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox81"));
	__Local__95->bSingleLayoutPass = false;
	__Local__95->Slot = __Local__94;
	__Local__94->Content = __Local__95;
	__Local__93.Add(__Local__94);
	auto __Local__96 = NewObject<UHorizontalBoxSlot>(__Local__92, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__96->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__96->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__96->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__96->Parent = __Local__92;
	auto __Local__97 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros8"));
	__Local__97->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__97->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__97->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__97->Slot = __Local__96;
	__Local__97->bIsVariable = true;
	__Local__96->Content = __Local__97;
	__Local__93.Add(__Local__96);
	auto __Local__98 = NewObject<UHorizontalBoxSlot>(__Local__92, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__98->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__98->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__98->Parent = __Local__92;
	auto __Local__99 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores8"));
	__Local__99->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__99->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__99->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__99->Slot = __Local__98;
	__Local__99->bIsVariable = true;
	__Local__98->Content = __Local__99;
	__Local__93.Add(__Local__98);
	auto __Local__100 = NewObject<UHorizontalBoxSlot>(__Local__92, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__100->Size.Value = 0.250000f;
	__Local__100->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__100->Parent = __Local__92;
	auto __Local__101 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox82"));
	__Local__101->bSingleLayoutPass = false;
	__Local__101->Slot = __Local__100;
	__Local__100->Content = __Local__101;
	__Local__93.Add(__Local__100);
	__Local__92->Slot = __Local__91;
	__Local__91->Content = __Local__92;
	__Local__11.Add(__Local__91);
	auto __Local__102 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_42"));
	__Local__102->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__102->Parent = __Local__10;
	auto __Local__103 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore9"));
	auto& __Local__104 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__103), UPanelWidget::__PPO__Slots() )));
	__Local__104 = TArray<UPanelSlot*> ();
	__Local__104.Reserve(4);
	auto __Local__105 = NewObject<UHorizontalBoxSlot>(__Local__103, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__105->Size.Value = 0.250000f;
	__Local__105->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__105->Parent = __Local__103;
	auto __Local__106 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox_145"));
	__Local__106->bSingleLayoutPass = false;
	__Local__106->Slot = __Local__105;
	__Local__105->Content = __Local__106;
	__Local__104.Add(__Local__105);
	auto __Local__107 = NewObject<UHorizontalBoxSlot>(__Local__103, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__107->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__107->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__107->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__107->Parent = __Local__103;
	auto __Local__108 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_336"));
	__Local__108->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__108->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__108->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__108->Slot = __Local__107;
	__Local__108->bIsVariable = true;
	__Local__107->Content = __Local__108;
	__Local__104.Add(__Local__107);
	auto __Local__109 = NewObject<UHorizontalBoxSlot>(__Local__103, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__109->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__109->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__109->Parent = __Local__103;
	auto __Local__110 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_337"));
	__Local__110->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__110->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__110->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__110->Slot = __Local__109;
	__Local__110->bIsVariable = true;
	__Local__109->Content = __Local__110;
	__Local__104.Add(__Local__109);
	auto __Local__111 = NewObject<UHorizontalBoxSlot>(__Local__103, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__111->Size.Value = 0.250000f;
	__Local__111->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__111->Parent = __Local__103;
	auto __Local__112 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox_146"));
	__Local__112->bSingleLayoutPass = false;
	__Local__112->Slot = __Local__111;
	__Local__111->Content = __Local__112;
	__Local__104.Add(__Local__111);
	__Local__103->Slot = __Local__102;
	__Local__102->Content = __Local__103;
	__Local__11.Add(__Local__102);
	auto __Local__113 = NewObject<UVerticalBoxSlot>(__Local__10, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_43"));
	__Local__113->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__113->Parent = __Local__10;
	auto __Local__114 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScore10"));
	auto& __Local__115 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__114), UPanelWidget::__PPO__Slots() )));
	__Local__115 = TArray<UPanelSlot*> ();
	__Local__115.Reserve(4);
	auto __Local__116 = NewObject<UHorizontalBoxSlot>(__Local__114, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__116->Size.Value = 0.250000f;
	__Local__116->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__116->Parent = __Local__114;
	auto __Local__117 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox101"));
	__Local__117->bSingleLayoutPass = false;
	__Local__117->Slot = __Local__116;
	__Local__116->Content = __Local__117;
	__Local__115.Add(__Local__116);
	auto __Local__118 = NewObject<UHorizontalBoxSlot>(__Local__114, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__118->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__118->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__118->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__118->Parent = __Local__114;
	auto __Local__119 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcros10"));
	__Local__119->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__119->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__119->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__119->Slot = __Local__118;
	__Local__119->bIsVariable = true;
	__Local__118->Content = __Local__119;
	__Local__115.Add(__Local__118);
	auto __Local__120 = NewObject<UHorizontalBoxSlot>(__Local__114, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__120->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__120->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__120->Parent = __Local__114;
	auto __Local__121 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scores10"));
	__Local__121->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("684726DE41B85B8BCCC94480BA16FCDD") /* Key */
	);
	__Local__121->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__121->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__121->Slot = __Local__120;
	__Local__121->bIsVariable = true;
	__Local__120->Content = __Local__121;
	__Local__115.Add(__Local__120);
	auto __Local__122 = NewObject<UHorizontalBoxSlot>(__Local__114, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__122->Size.Value = 0.250000f;
	__Local__122->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__122->Parent = __Local__114;
	auto __Local__123 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox102"));
	__Local__123->bSingleLayoutPass = false;
	__Local__123->Slot = __Local__122;
	__Local__122->Content = __Local__123;
	__Local__115.Add(__Local__122);
	__Local__114->Slot = __Local__113;
	__Local__113->Content = __Local__114;
	__Local__11.Add(__Local__113);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__124 = NewObject<UHorizontalBoxSlot>(__Local__7, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_20"));
	__Local__124->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__124->Parent = __Local__7;
	auto __Local__125 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("Doubles"));
	auto& __Local__126 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__125), UPanelWidget::__PPO__Slots() )));
	__Local__126 = TArray<UPanelSlot*> ();
	__Local__126.Reserve(11);
	auto __Local__127 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_10"));
	__Local__127->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__127->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__127->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__127->Parent = __Local__125;
	auto __Local__128 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Textd"));
	__Local__128->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Doubles"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("BC7CB5AB47B61C74B02A1EBE98D933C7") /* Key */
	);
	__Local__128->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__128->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__128->Font.Size = 64;
	__Local__128->Slot = __Local__127;
	__Local__127->Content = __Local__128;
	__Local__126.Add(__Local__127);
	auto __Local__129 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__129->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__129->Parent = __Local__125;
	auto __Local__130 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored1"));
	auto& __Local__131 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__130), UPanelWidget::__PPO__Slots() )));
	__Local__131 = TArray<UPanelSlot*> ();
	__Local__131.Reserve(5);
	auto __Local__132 = NewObject<UHorizontalBoxSlot>(__Local__130, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__132->Size.Value = 0.250000f;
	__Local__132->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__132->Parent = __Local__130;
	auto __Local__133 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd11"));
	__Local__133->bSingleLayoutPass = false;
	__Local__133->Slot = __Local__132;
	__Local__132->Content = __Local__133;
	__Local__131.Add(__Local__132);
	auto __Local__134 = NewObject<UHorizontalBoxSlot>(__Local__130, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__134->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__134->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__134->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__134->Parent = __Local__130;
	auto __Local__135 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d1AAA"));
	__Local__135->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__135->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__135->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__135->Slot = __Local__134;
	__Local__135->bIsVariable = true;
	__Local__134->Content = __Local__135;
	__Local__131.Add(__Local__134);
	auto __Local__136 = NewObject<UHorizontalBoxSlot>(__Local__130, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__136->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__136->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__136->Parent = __Local__130;
	auto __Local__137 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored1"));
	__Local__137->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__137->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__137->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__137->Slot = __Local__136;
	__Local__137->bIsVariable = true;
	__Local__136->Content = __Local__137;
	__Local__131.Add(__Local__136);
	auto __Local__138 = NewObject<UHorizontalBoxSlot>(__Local__130, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__138->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__138->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__138->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__138->Parent = __Local__130;
	auto __Local__139 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro2d1AAA"));
	__Local__139->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__139->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__139->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__139->Slot = __Local__138;
	__Local__139->bIsVariable = true;
	__Local__138->Content = __Local__139;
	__Local__131.Add(__Local__138);
	auto __Local__140 = NewObject<UHorizontalBoxSlot>(__Local__130, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__140->Size.Value = 0.250000f;
	__Local__140->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__140->Parent = __Local__130;
	auto __Local__141 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd12"));
	__Local__141->bSingleLayoutPass = false;
	__Local__141->Slot = __Local__140;
	__Local__140->Content = __Local__141;
	__Local__131.Add(__Local__140);
	__Local__130->Slot = __Local__129;
	__Local__129->Content = __Local__130;
	__Local__126.Add(__Local__129);
	auto __Local__142 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_11"));
	__Local__142->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__142->Parent = __Local__125;
	auto __Local__143 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored2"));
	auto& __Local__144 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__143), UPanelWidget::__PPO__Slots() )));
	__Local__144 = TArray<UPanelSlot*> ();
	__Local__144.Reserve(5);
	auto __Local__145 = NewObject<UHorizontalBoxSlot>(__Local__143, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__145->Size.Value = 0.250000f;
	__Local__145->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__145->Parent = __Local__143;
	auto __Local__146 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd21"));
	__Local__146->bSingleLayoutPass = false;
	__Local__146->Slot = __Local__145;
	__Local__145->Content = __Local__146;
	__Local__144.Add(__Local__145);
	auto __Local__147 = NewObject<UHorizontalBoxSlot>(__Local__143, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__147->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__147->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__147->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__147->Parent = __Local__143;
	auto __Local__148 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d2AAA"));
	__Local__148->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__148->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__148->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__148->Slot = __Local__147;
	__Local__148->bIsVariable = true;
	__Local__147->Content = __Local__148;
	__Local__144.Add(__Local__147);
	auto __Local__149 = NewObject<UHorizontalBoxSlot>(__Local__143, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__149->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__149->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__149->Parent = __Local__143;
	auto __Local__150 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored2"));
	__Local__150->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__150->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__150->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__150->Slot = __Local__149;
	__Local__150->bIsVariable = true;
	__Local__149->Content = __Local__150;
	__Local__144.Add(__Local__149);
	auto __Local__151 = NewObject<UHorizontalBoxSlot>(__Local__143, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__151->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__151->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__151->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__151->Parent = __Local__143;
	auto __Local__152 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcrodd2AAA"));
	__Local__152->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__152->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__152->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__152->Slot = __Local__151;
	__Local__152->bIsVariable = true;
	__Local__151->Content = __Local__152;
	__Local__144.Add(__Local__151);
	auto __Local__153 = NewObject<UHorizontalBoxSlot>(__Local__143, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__153->Size.Value = 0.250000f;
	__Local__153->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__153->Parent = __Local__143;
	auto __Local__154 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd22"));
	__Local__154->bSingleLayoutPass = false;
	__Local__154->Slot = __Local__153;
	__Local__153->Content = __Local__154;
	__Local__144.Add(__Local__153);
	__Local__143->Slot = __Local__142;
	__Local__142->Content = __Local__143;
	__Local__126.Add(__Local__142);
	auto __Local__155 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_12"));
	__Local__155->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__155->Parent = __Local__125;
	auto __Local__156 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored3"));
	auto& __Local__157 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__156), UPanelWidget::__PPO__Slots() )));
	__Local__157 = TArray<UPanelSlot*> ();
	__Local__157.Reserve(5);
	auto __Local__158 = NewObject<UHorizontalBoxSlot>(__Local__156, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__158->Size.Value = 0.250000f;
	__Local__158->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__158->Parent = __Local__156;
	auto __Local__159 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd31"));
	__Local__159->bSingleLayoutPass = false;
	__Local__159->Slot = __Local__158;
	__Local__158->Content = __Local__159;
	__Local__157.Add(__Local__158);
	auto __Local__160 = NewObject<UHorizontalBoxSlot>(__Local__156, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__160->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__160->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__160->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__160->Parent = __Local__156;
	auto __Local__161 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d3AAA"));
	__Local__161->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__161->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__161->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__161->Slot = __Local__160;
	__Local__161->bIsVariable = true;
	__Local__160->Content = __Local__161;
	__Local__157.Add(__Local__160);
	auto __Local__162 = NewObject<UHorizontalBoxSlot>(__Local__156, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__162->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__162->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__162->Parent = __Local__156;
	auto __Local__163 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored3"));
	__Local__163->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__163->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__163->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__163->Slot = __Local__162;
	__Local__163->bIsVariable = true;
	__Local__162->Content = __Local__163;
	__Local__157.Add(__Local__162);
	auto __Local__164 = NewObject<UHorizontalBoxSlot>(__Local__156, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__164->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__164->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__164->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__164->Parent = __Local__156;
	auto __Local__165 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro2d3AAA"));
	__Local__165->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__165->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__165->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__165->Slot = __Local__164;
	__Local__165->bIsVariable = true;
	__Local__164->Content = __Local__165;
	__Local__157.Add(__Local__164);
	auto __Local__166 = NewObject<UHorizontalBoxSlot>(__Local__156, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__166->Size.Value = 0.250000f;
	__Local__166->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__166->Parent = __Local__156;
	auto __Local__167 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd32"));
	__Local__167->bSingleLayoutPass = false;
	__Local__167->Slot = __Local__166;
	__Local__166->Content = __Local__167;
	__Local__157.Add(__Local__166);
	__Local__156->Slot = __Local__155;
	__Local__155->Content = __Local__156;
	__Local__126.Add(__Local__155);
	auto __Local__168 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__168->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__168->Parent = __Local__125;
	auto __Local__169 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored4"));
	auto& __Local__170 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__169), UPanelWidget::__PPO__Slots() )));
	__Local__170 = TArray<UPanelSlot*> ();
	__Local__170.Reserve(5);
	auto __Local__171 = NewObject<UHorizontalBoxSlot>(__Local__169, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__171->Size.Value = 0.250000f;
	__Local__171->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__171->Parent = __Local__169;
	auto __Local__172 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd41"));
	__Local__172->bSingleLayoutPass = false;
	__Local__172->Slot = __Local__171;
	__Local__171->Content = __Local__172;
	__Local__170.Add(__Local__171);
	auto __Local__173 = NewObject<UHorizontalBoxSlot>(__Local__169, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__173->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__173->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__173->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__173->Parent = __Local__169;
	auto __Local__174 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d4AAA"));
	__Local__174->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__174->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__174->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__174->Slot = __Local__173;
	__Local__174->bIsVariable = true;
	__Local__173->Content = __Local__174;
	__Local__170.Add(__Local__173);
	auto __Local__175 = NewObject<UHorizontalBoxSlot>(__Local__169, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__175->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__175->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__175->Parent = __Local__169;
	auto __Local__176 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored4"));
	__Local__176->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__176->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__176->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__176->Slot = __Local__175;
	__Local__176->bIsVariable = true;
	__Local__175->Content = __Local__176;
	__Local__170.Add(__Local__175);
	auto __Local__177 = NewObject<UHorizontalBoxSlot>(__Local__169, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__177->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__177->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__177->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__177->Parent = __Local__169;
	auto __Local__178 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro2d4AAA"));
	__Local__178->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__178->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__178->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__178->Slot = __Local__177;
	__Local__178->bIsVariable = true;
	__Local__177->Content = __Local__178;
	__Local__170.Add(__Local__177);
	auto __Local__179 = NewObject<UHorizontalBoxSlot>(__Local__169, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__179->Size.Value = 0.250000f;
	__Local__179->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__179->Parent = __Local__169;
	auto __Local__180 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd42"));
	__Local__180->bSingleLayoutPass = false;
	__Local__180->Slot = __Local__179;
	__Local__179->Content = __Local__180;
	__Local__170.Add(__Local__179);
	__Local__169->Slot = __Local__168;
	__Local__168->Content = __Local__169;
	__Local__126.Add(__Local__168);
	auto __Local__181 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_20"));
	__Local__181->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__181->Parent = __Local__125;
	auto __Local__182 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored5"));
	auto& __Local__183 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__182), UPanelWidget::__PPO__Slots() )));
	__Local__183 = TArray<UPanelSlot*> ();
	__Local__183.Reserve(5);
	auto __Local__184 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__184->Size.Value = 0.250000f;
	__Local__184->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__184->Parent = __Local__182;
	auto __Local__185 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd51"));
	__Local__185->bSingleLayoutPass = false;
	__Local__185->Slot = __Local__184;
	__Local__184->Content = __Local__185;
	__Local__183.Add(__Local__184);
	auto __Local__186 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__186->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__186->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__186->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__186->Parent = __Local__182;
	auto __Local__187 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d5AAA"));
	__Local__187->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__187->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__187->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__187->Slot = __Local__186;
	__Local__187->bIsVariable = true;
	__Local__186->Content = __Local__187;
	__Local__183.Add(__Local__186);
	auto __Local__188 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__188->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__188->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__188->Parent = __Local__182;
	auto __Local__189 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored5"));
	__Local__189->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__189->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__189->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__189->Slot = __Local__188;
	__Local__189->bIsVariable = true;
	__Local__188->Content = __Local__189;
	__Local__183.Add(__Local__188);
	auto __Local__190 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__190->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__190->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__190->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__190->Parent = __Local__182;
	auto __Local__191 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro2d5AAA"));
	__Local__191->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__191->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__191->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__191->Slot = __Local__190;
	__Local__191->bIsVariable = true;
	__Local__190->Content = __Local__191;
	__Local__183.Add(__Local__190);
	auto __Local__192 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__192->Size.Value = 0.250000f;
	__Local__192->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__192->Parent = __Local__182;
	auto __Local__193 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd52"));
	__Local__193->bSingleLayoutPass = false;
	__Local__193->Slot = __Local__192;
	__Local__192->Content = __Local__193;
	__Local__183.Add(__Local__192);
	__Local__182->Slot = __Local__181;
	__Local__181->Content = __Local__182;
	__Local__126.Add(__Local__181);
	auto __Local__194 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_15"));
	__Local__194->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__194->Parent = __Local__125;
	auto __Local__195 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored6"));
	auto& __Local__196 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__195), UPanelWidget::__PPO__Slots() )));
	__Local__196 = TArray<UPanelSlot*> ();
	__Local__196.Reserve(5);
	auto __Local__197 = NewObject<UHorizontalBoxSlot>(__Local__195, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__197->Size.Value = 0.250000f;
	__Local__197->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__197->Parent = __Local__195;
	auto __Local__198 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd61"));
	__Local__198->bSingleLayoutPass = false;
	__Local__198->Slot = __Local__197;
	__Local__197->Content = __Local__198;
	__Local__196.Add(__Local__197);
	auto __Local__199 = NewObject<UHorizontalBoxSlot>(__Local__195, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__199->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__199->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__199->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__199->Parent = __Local__195;
	auto __Local__200 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d6AAA"));
	__Local__200->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__200->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__200->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__200->Slot = __Local__199;
	__Local__200->bIsVariable = true;
	__Local__199->Content = __Local__200;
	__Local__196.Add(__Local__199);
	auto __Local__201 = NewObject<UHorizontalBoxSlot>(__Local__195, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__201->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__201->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__201->Parent = __Local__195;
	auto __Local__202 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored6"));
	__Local__202->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__202->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__202->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__202->Slot = __Local__201;
	__Local__202->bIsVariable = true;
	__Local__201->Content = __Local__202;
	__Local__196.Add(__Local__201);
	auto __Local__203 = NewObject<UHorizontalBoxSlot>(__Local__195, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__203->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__203->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__203->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__203->Parent = __Local__195;
	auto __Local__204 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro2d6AAA"));
	__Local__204->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__204->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__204->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__204->Slot = __Local__203;
	__Local__204->bIsVariable = true;
	__Local__203->Content = __Local__204;
	__Local__196.Add(__Local__203);
	auto __Local__205 = NewObject<UHorizontalBoxSlot>(__Local__195, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__205->Size.Value = 0.250000f;
	__Local__205->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__205->Parent = __Local__195;
	auto __Local__206 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd62"));
	__Local__206->bSingleLayoutPass = false;
	__Local__206->Slot = __Local__205;
	__Local__205->Content = __Local__206;
	__Local__196.Add(__Local__205);
	__Local__195->Slot = __Local__194;
	__Local__194->Content = __Local__195;
	__Local__126.Add(__Local__194);
	auto __Local__207 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_16"));
	__Local__207->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__207->Parent = __Local__125;
	auto __Local__208 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored7"));
	auto& __Local__209 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__208), UPanelWidget::__PPO__Slots() )));
	__Local__209 = TArray<UPanelSlot*> ();
	__Local__209.Reserve(5);
	auto __Local__210 = NewObject<UHorizontalBoxSlot>(__Local__208, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__210->Size.Value = 0.250000f;
	__Local__210->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__210->Parent = __Local__208;
	auto __Local__211 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd71"));
	__Local__211->bSingleLayoutPass = false;
	__Local__211->Slot = __Local__210;
	__Local__210->Content = __Local__211;
	__Local__209.Add(__Local__210);
	auto __Local__212 = NewObject<UHorizontalBoxSlot>(__Local__208, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__212->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__212->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__212->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__212->Parent = __Local__208;
	auto __Local__213 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d7AAA"));
	__Local__213->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__213->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__213->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__213->Slot = __Local__212;
	__Local__213->bIsVariable = true;
	__Local__212->Content = __Local__213;
	__Local__209.Add(__Local__212);
	auto __Local__214 = NewObject<UHorizontalBoxSlot>(__Local__208, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__214->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__214->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__214->Parent = __Local__208;
	auto __Local__215 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored7"));
	__Local__215->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__215->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__215->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__215->Slot = __Local__214;
	__Local__215->bIsVariable = true;
	__Local__214->Content = __Local__215;
	__Local__209.Add(__Local__214);
	auto __Local__216 = NewObject<UHorizontalBoxSlot>(__Local__208, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__216->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__216->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__216->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__216->Parent = __Local__208;
	auto __Local__217 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro2d7AAA"));
	__Local__217->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__217->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__217->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__217->Slot = __Local__216;
	__Local__217->bIsVariable = true;
	__Local__216->Content = __Local__217;
	__Local__209.Add(__Local__216);
	auto __Local__218 = NewObject<UHorizontalBoxSlot>(__Local__208, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__218->Size.Value = 0.250000f;
	__Local__218->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__218->Parent = __Local__208;
	auto __Local__219 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd72"));
	__Local__219->bSingleLayoutPass = false;
	__Local__219->Slot = __Local__218;
	__Local__218->Content = __Local__219;
	__Local__209.Add(__Local__218);
	__Local__208->Slot = __Local__207;
	__Local__207->Content = __Local__208;
	__Local__126.Add(__Local__207);
	auto __Local__220 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_17"));
	__Local__220->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__220->Parent = __Local__125;
	auto __Local__221 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored8"));
	auto& __Local__222 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__221), UPanelWidget::__PPO__Slots() )));
	__Local__222 = TArray<UPanelSlot*> ();
	__Local__222.Reserve(5);
	auto __Local__223 = NewObject<UHorizontalBoxSlot>(__Local__221, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__223->Size.Value = 0.250000f;
	__Local__223->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__223->Parent = __Local__221;
	auto __Local__224 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd81"));
	__Local__224->bSingleLayoutPass = false;
	__Local__224->Slot = __Local__223;
	__Local__223->Content = __Local__224;
	__Local__222.Add(__Local__223);
	auto __Local__225 = NewObject<UHorizontalBoxSlot>(__Local__221, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__225->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__225->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__225->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__225->Parent = __Local__221;
	auto __Local__226 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d8AAA"));
	__Local__226->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__226->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__226->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__226->Slot = __Local__225;
	__Local__226->bIsVariable = true;
	__Local__225->Content = __Local__226;
	__Local__222.Add(__Local__225);
	auto __Local__227 = NewObject<UHorizontalBoxSlot>(__Local__221, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__227->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__227->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__227->Parent = __Local__221;
	auto __Local__228 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored8"));
	__Local__228->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__228->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__228->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__228->Slot = __Local__227;
	__Local__228->bIsVariable = true;
	__Local__227->Content = __Local__228;
	__Local__222.Add(__Local__227);
	auto __Local__229 = NewObject<UHorizontalBoxSlot>(__Local__221, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__229->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__229->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__229->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__229->Parent = __Local__221;
	auto __Local__230 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcrod8AAA"));
	__Local__230->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__230->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__230->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__230->Slot = __Local__229;
	__Local__230->bIsVariable = true;
	__Local__229->Content = __Local__230;
	__Local__222.Add(__Local__229);
	auto __Local__231 = NewObject<UHorizontalBoxSlot>(__Local__221, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__231->Size.Value = 0.250000f;
	__Local__231->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__231->Parent = __Local__221;
	auto __Local__232 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd82"));
	__Local__232->bSingleLayoutPass = false;
	__Local__232->Slot = __Local__231;
	__Local__231->Content = __Local__232;
	__Local__222.Add(__Local__231);
	__Local__221->Slot = __Local__220;
	__Local__220->Content = __Local__221;
	__Local__126.Add(__Local__220);
	auto __Local__233 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_18"));
	__Local__233->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__233->Parent = __Local__125;
	auto __Local__234 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored9"));
	auto& __Local__235 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__234), UPanelWidget::__PPO__Slots() )));
	__Local__235 = TArray<UPanelSlot*> ();
	__Local__235.Reserve(5);
	auto __Local__236 = NewObject<UHorizontalBoxSlot>(__Local__234, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__236->Size.Value = 0.250000f;
	__Local__236->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__236->Parent = __Local__234;
	auto __Local__237 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd91"));
	__Local__237->bSingleLayoutPass = false;
	__Local__237->Slot = __Local__236;
	__Local__236->Content = __Local__237;
	__Local__235.Add(__Local__236);
	auto __Local__238 = NewObject<UHorizontalBoxSlot>(__Local__234, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__238->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__238->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__238->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__238->Parent = __Local__234;
	auto __Local__239 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d9AAA"));
	__Local__239->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__239->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__239->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__239->Slot = __Local__238;
	__Local__239->bIsVariable = true;
	__Local__238->Content = __Local__239;
	__Local__235.Add(__Local__238);
	auto __Local__240 = NewObject<UHorizontalBoxSlot>(__Local__234, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__240->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__240->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__240->Parent = __Local__234;
	auto __Local__241 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored9"));
	__Local__241->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__241->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__241->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__241->Slot = __Local__240;
	__Local__241->bIsVariable = true;
	__Local__240->Content = __Local__241;
	__Local__235.Add(__Local__240);
	auto __Local__242 = NewObject<UHorizontalBoxSlot>(__Local__234, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__242->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__242->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__242->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__242->Parent = __Local__234;
	auto __Local__243 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro2d92AAA"));
	__Local__243->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__243->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__243->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__243->Slot = __Local__242;
	__Local__243->bIsVariable = true;
	__Local__242->Content = __Local__243;
	__Local__235.Add(__Local__242);
	auto __Local__244 = NewObject<UHorizontalBoxSlot>(__Local__234, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__244->Size.Value = 0.250000f;
	__Local__244->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__244->Parent = __Local__234;
	auto __Local__245 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd92"));
	__Local__245->bSingleLayoutPass = false;
	__Local__245->Slot = __Local__244;
	__Local__244->Content = __Local__245;
	__Local__235.Add(__Local__244);
	__Local__234->Slot = __Local__233;
	__Local__233->Content = __Local__234;
	__Local__126.Add(__Local__233);
	auto __Local__246 = NewObject<UVerticalBoxSlot>(__Local__125, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_19"));
	__Local__246->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__246->Parent = __Local__125;
	auto __Local__247 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HighScored10"));
	auto& __Local__248 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__247), UPanelWidget::__PPO__Slots() )));
	__Local__248 = TArray<UPanelSlot*> ();
	__Local__248.Reserve(5);
	auto __Local__249 = NewObject<UHorizontalBoxSlot>(__Local__247, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_25"));
	__Local__249->Size.Value = 0.250000f;
	__Local__249->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__249->Parent = __Local__247;
	auto __Local__250 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd101"));
	__Local__250->bSingleLayoutPass = false;
	__Local__250->Slot = __Local__249;
	__Local__249->Content = __Local__250;
	__Local__248.Add(__Local__249);
	auto __Local__251 = NewObject<UHorizontalBoxSlot>(__Local__247, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_22"));
	__Local__251->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__251->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__251->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__251->Parent = __Local__247;
	auto __Local__252 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro1d10AAA"));
	__Local__252->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__252->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__252->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__252->Slot = __Local__251;
	__Local__252->bIsVariable = true;
	__Local__251->Content = __Local__252;
	__Local__248.Add(__Local__251);
	auto __Local__253 = NewObject<UHorizontalBoxSlot>(__Local__247, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__253->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__253->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__253->Parent = __Local__247;
	auto __Local__254 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Scored10"));
	__Local__254->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000000000000"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3BEDD7C478BE720C8A0A6A5CAAC434E") /* Key */
	);
	__Local__254->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__254->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__254->Slot = __Local__253;
	__Local__254->bIsVariable = true;
	__Local__253->Content = __Local__254;
	__Local__248.Add(__Local__253);
	auto __Local__255 = NewObject<UHorizontalBoxSlot>(__Local__247, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__255->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__255->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__255->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__255->Parent = __Local__247;
	auto __Local__256 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-PAcro2d10AAA"));
	__Local__256->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("AAA"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9007D3FB4DFCBEF3778A6ABC6680B083") /* Key */
	);
	__Local__256->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__256->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__256->Slot = __Local__255;
	__Local__256->bIsVariable = true;
	__Local__255->Content = __Local__256;
	__Local__248.Add(__Local__255);
	auto __Local__257 = NewObject<UHorizontalBoxSlot>(__Local__247, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_26"));
	__Local__257->Size.Value = 0.250000f;
	__Local__257->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__257->Parent = __Local__247;
	auto __Local__258 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBoxd102"));
	__Local__258->bSingleLayoutPass = false;
	__Local__258->Slot = __Local__257;
	__Local__257->Content = __Local__258;
	__Local__248.Add(__Local__257);
	__Local__247->Slot = __Local__246;
	__Local__246->Content = __Local__247;
	__Local__126.Add(__Local__246);
	__Local__125->Slot = __Local__124;
	__Local__124->Content = __Local__125;
	__Local__8.Add(__Local__124);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void ULeaderBoard_C__pf3166771619::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__259;
	SlotNames.Append(__Local__259);
}
void ULeaderBoard_C__pf3166771619::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__260;
	TArray<FDelegateRuntimeBinding>  __Local__261;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(ULeaderBoard_C__pf3166771619::StaticClass())->MiscConvertedSubobjects[0]), __Local__260, __Local__261);
}
void ULeaderBoard_C__pf3166771619::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
PRAGMA_DISABLE_OPTIMIZATION
void ULeaderBoard_C__pf3166771619::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/_Imported/Fonts/Hyperspace_Bold_Font.Hyperspace_Bold_Font 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ULeaderBoard_C__pf3166771619::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ULeaderBoard_C__pf3166771619
{
	FRegisterHelper__ULeaderBoard_C__pf3166771619()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UserInterface/LeaderBoard"), &ULeaderBoard_C__pf3166771619::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ULeaderBoard_C__pf3166771619 Instance;
};
FRegisterHelper__ULeaderBoard_C__pf3166771619 FRegisterHelper__ULeaderBoard_C__pf3166771619::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
