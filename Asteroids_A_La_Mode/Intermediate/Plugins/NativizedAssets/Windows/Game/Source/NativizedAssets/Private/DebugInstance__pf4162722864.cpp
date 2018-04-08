#include "NativizedAssets.h"
#include "DebugInstance__pf4162722864.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/Engine/Font.h"
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
#include "PlayerC_Regular__pf4061722237.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/CreateSessionCallbackProxy.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/DestroySessionCallbackProxy.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/JoinSessionCallbackProxy.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "SaveObj__pf4061722237.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "DebugState__pf4162722864.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UDebugInstance_C__pf4162722864::UDebugInstance_C__pf4162722864(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UDebugInstance_C__pf4162722864::StaticClass() == GetClass()))
	{
		UDebugInstance_C__pf4162722864::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Lanx__pfzy = false;
	bpv__FoundxGames__pfT = TArray<FBlueprintSessionResult> ();
	bpv__NetworkManagerxxxxxxx__pfzyzySzySzyS = nullptr;
	bpv__SearchxComplete__pfT = false;
	bpv__UserxInfo__pfT = nullptr;
}
PRAGMA_ENABLE_OPTIMIZATION
void UDebugInstance_C__pf4162722864::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UDebugInstance_C__pf4162722864::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Modes/Debug/DStates.DStates")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(APlayerC_Regular_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(USaveObj_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADebugState_C__pf4162722864::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_0(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 80);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeLiteralText_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Asteroids a La Mode"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("58509A00412592F0FAF51F97882FFC02") /* Key */
	));
	UKismetSystemLibrary::SetWindowTitle(bpfv__CallFunc_MakeLiteralText_ReturnValue__pf);
	if(::IsValid(bpv__UserxInfo__pfT))
	{
		bpv__UserxInfo__pfT->bpf__GetxInfoxonxEnvxfromxUnreal__pfTTTTT();
	}
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 73);
	// optimized KCST_UnconditionalGoto
	bpf__LoadxLevel__pfT(FString(TEXT("Dev_Test")));
	UKismetSystemLibrary::PrintString(this, FString(TEXT("DebugM to DM called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
	bpf__ChangexState__pfT(E__DStates__pf::NewEnumerator4);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 69);
	// optimized KCST_UnconditionalGoto
	bpf__LoadxLevel__pfT(FString(TEXT("MainScreen")));
	UKismetSystemLibrary::PrintString(this, FString(TEXT("DebugM to MM called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
	bpf__ChangexState__pfT(E__DStates__pf::NewEnumerator6);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 77);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("Dev_Test")), true, FString(TEXT("listen")));
	UKismetSystemLibrary::PrintString(this, FString(TEXT("DebugM to A1979 called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
	bpf__ChangexState__pfT(E__DStates__pf::NewEnumerator0);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FString bpfv__CallFunc_GetServerName_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 7:
			{
				__CurrentState = 8;
				break;
			}
		case 8:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_CustomEvent_Results__pf;
			}
		case 9:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Found Games:")), true, true, FLinearColor(0.000000,1.000000,0.077566,1.000000), 1000.000000);
			}
		case 10:
			{
				bpv__FoundxGames__pfT = b0l__Temp_struct_Variable__pf;
			}
		case 11:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 12:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 13:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__FoundxGames__pfT);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 15:
			{
				__StateStack.Push(18);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__FoundxGames__pfT, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_GetServerName_ReturnValue__pf = UFindSessionsCallbackProxy::GetServerName(b0l__CallFunc_Array_Get_Item__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_GetServerName_ReturnValue__pf, true, true, FLinearColor(0.107715,1.000000,0.000000,1.000000), 1000.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpv__SearchxComplete__pfT = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 13;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_5(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue3__pf{};
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	bpv__SearchxComplete__pfT = false;
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Find games called.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue3__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf != nullptr);;
	b0l__CallFunc_FindSessions_ReturnValue__pf = UFindSessionsCallbackProxy::FindSessions(this, b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf, 1, bpv__Lanx__pfzy);
	b0l__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_FindSessions_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate1__pf.BindUFunction(this,FName(TEXT("OnSuccess_8AFB58C5443B5AFADD60D0925753A253")));
	if(::IsValid(b0l__CallFunc_FindSessions_ReturnValue__pf))
	{
		b0l__CallFunc_FindSessions_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate1__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnFailure_8AFB58C5443B5AFADD60D0925753A253")));
	if(::IsValid(b0l__CallFunc_FindSessions_ReturnValue__pf))
	{
		b0l__CallFunc_FindSessions_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	if(::IsValid(b0l__CallFunc_FindSessions_ReturnValue__pf))
	{
		b0l__CallFunc_FindSessions_ReturnValue__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 68);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Failed to create a coop session.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_7(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 30);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf);
	b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf != nullptr);;
	b0l__CallFunc_JoinSession_ReturnValue__pf = UJoinSessionCallbackProxy::JoinSession(this, b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf, b0l__K2Node_CustomEvent_Session_to_join__pf);
	b0l__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_JoinSession_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate5__pf.BindUFunction(this,FName(TEXT("OnSuccess_D98B94BC46FD2DBCEB07728CAE0BB77F")));
	if(::IsValid(b0l__CallFunc_JoinSession_ReturnValue__pf))
	{
		b0l__CallFunc_JoinSession_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate5__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate4__pf.BindUFunction(this,FName(TEXT("OnFailure_D98B94BC46FD2DBCEB07728CAE0BB77F")));
	if(::IsValid(b0l__CallFunc_JoinSession_ReturnValue__pf))
	{
		b0l__CallFunc_JoinSession_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate4__pf);
	}
	if(::IsValid(b0l__CallFunc_JoinSession_ReturnValue__pf))
	{
		b0l__CallFunc_JoinSession_ReturnValue__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 66);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_9(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 39);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Create coop called.")), true, true, FLinearColor(1.000000,0.000000,0.819327,1.000000), 1000.000000);
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
	b0l__CallFunc_CreateSession_ReturnValue__pf = UCreateSessionCallbackProxy::CreateSession(this, b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf, 10, bpv__Lanx__pfzy);
	b0l__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateSession_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate7__pf.BindUFunction(this,FName(TEXT("OnSuccess_7C4156FE49C8B859B34E9083CCA81E0E")));
	if(::IsValid(b0l__CallFunc_CreateSession_ReturnValue__pf))
	{
		b0l__CallFunc_CreateSession_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate7__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate6__pf.BindUFunction(this,FName(TEXT("OnFailure_7C4156FE49C8B859B34E9083CCA81E0E")));
	if(::IsValid(b0l__CallFunc_CreateSession_ReturnValue__pf))
	{
		b0l__CallFunc_CreateSession_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate6__pf);
	}
	if(::IsValid(b0l__CallFunc_CreateSession_ReturnValue__pf))
	{
		b0l__CallFunc_CreateSession_ReturnValue__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 36);
	// optimized KCST_UnconditionalGoto
	bpf__DestroySesh__pf();
	bpf__SetxDebugMxtoxMainScreen__pfTTT();
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Joined session.")), true, true, FLinearColor(1.000000,0.000000,0.761986,1.000000), 1000.000000);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Failed to join session.")), true, true, FLinearColor(0.013375,1.000000,0.000000,1.000000), 1000.000000);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Session created. Setting Debug to proper game mode.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	bpf__SetxDebugMxtoxArcade1979__pfTTT();
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Session could not be destroyed")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Session Destoryed.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_16(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue1__pf{};
	check(bpp__EntryPoint__pf == 54);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Destory session called.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__CallFunc_DestroySession_ReturnValue__pf = UDestroySessionCallbackProxy::DestroySession(this, bpfv__CallFunc_GetPlayerController_ReturnValue1__pf);
	b0l__CallFunc_IsValid_ReturnValue1__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf);
	if (!b0l__CallFunc_IsValid_ReturnValue1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	b0l__K2Node_CreateDelegate_OutputDelegate3__pf.BindUFunction(this,FName(TEXT("OnSuccess_50E2515040AAF84455FDB1ADB5219E72")));
	if(::IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->OnSuccess.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate3__pf);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnFailure_50E2515040AAF84455FDB1ADB5219E72")));
	if(::IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->OnFailure.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
	}
	if(::IsValid(b0l__CallFunc_DestroySession_ReturnValue__pf))
	{
		b0l__CallFunc_DestroySession_ReturnValue__pf->Activate();
	}
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_CustomEvent_Results1__pf;
	UKismetSystemLibrary::PrintString(this, FString(TEXT("No Servers found.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_18(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 61:
			{
				__CurrentState = 62;
				break;
			}
		case 62:
			{
				if (!b0l__K2Node_Event_bIsServer__pf)
				{
					__CurrentState = 63;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 63:
			{
				bpf__NetErrorxtoxString__pfTT(b0l__K2Node_Event_FailureType1__pf, /*out*/ b0l__CallFunc_NetError_to_String_Error_Text__pf);
				UKismetSystemLibrary::PrintString(this, b0l__CallFunc_NetError_to_String_Error_Text__pf, true, true, FLinearColor(1.000000,0.037186,0.000000,1.000000), 1000.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UDebugInstance_C__pf4162722864::bpf__ExecuteUbergraph_DebugInstance__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 64);
	// optimized KCST_UnconditionalGoto
	bpf__TravelErrorxtoxString__pfTT(b0l__K2Node_Event_FailureType__pf, /*out*/ b0l__CallFunc_TravelError_to_String_Error__pf);
	UKismetSystemLibrary::PrintString(this, b0l__CallFunc_TravelError_to_String_Error__pf, true, true, FLinearColor(1.000000,0.000000,0.017848,1.000000), 1000.000000);
	return; //KCST_EndOfThread
}
void UDebugInstance_C__pf4162722864::bpf__LoadxSettings__pfT()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_0(80);
}
void UDebugInstance_C__pf4162722864::bpf__SetxDebugMxtoxArcade1979__pfTTT_Implementation()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_3(77);
}
void UDebugInstance_C__pf4162722864::bpf__SetxDebugMxtoxDebugMode__pfTTT_Implementation()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_1(73);
}
void UDebugInstance_C__pf4162722864::bpf__SetxDebugMxtoxMainScreen__pfTTT()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_2(69);
}
void UDebugInstance_C__pf4162722864::bpf__ShowLoadingScreen__pf()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_8(66);
}
void UDebugInstance_C__pf4162722864::bpf__HandleTravelError__pf(ETravelFailure::Type bpp__FailureType__pf)
{
	b0l__K2Node_Event_FailureType__pf = bpp__FailureType__pf;
	bpf__ExecuteUbergraph_DebugInstance__pf_19(64);
}
void UDebugInstance_C__pf4162722864::bpf__HandleNetworkError__pf(ENetworkFailure::Type bpp__FailureType__pf, bool bpp__bIsServer__pf)
{
	b0l__K2Node_Event_FailureType1__pf = bpp__FailureType__pf;
	b0l__K2Node_Event_bIsServer__pf = bpp__bIsServer__pf;
	bpf__ExecuteUbergraph_DebugInstance__pf_18(61);
}
void UDebugInstance_C__pf4162722864::bpf__DestroySesh__pf()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_16(54);
}
void UDebugInstance_C__pf4162722864::bpf__FindxGames__pfT()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_5(46);
}
void UDebugInstance_C__pf4162722864::bpf__CreatexCoop__pfT_Implementation()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_9(39);
}
void UDebugInstance_C__pf4162722864::bpf__LeavexGame__pfT()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_10(36);
}
void UDebugInstance_C__pf4162722864::bpf__JoinxGame__pfT_Implementation(FBlueprintSessionResult bpp__Sessionxtoxjoin__pfTT)
{
	b0l__K2Node_CustomEvent_Session_to_join__pf = bpp__Sessionxtoxjoin__pfTT;
	bpf__ExecuteUbergraph_DebugInstance__pf_7(30);
}
void UDebugInstance_C__pf4162722864::bpf__OnSuccess_D98B94BC46FD2DBCEB07728CAE0BB77F__pf()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_11(25);
}
void UDebugInstance_C__pf4162722864::bpf__OnFailure_D98B94BC46FD2DBCEB07728CAE0BB77F__pf()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_12(23);
}
void UDebugInstance_C__pf4162722864::bpf__OnSuccess_50E2515040AAF84455FDB1ADB5219E72__pf()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_15(21);
}
void UDebugInstance_C__pf4162722864::bpf__OnFailure_50E2515040AAF84455FDB1ADB5219E72__pf()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_14(19);
}
void UDebugInstance_C__pf4162722864::bpf__OnSuccess_8AFB58C5443B5AFADD60D0925753A253__pf(TArray<FBlueprintSessionResult> const& bpp__Results__pf__const)
{
	typedef TArray<FBlueprintSessionResult>  T__Local__0;
	T__Local__0& bpp__Results__pf = *const_cast<T__Local__0 *>(&bpp__Results__pf__const);
	b0l__K2Node_CustomEvent_Results__pf = bpp__Results__pf;
	bpf__ExecuteUbergraph_DebugInstance__pf_4(7);
}
void UDebugInstance_C__pf4162722864::bpf__OnFailure_8AFB58C5443B5AFADD60D0925753A253__pf(TArray<FBlueprintSessionResult> const& bpp__Results__pf__const)
{
	typedef TArray<FBlueprintSessionResult>  T__Local__1;
	T__Local__1& bpp__Results__pf = *const_cast<T__Local__1 *>(&bpp__Results__pf__const);
	b0l__K2Node_CustomEvent_Results1__pf = bpp__Results__pf;
	bpf__ExecuteUbergraph_DebugInstance__pf_17(4);
}
void UDebugInstance_C__pf4162722864::bpf__OnSuccess_7C4156FE49C8B859B34E9083CCA81E0E__pf()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_13(27);
}
void UDebugInstance_C__pf4162722864::bpf__OnFailure_7C4156FE49C8B859B34E9083CCA81E0E__pf()
{
	bpf__ExecuteUbergraph_DebugInstance__pf_6(68);
}
void UDebugInstance_C__pf4162722864::bpf__ChangexState__pfT(E__DStates__pf bpp__DesiredxState__pfT)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	ADebugState_C__pf4162722864* bpfv__K2Node_DynamicCast_AsDebug_State__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				bpfv__K2Node_DynamicCast_AsDebug_State__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsDebug_State__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsDebug_State__pf))
				{
					bpfv__K2Node_DynamicCast_AsDebug_State__pf->bpf__SetxState__pfT(bpp__DesiredxState__pfT);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UDebugInstance_C__pf4162722864::bpf__LoadxLevel__pfT(const FString& bpp__LevelxName__pfT__const)
{
	typedef FString  T__Local__2;
	T__Local__2& bpp__LevelxName__pfT = *const_cast<T__Local__2 *>(&bpp__LevelxName__pfT__const);
	FName bpfv__CallFunc_Conv_StringToName_ReturnValue__pf{};
	FString bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf = UGameplayStatics::GetCurrentLevelName(this, true);
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf = UKismetStringLibrary::EqualEqual_StrStr(bpfv__CallFunc_GetCurrentLevelName_ReturnValue__pf, bpp__LevelxName__pfT);
				if (!bpfv__CallFunc_EqualEqual_StrStr_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Conv_StringToName_ReturnValue__pf = UKismetStringLibrary::Conv_StringToName(bpp__LevelxName__pfT);
				UGameplayStatics::OpenLevel(this, bpfv__CallFunc_Conv_StringToName_ReturnValue__pf, true, FString(TEXT("")));
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UDebugInstance_C__pf4162722864::bpf__NetErrorxtoxString__pfTT(ENetworkFailure::Type bpp__NetxError__pfT, /*out*/ FString& bpp__ErrorxText__pfT)
{
	FString bpfv__ErrorxString__pfT{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::NetDriverAlreadyExists));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::NetDriverCreateFailure));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::NetDriverListenFailure));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::ConnectionLost));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::ConnectionTimeout));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::FailureReceived));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::OutdatedClient));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::OutdatedServer));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::PendingConnectionFailure));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::NetGuidMismatch));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__NetxError__pfT), static_cast<uint8>(ENetworkFailure::NetChecksumMismatch));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__ErrorxString__pfT = FString(TEXT("Error: lost connection to host."));
			}
		case 3:
			{
				bpp__ErrorxText__pfT = bpfv__ErrorxString__pfT;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__ErrorxString__pfT = FString(TEXT("Error: connection timed out."));
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UDebugInstance_C__pf4162722864::bpf__TravelErrorxtoxString__pfTT(ETravelFailure::Type bpp__TravelError__pf, /*out*/ FString& bpp__Error__pf)
{
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UDebugInstance_C__pf4162722864::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), static_cast<uint8>(bpp__TravelError__pf));
	bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Error: failed to travel. ")), bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf);
	bpp__Error__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UDebugInstance_C__pf4162722864::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{65, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETravelFailure 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UDebugInstance_C__pf4162722864::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/OnlineSubsystemUtils.BlueprintSessionResult 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/OnlineSubsystemUtils.BlueprintFindSessionsResultDelegate__DelegateSignature 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.EmptyOnlineDelegate__DelegateSignature 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy 
		{70, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ENetworkFailure 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameNetworkManager 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/PlayerC_Regular.PlayerC_Regular_C 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/SaveObj.SaveObj_C 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugState.DebugState_C 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Modes/Debug/DStates.DStates 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UDebugInstance_C__pf4162722864
{
	FRegisterHelper__UDebugInstance_C__pf4162722864()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Modes/Debug/DebugInstance"), &UDebugInstance_C__pf4162722864::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UDebugInstance_C__pf4162722864 Instance;
};
FRegisterHelper__UDebugInstance_C__pf4162722864 FRegisterHelper__UDebugInstance_C__pf4162722864::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
