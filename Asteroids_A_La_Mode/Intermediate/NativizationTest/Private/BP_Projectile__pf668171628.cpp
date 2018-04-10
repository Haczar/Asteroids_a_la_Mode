#include "Asteroids_A_La_Mode.h"
#include "BP_Projectile__pf668171628.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
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
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
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
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
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
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
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
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
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
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "DmgTypeBP_Environmental__pf1001828891.h"
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
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h"
#include "Ship__pf668171628.h"
#include "Asteroid_Small__pf2772898577.h"
#include "Asteroid_Medium__pf2772898577.h"
#include "Asteroid_Large__pf2772898577.h"
#include "DebugMData__pf4162722864.h"
#include "RegUser__pf4061722237.h"
#include "UserData__pf4061722237.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Alien__pf655108736.h"
#include "Asteroid__pf2772898577.h"
#include "DebugMode__pf4162722864.h"
#include "SRotate__pf668171628.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "PState__pf4061722237.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ABP_Projectile_C__pf668171628::ABP_Projectile_C__pf668171628(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_Projectile_C__pf668171628::StaticClass() == GetClass()))
	{
		ABP_Projectile_C__pf668171628::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__ProjectileMovement__pf = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__0 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__0 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Projectile_C__pf668171628::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Projectile_C__pf668171628::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->RelativeScale3D = FVector(1.000000, 1.000000, 1.250000);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__ProjectileMovement__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ProjectileMovement__pf->InitialSpeed = 2000.000000f;
	bpv__ProjectileMovement__pf->ProjectileGravityScale = 0.000000f;
	bpv__ProjectileMovement__pf->Velocity = FVector(0.000000, 0.000000, -1.000000);
	bpv__TimeElapsed__pf = 0.000000f;
	PrimaryActorTick.bCanEverTick = true;
	bReplicateMovement = true;
	bReplicates = true;
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Projectile_C__pf668171628::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ProjectileMovement__pf)
	{
		bpv__ProjectileMovement__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Projectile_C__pf668171628::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AShip_C__pf668171628::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAsteroid_Small_C__pf2772898577::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAsteroid_Medium_C__pf2772898577::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAsteroid_Large_C__pf2772898577::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADebugMData_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARegUser_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AUserData_C__pf4061722237::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void ABP_Projectile_C__pf668171628::bpf__ExecuteUbergraph_BP_Projectile__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_GetInstigator_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetInstigator_ReturnValue__pf = AActor::GetInstigator();
				b0l__K2Node_DynamicCast_AsShip__pf = Cast<AShip_C__pf668171628>(bpfv__CallFunc_GetInstigator_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsShip__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
			}
		case 3:
			{
			}
		case 4:
			{
				int32  __Local__1 = 0;
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsShip__pf)) ? (b0l__K2Node_DynamicCast_AsShip__pf->bpv__MissleCount__pf) : (__Local__1)), 1);
				if(::IsValid(b0l__K2Node_DynamicCast_AsShip__pf))
				{
					b0l__K2Node_DynamicCast_AsShip__pf->bpv__MissleCount__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				}
			}
		case 5:
			{
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("failed to cast to ship")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 31:
			{
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Projectile_C__pf668171628::bpf__ExecuteUbergraph_BP_Projectile__pf_1(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	APawn* bpfv__CallFunc_GetInstigator_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
			}
		case 10:
			{
				int32  __Local__2 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsShip1__pf)) ? (b0l__K2Node_DynamicCast_AsShip1__pf->bpv__MissleCount__pf) : (__Local__2)), 1);
				if(::IsValid(b0l__K2Node_DynamicCast_AsShip1__pf))
				{
					b0l__K2Node_DynamicCast_AsShip1__pf->bpv__MissleCount__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				}
			}
		case 11:
			{
			}
		case 12:
			{
				K2_DestroyActor();
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				b0l__K2Node_DynamicCast_AsAsteroid_Small__pf = Cast<AAsteroid_Small_C__pf2772898577>(b0l__K2Node_CustomEvent_Object_Collided__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsAsteroid_Small__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 17:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsDebug_MData__pf != nullptr);;
				FName  __Local__3 = FName();
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(((::IsValid(b0l__K2Node_DynamicCast_AsUser_Data__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Data__pf->bpv__PlyrxName__pfT) : (__Local__3)), FName(TEXT("Player One")));
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpf__GivexPoints__pfT(bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf, 100);
				}
			}
		case 18:
			{
			}
		case 19:
			{
				bpfv__CallFunc_GetInstigator_ReturnValue1__pf = AActor::GetInstigator();
				b0l__K2Node_DynamicCast_AsShip1__pf = Cast<AShip_C__pf668171628>(bpfv__CallFunc_GetInstigator_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsShip1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess6__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 20:
			{
				__CurrentState = 9;
				break;
			}
		case 21:
			{
				__CurrentState = 19;
				break;
			}
		case 22:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Failed to cast to chip")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf = Cast<AAsteroid_Medium_C__pf2772898577>(b0l__K2Node_CustomEvent_Object_Collided__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsAsteroid_Medium__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = 16;
					break;
				}
			}
		case 24:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsDebug_MData__pf != nullptr);;
				FName  __Local__4 = FName();
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(((::IsValid(b0l__K2Node_DynamicCast_AsUser_Data__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Data__pf->bpv__PlyrxName__pfT) : (__Local__4)), FName(TEXT("Player One")));
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpf__GivexPoints__pfT(bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf, 50);
				}
			}
		case 25:
			{
				__CurrentState = 19;
				break;
			}
		case 26:
			{
				b0l__K2Node_DynamicCast_AsAsteroid_Large__pf = Cast<AAsteroid_Large_C__pf2772898577>(b0l__K2Node_CustomEvent_Object_Collided__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsAsteroid_Large__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 27:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsDebug_MData__pf != nullptr);;
				FName  __Local__5 = FName();
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(((::IsValid(b0l__K2Node_DynamicCast_AsUser_Data__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Data__pf->bpv__PlyrxName__pfT) : (__Local__5)), FName(TEXT("Player One")));
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpf__GivexPoints__pfT(bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf, 20);
				}
			}
		case 28:
			{
				__CurrentState = 19;
				break;
			}
		case 32:
			{
			}
		case 33:
			{
				__CurrentState = 26;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_GetOwner_ReturnValue__pf = AActor::GetOwner();
				b0l__K2Node_DynamicCast_AsReg_User__pf = Cast<ARegUser_C__pf4061722237>(bpfv__CallFunc_GetOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsReg_User__pf != nullptr);;
				APlayerState*  __Local__6 = ((APlayerState*)nullptr);
				b0l__K2Node_DynamicCast_AsUser_Data__pf = Cast<AUserData_C__pf4061722237>(((::IsValid(b0l__K2Node_DynamicCast_AsReg_User__pf)) ? (b0l__K2Node_DynamicCast_AsReg_User__pf->PlayerState) : (__Local__6)));
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsUser_Data__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess7__pf)
				{
					__CurrentState = 35;
					break;
				}
				__CurrentState = 32;
				break;
			}
		case 35:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Failed to cast to user.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = 19;
				break;
			}
		case 36:
			{
				__CurrentState = 34;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Projectile_C__pf668171628::bpf__ExecuteUbergraph_BP_Projectile__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	UKismetSystemLibrary::PrintString(this, FString(TEXT("I\'m here")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	bpf__processxdeath__pfT();
	return; // KCST_GotoReturn
}
void ABP_Projectile_C__pf668171628::bpf__ExecuteUbergraph_BP_Projectile__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 29);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b0l__K2Node_Event_DeltaSeconds__pf, bpv__TimeElapsed__pf);
	bpv__TimeElapsed__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__TimeElapsed__pf, 1.000000);
	if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpf__KillxYurself__pfT(((UObject*)nullptr));
	return; // KCST_GotoReturn
}
void ABP_Projectile_C__pf668171628::bpf__processxdeath__pfT_Implementation()
{
	bpf__ExecuteUbergraph_BP_Projectile__pf_1(36);
}
void ABP_Projectile_C__pf668171628::bpf__KillxYurself__pfT(UObject* bpp__ObjectxCollided__pfT)
{
	b0l__K2Node_CustomEvent_Object_Collided__pf = bpp__ObjectxCollided__pfT;
	bpf__ExecuteUbergraph_BP_Projectile__pf_2(13);
}
void ABP_Projectile_C__pf668171628::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_Projectile__pf_3(29);
}
void ABP_Projectile_C__pf668171628::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Projectile__pf_0(31);
}
void ABP_Projectile_C__pf668171628::bpf__UserConstructionScript__pf()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Projectile_C__pf668171628::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/MapTemplates/Materials/BasicAsset01.BasicAsset01 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ABP_Projectile_C__pf668171628::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Pawns/Ship/Ship.Ship_C 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Obstacles/Asteroid_Small.Asteroid_Small_C 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Obstacles/Asteroid_Medium.Asteroid_Medium_C 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Obstacles/Asteroid_Large.Asteroid_Large_C 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugMData.DebugMData_C 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/RegUser.RegUser_C 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/UserData.UserData_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ABP_Projectile_C__pf668171628
{
	FRegisterHelper__ABP_Projectile_C__pf668171628()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Pawns/Ship/BP_Projectile"), &ABP_Projectile_C__pf668171628::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Projectile_C__pf668171628 Instance;
};
FRegisterHelper__ABP_Projectile_C__pf668171628 FRegisterHelper__ABP_Projectile_C__pf668171628::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
