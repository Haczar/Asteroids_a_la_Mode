#include "NativizedAssets.h"
#include "ServerList__pf1232574660.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScrollBox.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
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
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "DebugManager__pf4162722864.h"
#include "ServerRow__pf1232574660.h"
#include "RegUser__pf4061722237.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/CreateSessionCallbackProxy.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/DestroySessionCallbackProxy.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/JoinSessionCallbackProxy.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "SaveObj__pf4061722237.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "DStates__pf4162722864.h"
#include "DebugMData__pf4162722864.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Slate/Public/Widgets/Layout/SScrollBox.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "UserData__pf4061722237.h"
#include "DebugMode__pf4162722864.h"
#include "GameStart__pf3166771619.h"
#include "InGameHud__pf515974370.h"
#include "PState__pf4061722237.h"
#include "GameOver__pf3166771619.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Spawn_Volume__pf2174024837.h"
#include "Ship__pf668171628.h"
#include "1979Rounds__pf2955639682.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "BP_Projectile__pf668171628.h"
#include "Alien__pf655108736.h"
#include "Asteroid__pf2772898577.h"
#include "SRotate__pf668171628.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "MenuPawn__pf3752356522.h"
#include "Asteroid_Medium__pf2772898577.h"
#include "Asteroid_Large__pf2772898577.h"
#include "MainScreen__pf1232574660.h"
#include "LevelStart_Widget__pf515974370.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UServerList_C__pf1232574660::UServerList_C__pf1232574660(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UServerList_C__pf1232574660::StaticClass() == GetClass()))
	{
		UServerList_C__pf1232574660::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__BackButton__pf = nullptr;
	bpv__ColumnNames__pf = nullptr;
	bpv__RefreshButton__pf = nullptr;
	bpv__ResultsContainer__pf = nullptr;
	bpv__ScrollingServers__pf = nullptr;
	bpv__StatusMessage__pf = nullptr;
	bpv__TextxBack__pfG = nullptr;
	bpv__TextxRefresh__pfG = nullptr;
	bpv__InsideServerList__pf = false;
	bpv__RefreshButtonEnabled__pf = false;
	bpv__StatusTextVisibility__pf = ESlateVisibility::Visible;
	bpv__StatusText__pf = FString(TEXT("Searching..."));
	bpv__FoundSessionWidgets__pf = TArray<UServerRow_C__pf1232574660*> ();
	bpv__ServerSel__pf = E__EServerSel__pf::NewEnumerator0;
	bpv__ServerRowSel__pf = 0;
}
PRAGMA_ENABLE_OPTIMIZATION
void UServerList_C__pf1232574660::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UServerList_C__pf1232574660::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/UserInterface/MainScreen/EServerSel.EServerSel")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UDebugManager_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UServerRow_C__pf1232574660::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMenuBase_C__pf3166771619::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARegUser_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMainScreen_C__pf1232574660::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__3->LayoutData.Offsets.Left = -544.960938f;
	__Local__3->LayoutData.Offsets.Top = -432.540527f;
	__Local__3->LayoutData.Offsets.Right = 1125.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 900.000000f;
	__Local__3->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__3->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("VerticalBox_0"));
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(5);
	auto __Local__6 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__6->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Title"));
	__Local__7->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Server List"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6498BC464085F27DA95100B14E4FE3F1") /* Key */
	);
	__Local__7->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__7->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__8 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"));
	__Local__8->Parent = __Local__4;
	auto __Local__9 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__9->Size = FVector2D(1.000000, 44.000000);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__5.Add(__Local__8);
	auto __Local__10 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"));
	__Local__10->Parent = __Local__4;
	auto __Local__11 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("ColumnNames"));
	auto& __Local__12 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__11), UPanelWidget::__PPO__Slots() )));
	__Local__12 = TArray<UPanelSlot*> ();
	__Local__12.Reserve(5);
	auto __Local__13 = NewObject<UHorizontalBoxSlot>(__Local__11, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__13->Parent = __Local__11;
	auto __Local__14 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Column01"));
	__Local__14->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Name"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D5478B734790B0C3DF3815A758A94A83") /* Key */
	);
	__Local__14->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__14->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__14->Slot = __Local__13;
	__Local__14->RenderTransform.Translation = FVector2D(27.629503, 0.000000);
	__Local__13->Content = __Local__14;
	__Local__12.Add(__Local__13);
	auto __Local__15 = NewObject<UHorizontalBoxSlot>(__Local__11, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__15->Parent = __Local__11;
	auto __Local__16 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_1"));
	__Local__16->Size = FVector2D(600.000000, 1.000000);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__12.Add(__Local__15);
	auto __Local__17 = NewObject<UHorizontalBoxSlot>(__Local__11, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__17->Parent = __Local__11;
	auto __Local__18 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Column02"));
	__Local__18->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Players"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("136483B54A2B7C4B86E0C3A880CF1361") /* Key */
	);
	__Local__18->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__18->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__12.Add(__Local__17);
	auto __Local__19 = NewObject<UHorizontalBoxSlot>(__Local__11, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__19->Parent = __Local__11;
	auto __Local__20 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_2"));
	__Local__20->Size = FVector2D(200.000000, 1.000000);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__12.Add(__Local__19);
	auto __Local__21 = NewObject<UHorizontalBoxSlot>(__Local__11, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__21->Parent = __Local__11;
	auto __Local__22 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Column03"));
	__Local__22->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Ping"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("06CE038A414AC35221A808AEB1C25078") /* Key */
	);
	__Local__22->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__22->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__12.Add(__Local__21);
	__Local__11->Slot = __Local__10;
	__Local__11->bIsVariable = true;
	__Local__10->Content = __Local__11;
	__Local__5.Add(__Local__10);
	auto __Local__23 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_4"));
	__Local__23->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__23->Parent = __Local__4;
	auto __Local__24 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("ResultsContainer"));
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__24), UPanelWidget::__PPO__Slots() )));
	__Local__25 = TArray<UPanelSlot*> ();
	__Local__25.Reserve(2);
	auto __Local__26 = NewObject<UVerticalBoxSlot>(__Local__24, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__26->Parent = __Local__24;
	auto __Local__27 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("StatusMessage"));
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__25.Add(__Local__26);
	auto __Local__28 = NewObject<UVerticalBoxSlot>(__Local__24, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__28->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__28->Parent = __Local__24;
	auto __Local__29 = NewObject<UScrollBox>(__Local__0, UScrollBox::StaticClass(), TEXT("ScrollingServers"));
	__Local__29->Slot = __Local__28;
	__Local__29->bIsVariable = true;
	__Local__28->Content = __Local__29;
	__Local__25.Add(__Local__28);
	__Local__24->Slot = __Local__23;
	__Local__24->bIsVariable = true;
	__Local__24->RenderOpacity = 0.500000f;
	__Local__23->Content = __Local__24;
	__Local__5.Add(__Local__23);
	auto __Local__30 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__30->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__30->VerticalAlignment = EVerticalAlignment::VAlign_Bottom;
	__Local__30->Parent = __Local__4;
	auto __Local__31 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__31), UPanelWidget::__PPO__Slots() )));
	__Local__32 = TArray<UPanelSlot*> ();
	__Local__32.Reserve(3);
	auto __Local__33 = NewObject<UHorizontalBoxSlot>(__Local__31, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__33->Parent = __Local__31;
	auto __Local__34 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("RefreshButton"));
	__Local__34->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<UButtonSlot>(__Local__34, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__36->Parent = __Local__34;
	auto __Local__37 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Refresh"));
	__Local__37->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Refresh"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9DD379224A1D2145F9056F8869908FCD") /* Key */
	);
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__37->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(1.000000, 1.000000, 1.000000, 0.500000);
	__Local__37->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__37->Font.TypefaceFontName = FName(TEXT("Default"));
	auto& __Local__39 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__37), UTextLayoutWidget::__PPO__Justification() )));
	__Local__39 = ETextJustify::Type::Center;
	__Local__37->Slot = __Local__36;
	__Local__37->bIsVariable = true;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__32.Add(__Local__33);
	auto __Local__40 = NewObject<UHorizontalBoxSlot>(__Local__31, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__40->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__40->Parent = __Local__31;
	auto __Local__41 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_3"));
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__32.Add(__Local__40);
	auto __Local__42 = NewObject<UHorizontalBoxSlot>(__Local__31, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__42->Parent = __Local__31;
	auto __Local__43 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("BackButton"));
	__Local__43->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__43), UPanelWidget::__PPO__Slots() )));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(1);
	auto __Local__45 = NewObject<UButtonSlot>(__Local__43, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__45->Padding.Left = 0.000000f;
	__Local__45->Padding.Top = 0.000000f;
	__Local__45->Padding.Right = 0.000000f;
	__Local__45->Padding.Bottom = 0.000000f;
	__Local__45->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__45->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__45->Parent = __Local__43;
	auto __Local__46 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Back"));
	__Local__46->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Back"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("243E02F24DC0D9BC905C518F99F11960") /* Key */
	);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 1.000000, 1.000000, 0.500000);
	__Local__46->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__46->Font.TypefaceFontName = FName(TEXT("Default"));
	auto& __Local__48 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__46), UTextLayoutWidget::__PPO__Justification() )));
	__Local__48 = ETextJustify::Type::Center;
	__Local__46->Slot = __Local__45;
	__Local__46->bIsVariable = true;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__32.Add(__Local__42);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__5.Add(__Local__30);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UServerList_C__pf1232574660::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__49;
	SlotNames.Append(__Local__49);
}
void UServerList_C__pf1232574660::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__50;
	TArray<FDelegateRuntimeBinding>  __Local__51;
	__Local__51.AddUninitialized(2);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__51.GetData(), 2);
	auto& __Local__52 = __Local__51[0];
	__Local__52.ObjectName = FString(TEXT("StatusMessage"));
	__Local__52.PropertyName = FName(TEXT("Text"));
	__Local__52.FunctionName = FName(TEXT("Get Status Message Text"));
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__52.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__53 = TArray<FPropertyPathSegment> ();
	__Local__53.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__53.GetData(), 1);
	auto& __Local__54 = __Local__53[0];
	__Local__54.Name = FName(TEXT("Get Status Message Text"));
	auto& __Local__55 = __Local__51[1];
	__Local__55.ObjectName = FString(TEXT("RefreshButton"));
	__Local__55.PropertyName = FName(TEXT("bIsEnabled"));
	__Local__55.FunctionName = FName(TEXT("Get Refresh Button Enabled"));
	auto& __Local__56 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__55.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__56 = TArray<FPropertyPathSegment> ();
	__Local__56.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__56.GetData(), 1);
	auto& __Local__57 = __Local__56[0];
	__Local__57.Name = FName(TEXT("Get Refresh Button Enabled"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->MiscConvertedSubobjects[0]), __Local__50, __Local__51);
}
void UServerList_C__pf1232574660::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UServerList_C__pf1232574660::bpf__ExecuteUbergraph_ServerList__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue3__pf{};
	int32 bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Add_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue1__pf{};
	bool bpfv__CallFunc_Less_ByteByte_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue4__pf{};
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue4__pf{};
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 87:
			{
				__CurrentState = 88;
				break;
			}
		case 88:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue3__pf = UKismetMathLibrary::Not_PreBool(bpv__InsideServerList__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue3__pf)
				{
					__CurrentState = 99;
					break;
				}
			}
		case 89:
			{
				bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralInt(3);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf, 1);
				bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf);
				bpfv__CallFunc_Less_ByteByte_ReturnValue__pf = UKismetMathLibrary::Less_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 90:
			{
				b1l__K2Node_SwitchEnum4_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum4_CmpSuccess__pf)
				{
					__CurrentState = 98;
					break;
				}
				b1l__K2Node_SwitchEnum4_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum4_CmpSuccess__pf)
				{
					__CurrentState = 97;
					break;
				}
				b1l__K2Node_SwitchEnum4_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum4_CmpSuccess__pf)
				{
					__CurrentState = 91;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 91:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor3__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor3__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxBack__pfG, b1l__K2Node_MakeStruct_SlateColor3__pf);
			}
		case 92:
			{
				bpfv__CallFunc_Add_ByteByte_ReturnValue__pf = UKismetMathLibrary::Add_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), 1);
				bpfv__CallFunc_GetValidValue_ReturnValue1__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->ReferencedConvertedFields[0]), bpfv__CallFunc_Add_ByteByte_ReturnValue__pf);
				bpv__ServerSel__pf = static_cast<E__EServerSel__pf>(bpfv__CallFunc_GetValidValue_ReturnValue1__pf);
			}
		case 93:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 96;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 95;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 94;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 94:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor2__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor2__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxBack__pfG, b1l__K2Node_MakeStruct_SlateColor2__pf);
				__CurrentState = -1;
				break;
			}
		case 95:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor2__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor2__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxRefresh__pfG, b1l__K2Node_MakeStruct_SlateColor2__pf);
				__CurrentState = -1;
				break;
			}
		case 96:
			{
				if(::IsValid(bpv__ResultsContainer__pf))
				{
					bpv__ResultsContainer__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 97:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor3__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor3__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxRefresh__pfG, b1l__K2Node_MakeStruct_SlateColor3__pf);
				__CurrentState = 92;
				break;
			}
		case 98:
			{
				if(::IsValid(bpv__ResultsContainer__pf))
				{
					bpv__ResultsContainer__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 92;
				break;
			}
		case 99:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue2__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue4__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue2__pf, 1);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(bpv__ServerRowSel__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue4__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 100:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue4__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildAt(bpv__ServerRowSel__pf);
				}
				b1l__K2Node_DynamicCast_AsServer_Row5__pf = Cast<UServerRow_C__pf1232574660>(bpfv__CallFunc_GetChildAt_ReturnValue4__pf);
				b1l__K2Node_DynamicCast_bSuccess8__pf = (b1l__K2Node_DynamicCast_AsServer_Row5__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess8__pf)
				{
					__CurrentState = 106;
					break;
				}
			}
		case 101:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsServer_Row5__pf))
				{
					b1l__K2Node_DynamicCast_AsServer_Row5__pf->UWidget::SetRenderOpacity(0.500000);
				}
			}
		case 102:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue4__pf = UKismetMathLibrary::Add_IntInt(bpv__ServerRowSel__pf, 1);
				bpv__ServerRowSel__pf = bpfv__CallFunc_Add_IntInt_ReturnValue4__pf;
			}
		case 103:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue4__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildAt(bpv__ServerRowSel__pf);
				}
				b1l__K2Node_DynamicCast_AsServer_Row4__pf = Cast<UServerRow_C__pf1232574660>(bpfv__CallFunc_GetChildAt_ReturnValue4__pf);
				b1l__K2Node_DynamicCast_bSuccess7__pf = (b1l__K2Node_DynamicCast_AsServer_Row4__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess7__pf)
				{
					__CurrentState = 105;
					break;
				}
			}
		case 104:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsServer_Row4__pf))
				{
					b1l__K2Node_DynamicCast_AsServer_Row4__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 105:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("cast fail 2 (down list)")), true, true, FLinearColor(1.000000,0.056943,0.000000,1.000000), 150.000000);
				__CurrentState = -1;
				break;
			}
		case 106:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("cast fail 1 (down list)")), true, true, FLinearColor(1.000000,0.031298,0.000000,1.000000), 150.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UServerList_C__pf1232574660::bpf__ExecuteUbergraph_ServerList__pf_1(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue1__pf{};
	FString bpfv__CallFunc_GetDisplayName_ReturnValue1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue1__pf{};
	UPanelSlot* bpfv__CallFunc_AddChild_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bool  __Local__58 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager__pf->bpv__SearchxComplete__pfT) : (__Local__58)))
				{
					__CurrentState = 20;
					break;
				}
			}
		case 3:
			{
				TArray<FBlueprintSessionResult>  __Local__59 = TArray<FBlueprintSessionResult> {};
				bpfv__CallFunc_Array_Length_ReturnValue1__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager__pf->bpv__FoundxGames__pfT) : (__Local__59)));
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue1__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 4:
			{
				bpv__StatusTextVisibility__pf = ESlateVisibility::Collapsed;
			}
		case 5:
			{
				b1l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 6:
			{
				b1l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 7:
			{
				TArray<FBlueprintSessionResult>  __Local__60 = TArray<FBlueprintSessionResult> {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager__pf->bpv__FoundxGames__pfT) : (__Local__60)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 8:
			{
				b1l__Temp_int_Array_Index_Variable__pf = b1l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 9:
			{
				__StateStack.Push(27);
			}
		case 10:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue1__pf = GetOwningPlayer();
				b1l__CallFunc_Create_ReturnValue1__pf = CastChecked<UServerRow_C__pf1232574660>(UWidgetBlueprintLibrary::Create(this, UServerRow_C__pf1232574660::StaticClass(), bpfv__CallFunc_GetOwningPlayer_ReturnValue1__pf), ECastCheckedType::NullAllowed);
			}
		case 11:
			{
				bpfv__CallFunc_Array_Add_ReturnValue1__pf = FCustomThunkTemplates::Array_Add(bpv__FoundSessionWidgets__pf, b1l__CallFunc_Create_ReturnValue1__pf);
			}
		case 12:
			{
				TArray<FBlueprintSessionResult>  __Local__61 = TArray<FBlueprintSessionResult> {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager__pf->bpv__FoundxGames__pfT) : (__Local__61)), b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				if(::IsValid(b1l__CallFunc_Create_ReturnValue1__pf))
				{
					b1l__CallFunc_Create_ReturnValue1__pf->bpf__SetSearchResult__pf(b1l__CallFunc_Array_Get_Item__pf);
				}
			}
		case 13:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_AddChild_ReturnValue1__pf = bpv__ScrollingServers__pf->UPanelWidget::AddChild(b1l__CallFunc_Create_ReturnValue1__pf);
				}
			}
		case 14:
			{
				bpv__StatusTextVisibility__pf = ESlateVisibility::Hidden;
			}
		case 15:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Session child:")), true, true, FLinearColor(1.000000,0.988580,0.000000,1.000000), 50.000000);
			}
		case 16:
			{
				b1l__Temp_int_Variable1__pf = 0;
			}
		case 17:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue1__pf = UKismetMathLibrary::LessEqual_IntInt(b1l__Temp_int_Variable1__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				__StateStack.Push(28);
			}
		case 19:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue1__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildAt(b1l__Temp_int_Variable1__pf);
				}
				b1l__K2Node_DynamicCast_AsServer_Row1__pf = Cast<UServerRow_C__pf1232574660>(bpfv__CallFunc_GetChildAt_ReturnValue1__pf);
				b1l__K2Node_DynamicCast_bSuccess4__pf = (b1l__K2Node_DynamicCast_AsServer_Row1__pf != nullptr);;
				bpfv__CallFunc_GetDisplayName_ReturnValue1__pf = UKismetSystemLibrary::GetDisplayName(b1l__K2Node_DynamicCast_AsServer_Row1__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_GetDisplayName_ReturnValue1__pf, true, true, FLinearColor(1.000000,0.744893,0.000000,1.000000), 50.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				UKismetSystemLibrary::Delay(this, 0.000001, FLatentActionInfo(1, 1023105688, TEXT("ExecuteUbergraph_ServerList_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpv__StatusText__pf = FString(TEXT("No sessions found"));
			}
		case 22:
			{
				UKismetSystemLibrary::PrintString(this, bpv__StatusText__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 23:
			{
				bpv__RefreshButtonEnabled__pf = true;
			}
		case 24:
			{
				bpv__ServerSel__pf = E__EServerSel__pf::NewEnumerator0;
			}
		case 25:
			{
				bpv__InsideServerList__pf = false;
			}
		case 26:
			{
				if(::IsValid(bpv__ResultsContainer__pf))
				{
					bpv__ResultsContainer__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 7;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Variable1__pf, 1);
				b1l__Temp_int_Variable1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 17;
				break;
			}
		case 54:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsDebug_Manager__pf = Cast<UDebugManager_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsDebug_Manager__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 55:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager__pf))
				{
					b1l__K2Node_DynamicCast_AsDebug_Manager__pf->bpf__FindxGames__pfT();
				}
				__CurrentState = 2;
				break;
			}
		case 56:
			{
				bpf__ClearxServerList__pfT();
				__CurrentState = 54;
				break;
			}
		case 62:
			{
				__CurrentState = 63;
				break;
			}
		case 63:
			{
				bpv__RefreshButtonEnabled__pf = false;
			}
		case 64:
			{
				bpv__StatusTextVisibility__pf = ESlateVisibility::Visible;
				__CurrentState = 56;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UServerList_C__pf1232574660::bpf__ExecuteUbergraph_ServerList__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	UPanelSlot* bpfv__CallFunc_AddChild_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetChildrenCount_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf{};
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_GetDisplayName_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 29:
			{
				__CurrentState = 30;
				break;
			}
		case 30:
			{
				bool  __Local__63 = false;
				if (!((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager1__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager1__pf->bpv__SearchxComplete__pfT) : (__Local__63)))
				{
					__CurrentState = 53;
					break;
				}
			}
		case 31:
			{
				TArray<FBlueprintSessionResult>  __Local__64 = TArray<FBlueprintSessionResult> {};
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager1__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager1__pf->bpv__FoundxGames__pfT) : (__Local__64)));
				bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue3__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 32:
			{
				bpv__StatusTextVisibility__pf = ESlateVisibility::Collapsed;
			}
		case 33:
			{
				b1l__Temp_int_Loop_Counter_Variable1__pf = 0;
			}
		case 34:
			{
				b1l__Temp_int_Array_Index_Variable1__pf = 0;
			}
		case 35:
			{
				TArray<FBlueprintSessionResult>  __Local__65 = TArray<FBlueprintSessionResult> {};
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager1__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager1__pf->bpv__FoundxGames__pfT) : (__Local__65)));
				bpfv__CallFunc_Less_IntInt_ReturnValue1__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable1__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue1__pf)
				{
					__CurrentState = 50;
					break;
				}
			}
		case 36:
			{
				b1l__Temp_int_Array_Index_Variable1__pf = b1l__Temp_int_Loop_Counter_Variable1__pf;
			}
		case 37:
			{
				__StateStack.Push(49);
			}
		case 38:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				b1l__CallFunc_Create_ReturnValue__pf = CastChecked<UServerRow_C__pf1232574660>(UWidgetBlueprintLibrary::Create(this, UServerRow_C__pf1232574660::StaticClass(), bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 39:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__FoundSessionWidgets__pf, b1l__CallFunc_Create_ReturnValue__pf);
			}
		case 40:
			{
				TArray<FBlueprintSessionResult>  __Local__66 = TArray<FBlueprintSessionResult> {};
				FCustomThunkTemplates::Array_Get(((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager1__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager1__pf->bpv__FoundxGames__pfT) : (__Local__66)), b1l__Temp_int_Array_Index_Variable1__pf, /*out*/ b1l__CallFunc_Array_Get_Item1__pf);
				if(::IsValid(b1l__CallFunc_Create_ReturnValue__pf))
				{
					b1l__CallFunc_Create_ReturnValue__pf->bpf__SetSearchResult__pf(b1l__CallFunc_Array_Get_Item1__pf);
				}
			}
		case 41:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_AddChild_ReturnValue__pf = bpv__ScrollingServers__pf->UPanelWidget::AddChild(b1l__CallFunc_Create_ReturnValue__pf);
				}
			}
		case 42:
			{
				bpv__StatusTextVisibility__pf = ESlateVisibility::Hidden;
			}
		case 43:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Session child:")), true, true, FLinearColor(1.000000,0.988580,0.000000,1.000000), 50.000000);
			}
		case 44:
			{
				b1l__Temp_int_Variable__pf = 0;
			}
		case 45:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildrenCount_ReturnValue1__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildrenCount();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetChildrenCount_ReturnValue1__pf, 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(b1l__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 46:
			{
				__StateStack.Push(48);
			}
		case 47:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildAt(b1l__Temp_int_Variable__pf);
				}
				b1l__K2Node_DynamicCast_AsServer_Row__pf = Cast<UServerRow_C__pf1232574660>(bpfv__CallFunc_GetChildAt_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess2__pf = (b1l__K2Node_DynamicCast_AsServer_Row__pf != nullptr);;
				bpfv__CallFunc_GetDisplayName_ReturnValue__pf = UKismetSystemLibrary::GetDisplayName(b1l__K2Node_DynamicCast_AsServer_Row__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_GetDisplayName_ReturnValue__pf, true, true, FLinearColor(1.000000,0.744893,0.000000,1.000000), 50.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue1__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Variable__pf, 1);
				b1l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue1__pf;
				__CurrentState = 45;
				break;
			}
		case 49:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable1__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 35;
				break;
			}
		case 50:
			{
				bpv__RefreshButtonEnabled__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				bpv__StatusText__pf = FString(TEXT("No sessions found"));
			}
		case 52:
			{
				UKismetSystemLibrary::PrintString(this, bpv__StatusText__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = 50;
				break;
			}
		case 53:
			{
				UKismetSystemLibrary::Delay(this, 0.000001, FLatentActionInfo(29, 2147483647, TEXT("ExecuteUbergraph_ServerList_2"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 57:
			{
				bpv__RefreshButtonEnabled__pf = false;
			}
		case 58:
			{
				bpv__StatusTextVisibility__pf = ESlateVisibility::Visible;
			}
		case 59:
			{
				bpf__ClearxServerList__pfT();
			}
		case 60:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue1__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsDebug_Manager1__pf = Cast<UDebugManager_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue1__pf);
				b1l__K2Node_DynamicCast_bSuccess1__pf = (b1l__K2Node_DynamicCast_AsDebug_Manager1__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 61:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager1__pf))
				{
					b1l__K2Node_DynamicCast_AsDebug_Manager1__pf->bpf__FindxGames__pfT();
				}
				__CurrentState = 30;
				break;
			}
		case 107:
			{
				__CurrentState = 108;
				break;
			}
		case 108:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__InsideServerList__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 113;
					break;
				}
			}
		case 109:
			{
				b1l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 111;
					break;
				}
				b1l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 57;
					break;
				}
				b1l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 110;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 110:
			{
				bpf__GoxbackxtoxMainscreen__pfTTT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 111:
			{
				bpv__InsideServerList__pf = true;
			}
		case 112:
			{
				if(::IsValid(bpv__ColumnNames__pf))
				{
					bpv__ColumnNames__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 113:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpv__ServerRowSel__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 114:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue2__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsDebug_Manager2__pf = Cast<UDebugManager_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue2__pf);
				b1l__K2Node_DynamicCast_bSuccess3__pf = (b1l__K2Node_DynamicCast_AsDebug_Manager2__pf != nullptr);;
				if(::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager2__pf))
				{
					TArray<FBlueprintSessionResult>  __Local__68 = TArray<FBlueprintSessionResult> {};
					b1l__K2Node_DynamicCast_AsDebug_Manager2__pf->bpf__JoinxGame__pfT(((::IsValid(b1l__K2Node_DynamicCast_AsDebug_Manager2__pf)) ? (b1l__K2Node_DynamicCast_AsDebug_Manager2__pf->bpv__FoundxGames__pfT) : (__Local__68))[bpv__ServerRowSel__pf]);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UServerList_C__pf1232574660::bpf__ExecuteUbergraph_ServerList__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf{};
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf{};
	UWidget* bpfv__CallFunc_GetChildAt_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 65:
			{
				__CurrentState = 66;
				break;
			}
		case 66:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpv__InsideServerList__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue2__pf)
				{
					__CurrentState = 76;
					break;
				}
			}
		case 67:
			{
				bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf = UKismetMathLibrary::Greater_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), 0);
				if (!bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 68:
			{
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 75;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 74;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 69;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 69:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxBack__pfG, b1l__K2Node_MakeStruct_SlateColor1__pf);
			}
		case 70:
			{
				bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf = UKismetMathLibrary::Subtract_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), 1);
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UServerList_C__pf1232574660::StaticClass())->ReferencedConvertedFields[0]), bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf);
				bpv__ServerSel__pf = static_cast<E__EServerSel__pf>(bpfv__CallFunc_GetValidValue_ReturnValue__pf);
			}
		case 71:
			{
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 73;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 72;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__ServerSel__pf), static_cast<uint8>(E__EServerSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 86;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 72:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxRefresh__pfG, b1l__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		case 73:
			{
				if(::IsValid(bpv__ResultsContainer__pf))
				{
					bpv__ResultsContainer__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 74:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxRefresh__pfG, b1l__K2Node_MakeStruct_SlateColor1__pf);
				__CurrentState = 70;
				break;
			}
		case 75:
			{
				if(::IsValid(bpv__ResultsContainer__pf))
				{
					bpv__ResultsContainer__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 70;
				break;
			}
		case 76:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf = UKismetMathLibrary::Greater_IntInt(bpv__ServerRowSel__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 85;
					break;
				}
			}
		case 77:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("up list")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 78:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue3__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildAt(bpv__ServerRowSel__pf);
				}
				b1l__K2Node_DynamicCast_AsServer_Row3__pf = Cast<UServerRow_C__pf1232574660>(bpfv__CallFunc_GetChildAt_ReturnValue3__pf);
				b1l__K2Node_DynamicCast_bSuccess6__pf = (b1l__K2Node_DynamicCast_AsServer_Row3__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess6__pf)
				{
					__CurrentState = 84;
					break;
				}
			}
		case 79:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsServer_Row3__pf))
				{
					b1l__K2Node_DynamicCast_AsServer_Row3__pf->UWidget::SetRenderOpacity(0.500000);
				}
			}
		case 80:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf = UKismetMathLibrary::Subtract_IntInt(bpv__ServerRowSel__pf, 1);
				bpv__ServerRowSel__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf;
			}
		case 81:
			{
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_GetChildAt_ReturnValue2__pf = bpv__ScrollingServers__pf->UPanelWidget::GetChildAt(bpv__ServerRowSel__pf);
				}
				b1l__K2Node_DynamicCast_AsServer_Row2__pf = Cast<UServerRow_C__pf1232574660>(bpfv__CallFunc_GetChildAt_ReturnValue2__pf);
				b1l__K2Node_DynamicCast_bSuccess5__pf = (b1l__K2Node_DynamicCast_AsServer_Row2__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess5__pf)
				{
					__CurrentState = 83;
					break;
				}
			}
		case 82:
			{
				if(::IsValid(b1l__K2Node_DynamicCast_AsServer_Row2__pf))
				{
					b1l__K2Node_DynamicCast_AsServer_Row2__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 83:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("cast fail 2 (up list)")), true, true, FLinearColor(1.000000,0.056943,0.000000,1.000000), 150.000000);
				__CurrentState = -1;
				break;
			}
		case 84:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("cast fail 1 (up list)")), true, true, FLinearColor(1.000000,0.031298,0.000000,1.000000), 150.000000);
				__CurrentState = -1;
				break;
			}
		case 85:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("At top of server row.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 86:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxBack__pfG, b1l__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UServerList_C__pf1232574660::bpf__ExecuteUbergraph_ServerList__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 115:
			{
				__CurrentState = 116;
				break;
			}
		case 116:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue1__pf = UKismetMathLibrary::Not_PreBool(bpv__InsideServerList__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue1__pf)
				{
					__CurrentState = 118;
					break;
				}
			}
		case 117:
			{
				bpf__GoxbackxtoxMainscreen__pfTTT();
				__CurrentState = -1;
				break;
			}
		case 118:
			{
				bpv__InsideServerList__pf = false;
			}
		case 119:
			{
				if(::IsValid(bpv__ResultsContainer__pf))
				{
					bpv__ResultsContainer__pf->UWidget::SetRenderOpacity(1.000000);
				}
			}
		case 120:
			{
				bpv__ServerRowSel__pf = 0;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UServerList_C__pf1232574660::bpf__MenuxBack__pfT()
{
	bpf__ExecuteUbergraph_ServerList__pf_4(115);
}
void UServerList_C__pf1232574660::bpf__MenuxSelect__pfT()
{
	bpf__ExecuteUbergraph_ServerList__pf_2(107);
}
void UServerList_C__pf1232574660::bpf__MenuxDown__pfT()
{
	bpf__ExecuteUbergraph_ServerList__pf_0(87);
}
void UServerList_C__pf1232574660::bpf__MenuxUp__pfT()
{
	bpf__ExecuteUbergraph_ServerList__pf_3(65);
}
void UServerList_C__pf1232574660::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_ServerList__pf_1(62);
}
void UServerList_C__pf1232574660::bpf__GetxStatusxMessagexVisibility__pfTTT(/*out*/ ESlateVisibility& bpp__ReturnxValue__pfT)
{
	bpp__ReturnxValue__pfT = bpv__StatusTextVisibility__pf;
}
FText  UServerList_C__pf1232574660::bpf__GetxStatusxMessagexText__pfTTT()
{
	FText bpp__ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpv__StatusText__pf);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_StringToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void UServerList_C__pf1232574660::bpf__GetxRefreshxButtonxEnabled__pfTTT(/*out*/ bool& bpp__ReturnxValue__pfT)
{
	bpp__ReturnxValue__pfT = bpv__RefreshButtonEnabled__pf;
}
void UServerList_C__pf1232574660::bpf__ClearxServerList__pfT()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UServerRow_C__pf1232574660* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_RemoveChild_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__FoundSessionWidgets__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(8);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__FoundSessionWidgets__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpv__ScrollingServers__pf))
				{
					bpfv__CallFunc_RemoveChild_ReturnValue__pf = bpv__ScrollingServers__pf->UPanelWidget::RemoveChild(bpfv__CallFunc_Array_Get_Item__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Clear(bpv__FoundSessionWidgets__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UServerList_C__pf1232574660::bpf__GoxbackxtoxMainscreen__pfTTT()
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	ARegUser_C__pf4061722237* bpfv__K2Node_DynamicCast_AsReg_User__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__K2Node_DynamicCast_AsReg_User__pf = Cast<ARegUser_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsReg_User__pf != nullptr);;
	if(::IsValid(bpfv__K2Node_DynamicCast_AsReg_User__pf))
	{
		UUserWidget*  __Local__69 = ((UUserWidget*)nullptr);
		bpfv__K2Node_DynamicCast_AsReg_User__pf->bpf__RemovexWidget__pfT(((::IsValid(bpfv__K2Node_DynamicCast_AsReg_User__pf)) ? (bpfv__K2Node_DynamicCast_AsReg_User__pf->bpv__WidgetxRef__pfT) : (__Local__69)));
	}
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__K2Node_DynamicCast_AsReg_User__pf = Cast<ARegUser_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsReg_User__pf != nullptr);;
	if(::IsValid(bpfv__K2Node_DynamicCast_AsReg_User__pf))
	{
		bpfv__K2Node_DynamicCast_AsReg_User__pf->bpf__SpawnxWidget__pfT(UMainScreen_C__pf1232574660::StaticClass());
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void UServerList_C__pf1232574660::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
void UServerList_C__pf1232574660::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MenuBase.MenuBase_C 
		{104, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{105, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelSlot 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{66, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/OnlineSubsystemUtils.BlueprintSessionResult 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{106, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.ScrollBox 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.PanelWidget 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBox 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.HorizontalBox 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugManager.DebugManager_C 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MainScreen/ServerRow.ServerRow_C 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/RegUser.RegUser_C 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MainScreen/MainScreen.MainScreen_C 
		{110, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/UserInterface/MainScreen/EServerSel.EServerSel 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UServerList_C__pf1232574660
{
	FRegisterHelper__UServerList_C__pf1232574660()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UserInterface/MainScreen/ServerList"), &UServerList_C__pf1232574660::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UServerList_C__pf1232574660 Instance;
};
FRegisterHelper__UServerList_C__pf1232574660 FRegisterHelper__UServerList_C__pf1232574660::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
