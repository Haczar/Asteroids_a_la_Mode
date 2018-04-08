#include "NativizedAssets.h"
#include "Options__pf1232574660.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/SizeBox.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
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
#include "PlayerC_Regular__pf4061722237.h"
#include "DebugInstance__pf4162722864.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
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
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/CreateSessionCallbackProxy.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/DestroySessionCallbackProxy.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/JoinSessionCallbackProxy.h"
#include "SaveObj__pf4061722237.h"
#include "DStates__pf4162722864.h"
#include "DebugState__pf4162722864.h"
#include "MainScreen__pf1232574660.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "PlyrState__pf4061722237.h"
#include "DebugMode__pf4162722864.h"
#include "InGameHud__pf515974370.h"
#include "GameStart__pf3166771619.h"
#include "PState__pf4061722237.h"
#include "GameOver__pf3166771619.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Spawn_Volume__pf2174024837.h"
#include "Ship__pf3227778944.h"
#include "1979Rounds__pf2955639682.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "BP_Projectile__pf3227778944.h"
#include "Alien__pf655108736.h"
#include "Asteroid__pf2772898577.h"
#include "SRotate__pf3227778944.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "MenuPawn__pf4061722237.h"
#include "Asteroid_Medium__pf2772898577.h"
#include "Asteroid_Large__pf2772898577.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "LevelStart_Widget__pf515974370.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UOptions_C__pf1232574660::UOptions_C__pf1232574660(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UOptions_C__pf1232574660::StaticClass() == GetClass()))
	{
		UOptions_C__pf1232574660::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Asteroids__pf = nullptr;
	bpv__DisplayModeOptions__pf = nullptr;
	bpv__DisplayResolution__pf = nullptr;
	bpv__DisplayResolutionOptions__pf = nullptr;
	bpv__GraphicsSkin__pf = nullptr;
	bpv__GraphicsSkinOptions__pf = nullptr;
	bpv__MasterVolume__pf = nullptr;
	bpv__MusicVolume__pf = nullptr;
	bpv__RenderScale__pf = nullptr;
	bpv__RenderScaleOption__pf = nullptr;
	bpv__SFXVolume__pf = nullptr;
	bpv__TextxDisplayMode__pfG = nullptr;
	bpv__TextxDisplayResolution__pfG = nullptr;
	bpv__TextxGraphicsSkin__pfG = nullptr;
	bpv__TextxMasterVolume__pfG = nullptr;
	bpv__TextxMusicVolume__pfG = nullptr;
	bpv__TextxRenderScale__pfG = nullptr;
	bpv__TextxSFXVolume__pfG = nullptr;
	bpv__TextxvSync__pfG = nullptr;
	bpv__VerticalSync__pf = nullptr;
	bpv__vSyncOption__pf = nullptr;
	bpv__Windowsdisplayoption__pf = nullptr;
	bpv__OptionxSelection__pfT = E__EOptionSel__pf::NewEnumerator0;
	bpv__InOption__pf = false;
	bpv__WindowxModexSel__pfTT = EWindowMode::Type::Windowed;
	bpv__DisplayxResxSel__pfTT = E__EDisplayRes__pf::NewEnumerator0;
	bpv__SelRes__pf = 0;
	bpv__V_SyncString__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Off"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("419AC95C4079296E5C08818AD95F3867") /* Key */
	);
	bpv__RenderScaleVal__pf = 100;
	bpv__DecreaseRenderScale__pf = false;
	bpv__IncreaseRenderScale__pf = false;
	bpv__RenderValDirection__pf = E__ERenderValDirection__pf::NewEnumerator0;
	bpv__ValChangeInterval__pf = 0.033000f;
	bpv__ElapsedTime__pf = 0.000000f;
	bCanEverTick = true;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOptions_C__pf1232574660::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UOptions_C__pf1232574660::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/UserInterface/MainScreen/EOptionSel.EOptionSel")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/UserInterface/MainScreen/ERenderValDirection.ERenderValDirection")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/UserInterface/MainScreen/EDisplayRes.EDisplayRes")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(APlayerC_Regular_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UDebugInstance_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMainScreen_C__pf1232574660::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMenuBase_C__pf3166771619::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(2);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__3->LayoutData.Offsets.Left = 176.000000f;
	__Local__3->LayoutData.Offsets.Top = 100.000000f;
	__Local__3->LayoutData.Offsets.Right = 1024.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 90.000000f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Asteroids"));
	__Local__4->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Asteroids a La Mode - Options"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("E5E79BC945AF52BAA76D4CA87B0EDB28") /* Key */
	);
	__Local__4->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__4->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__4->Font.Size = 42;
	auto& __Local__5 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__4), UTextLayoutWidget::__PPO__Justification() )));
	__Local__5 = ETextJustify::Type::Center;
	__Local__4->Slot = __Local__3;
	__Local__4->bIsVariable = true;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__6 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__6->LayoutData.Offsets.Top = 100.000000f;
	__Local__6->LayoutData.Offsets.Right = 1024.000000f;
	__Local__6->LayoutData.Offsets.Bottom = 700.000000f;
	__Local__6->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__6->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__6->Parent = __Local__1;
	auto __Local__7 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("Menu"));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(8);
	auto __Local__9 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__9->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("Windowsdisplayoption"));
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(3);
	auto __Local__12 = NewObject<UHorizontalBoxSlot>(__Local__10, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__12->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__12->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__12->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-DisplayMode"));
	__Local__13->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Display Mode"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5FD61FCD4A4046D1326885A71FF9902C") /* Key */
	);
	__Local__13->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__13->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__13->Slot = __Local__12;
	__Local__13->bIsVariable = true;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__14 = NewObject<UHorizontalBoxSlot>(__Local__10, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__14->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__14->Parent = __Local__10;
	auto __Local__15 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_56"));
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__11.Add(__Local__14);
	auto __Local__16 = NewObject<UHorizontalBoxSlot>(__Local__10, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_12"));
	__Local__16->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__16->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__16->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__16->Parent = __Local__10;
	auto __Local__17 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("DisplayModeOptions"));
	__Local__17->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Windowed"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("83784F8249036B1AB66C73B8A10E5744") /* Key */
	);
	__Local__17->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__17->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__17->Slot = __Local__16;
	__Local__17->bIsVariable = true;
	__Local__16->Content = __Local__17;
	__Local__11.Add(__Local__16);
	__Local__10->Slot = __Local__9;
	__Local__10->bIsVariable = true;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__18 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"));
	__Local__18->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__18->Parent = __Local__7;
	auto __Local__19 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("DisplayResolution"));
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(3);
	auto __Local__21 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__21->Size.Value = 3.000000f;
	__Local__21->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__21->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__21->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-DisplayResolution"));
	__Local__22->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Display Resolution"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("60806E624BB23BF9BCEF1295E3B8923F") /* Key */
	);
	__Local__22->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__22->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__22->Slot = __Local__21;
	__Local__22->bIsVariable = true;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	auto __Local__23 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__23->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__23->Parent = __Local__19;
	auto __Local__24 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_1"));
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__20.Add(__Local__23);
	auto __Local__25 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__25->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__25->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__25->Parent = __Local__19;
	auto __Local__26 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("DisplayResolutionOptions"));
	__Local__26->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("640x480 - Fake"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0344689C469ED494FA35C28B1B7EF0D9") /* Key */
	);
	__Local__26->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__26->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__26->Slot = __Local__25;
	__Local__26->bIsVariable = true;
	__Local__25->Content = __Local__26;
	__Local__20.Add(__Local__25);
	__Local__19->Slot = __Local__18;
	__Local__19->bIsVariable = true;
	__Local__19->RenderOpacity = 0.500000f;
	__Local__18->Content = __Local__19;
	__Local__8.Add(__Local__18);
	auto __Local__27 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__27->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__27->Parent = __Local__7;
	auto __Local__28 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("VerticalSync"));
	auto& __Local__29 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__29 = TArray<UPanelSlot*> ();
	__Local__29.Reserve(3);
	auto __Local__30 = NewObject<UHorizontalBoxSlot>(__Local__28, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__30->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__30->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__30->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__30->Parent = __Local__28;
	auto __Local__31 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-vSync"));
	__Local__31->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("V-Sync"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D912DE1C437937F7D6DC929A2573D6D7") /* Key */
	);
	__Local__31->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__31->Slot = __Local__30;
	__Local__31->bIsVariable = true;
	__Local__30->Content = __Local__31;
	__Local__29.Add(__Local__30);
	auto __Local__32 = NewObject<UHorizontalBoxSlot>(__Local__28, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_9"));
	__Local__32->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__32->Parent = __Local__28;
	auto __Local__33 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_67"));
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__29.Add(__Local__32);
	auto __Local__34 = NewObject<UHorizontalBoxSlot>(__Local__28, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_11"));
	__Local__34->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__34->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__34->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__34->Parent = __Local__28;
	auto __Local__35 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("vSyncOption"));
	__Local__35->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Off"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C4F4F1E148AEBC3A725AD583640725E6") /* Key */
	);
	__Local__35->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__35->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__35->Slot = __Local__34;
	__Local__35->bIsVariable = true;
	__Local__34->Content = __Local__35;
	__Local__29.Add(__Local__34);
	__Local__28->Slot = __Local__27;
	__Local__28->bIsVariable = true;
	__Local__28->RenderOpacity = 0.500000f;
	__Local__27->Content = __Local__28;
	__Local__8.Add(__Local__27);
	auto __Local__36 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__36->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__36->Parent = __Local__7;
	auto __Local__37 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("RenderScale"));
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__37), UPanelWidget::__PPO__Slots() )));
	__Local__38 = TArray<UPanelSlot*> ();
	__Local__38.Reserve(3);
	auto __Local__39 = NewObject<UHorizontalBoxSlot>(__Local__37, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__39->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__39->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__39->Parent = __Local__37;
	auto __Local__40 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-RenderScale"));
	__Local__40->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Render Scale"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("41E238B544CB993207D512B62E09F751") /* Key */
	);
	__Local__40->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__40->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__40->Slot = __Local__39;
	__Local__40->bIsVariable = true;
	__Local__39->Content = __Local__40;
	__Local__38.Add(__Local__39);
	auto __Local__41 = NewObject<UHorizontalBoxSlot>(__Local__37, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_9"));
	__Local__41->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__41->Parent = __Local__37;
	auto __Local__42 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_71"));
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__38.Add(__Local__41);
	auto __Local__43 = NewObject<UHorizontalBoxSlot>(__Local__37, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__43->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__43->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__43->Parent = __Local__37;
	auto __Local__44 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("RenderScaleOption"));
	__Local__44->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("100"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F3CDA0584971590858C990A9DE09889A") /* Key */
	);
	__Local__44->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__44->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__44->Slot = __Local__43;
	__Local__44->bIsVariable = true;
	__Local__43->Content = __Local__44;
	__Local__38.Add(__Local__43);
	__Local__37->Slot = __Local__36;
	__Local__37->bIsVariable = true;
	__Local__37->RenderOpacity = 0.500000f;
	__Local__36->Content = __Local__37;
	__Local__8.Add(__Local__36);
	auto __Local__45 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__45->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__45->Parent = __Local__7;
	auto __Local__46 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("GraphicsSkin"));
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__46), UPanelWidget::__PPO__Slots() )));
	__Local__47 = TArray<UPanelSlot*> ();
	__Local__47.Reserve(3);
	auto __Local__48 = NewObject<UHorizontalBoxSlot>(__Local__46, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__48->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__48->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__48->Parent = __Local__46;
	auto __Local__49 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-GraphicsSkin"));
	__Local__49->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Graphics Skin"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D6CA328544874E1A15151C9BBD0E9619") /* Key */
	);
	__Local__49->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__49->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__49->Slot = __Local__48;
	__Local__49->bIsVariable = true;
	__Local__48->Content = __Local__49;
	__Local__47.Add(__Local__48);
	auto __Local__50 = NewObject<UHorizontalBoxSlot>(__Local__46, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_9"));
	__Local__50->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__50->Parent = __Local__46;
	auto __Local__51 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_69"));
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__47.Add(__Local__50);
	auto __Local__52 = NewObject<UHorizontalBoxSlot>(__Local__46, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_16"));
	__Local__52->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__52->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__52->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__52->Parent = __Local__46;
	auto __Local__53 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("GraphicsSkinOptions"));
	__Local__53->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Fresh"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("49A8E1EB4FE3F9ED68AA169EBB27A904") /* Key */
	);
	__Local__53->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__53->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__53->Slot = __Local__52;
	__Local__53->bIsVariable = true;
	__Local__52->Content = __Local__53;
	__Local__47.Add(__Local__52);
	__Local__46->Slot = __Local__45;
	__Local__46->bIsVariable = true;
	__Local__46->RenderOpacity = 0.500000f;
	__Local__45->Content = __Local__46;
	__Local__8.Add(__Local__45);
	auto __Local__54 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_8"));
	__Local__54->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__54->Parent = __Local__7;
	auto __Local__55 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("MasterVolume"));
	auto& __Local__56 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__55), UPanelWidget::__PPO__Slots() )));
	__Local__56 = TArray<UPanelSlot*> ();
	__Local__56.Reserve(3);
	auto __Local__57 = NewObject<UHorizontalBoxSlot>(__Local__55, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_19"));
	__Local__57->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__57->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__57->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__57->Parent = __Local__55;
	auto __Local__58 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-MasterVolume"));
	__Local__58->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Master Volume"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("1F19DF004D826A7002A0E3980A427DB0") /* Key */
	);
	__Local__58->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__58->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__58->Slot = __Local__57;
	__Local__58->bIsVariable = true;
	__Local__57->Content = __Local__58;
	__Local__56.Add(__Local__57);
	auto __Local__59 = NewObject<UHorizontalBoxSlot>(__Local__55, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_20"));
	__Local__59->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__59->Parent = __Local__55;
	auto __Local__60 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_123"));
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__56.Add(__Local__59);
	auto __Local__61 = NewObject<UHorizontalBoxSlot>(__Local__55, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__61->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__61->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__61->Parent = __Local__55;
	auto __Local__62 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_1"));
	__Local__62->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("100"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D4A5FA9D428FE55A84AB7188140AC4B5") /* Key */
	);
	__Local__62->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__62->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__56.Add(__Local__61);
	__Local__55->Slot = __Local__54;
	__Local__55->bIsVariable = true;
	__Local__55->RenderOpacity = 0.500000f;
	__Local__54->Content = __Local__55;
	__Local__8.Add(__Local__54);
	auto __Local__63 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_4"));
	__Local__63->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__63->Parent = __Local__7;
	auto __Local__64 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("MusicVolume"));
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__64), UPanelWidget::__PPO__Slots() )));
	__Local__65 = TArray<UPanelSlot*> ();
	__Local__65.Reserve(3);
	auto __Local__66 = NewObject<UHorizontalBoxSlot>(__Local__64, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_19"));
	__Local__66->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__66->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__66->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__66->Parent = __Local__64;
	auto __Local__67 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-MusicVolume"));
	__Local__67->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Music Volume"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C11B441C4E997630DB9E299EC9F91C3F") /* Key */
	);
	__Local__67->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__67->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__67->Slot = __Local__66;
	__Local__67->bIsVariable = true;
	__Local__66->Content = __Local__67;
	__Local__65.Add(__Local__66);
	auto __Local__68 = NewObject<UHorizontalBoxSlot>(__Local__64, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_20"));
	__Local__68->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__68->Parent = __Local__64;
	auto __Local__69 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_3"));
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__65.Add(__Local__68);
	auto __Local__70 = NewObject<UHorizontalBoxSlot>(__Local__64, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__70->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__70->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__70->Parent = __Local__64;
	auto __Local__71 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_2"));
	__Local__71->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("100"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D4A5FA9D428FE55A84AB7188140AC4B5") /* Key */
	);
	__Local__71->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__71->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__71->Slot = __Local__70;
	__Local__70->Content = __Local__71;
	__Local__65.Add(__Local__70);
	__Local__64->Slot = __Local__63;
	__Local__64->bIsVariable = true;
	__Local__64->RenderOpacity = 0.500000f;
	__Local__63->Content = __Local__64;
	__Local__8.Add(__Local__63);
	auto __Local__72 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"));
	__Local__72->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__72->Parent = __Local__7;
	auto __Local__73 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("SFXVolume"));
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__73), UPanelWidget::__PPO__Slots() )));
	__Local__74 = TArray<UPanelSlot*> ();
	__Local__74.Reserve(3);
	auto __Local__75 = NewObject<UHorizontalBoxSlot>(__Local__73, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_19"));
	__Local__75->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__75->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__75->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__75->Parent = __Local__73;
	auto __Local__76 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-SFXVolume"));
	__Local__76->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("SFX Volume"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2A0DA593463223ED7AC87C85A20A3A6F") /* Key */
	);
	__Local__76->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__76->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__76->Slot = __Local__75;
	__Local__76->bIsVariable = true;
	__Local__75->Content = __Local__76;
	__Local__74.Add(__Local__75);
	auto __Local__77 = NewObject<UHorizontalBoxSlot>(__Local__73, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_20"));
	__Local__77->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__77->Parent = __Local__73;
	auto __Local__78 = NewObject<USizeBox>(__Local__0, USizeBox::StaticClass(), TEXT("SizeBox_5"));
	__Local__78->Slot = __Local__77;
	__Local__77->Content = __Local__78;
	__Local__74.Add(__Local__77);
	auto __Local__79 = NewObject<UHorizontalBoxSlot>(__Local__73, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__79->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__79->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__79->Parent = __Local__73;
	auto __Local__80 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_3"));
	__Local__80->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("100"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D4A5FA9D428FE55A84AB7188140AC4B5") /* Key */
	);
	__Local__80->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__80->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__80->Slot = __Local__79;
	__Local__79->Content = __Local__80;
	__Local__74.Add(__Local__79);
	__Local__73->Slot = __Local__72;
	__Local__73->bIsVariable = true;
	__Local__73->RenderOpacity = 0.500000f;
	__Local__72->Content = __Local__73;
	__Local__8.Add(__Local__72);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__2.Add(__Local__6);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UOptions_C__pf1232574660::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__81;
	SlotNames.Append(__Local__81);
}
void UOptions_C__pf1232574660::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__82;
	TArray<FDelegateRuntimeBinding>  __Local__83;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->MiscConvertedSubobjects[0]), __Local__82, __Local__83);
}
void UOptions_C__pf1232574660::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UOptions_C__pf1232574660::bpf__ExecuteUbergraph_Options__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	bool bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue1__pf{};
	FString bpfv__CallFunc_MakeLiteralString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf{};
	FString bpfv__CallFunc_MakeLiteralString_ReturnValue1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_MakeLiteralString_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue5__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf{};
	UGameUserSettings* bpfv__CallFunc_GetGameUserSettings_ReturnValue1__pf{};
	UGameUserSettings* bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue1__pf{};
	FString bpfv__CallFunc_MakeLiteralString_ReturnValue3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue7__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue10__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 7:
			{
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 19;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 25;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Off"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("1313066E4988ECAE5A48208E65192672") /* Key */
	));
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf = UKismetTextLibrary::EqualEqual_TextText(bpv__V_SyncString__pf, bpfv__CallFunc_MakeLiteralText_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf = UGameUserSettings::GetGameUserSettings();
			}
		case 10:
			{
				if(::IsValid(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf))
				{
					bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf->UGameUserSettings::SetVSyncEnabled(false);
				}
			}
		case 11:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("v-sync disabled")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 10.000000);
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_GetGameUserSettings_ReturnValue1__pf = UGameUserSettings::GetGameUserSettings();
			}
		case 13:
			{
				if(::IsValid(bpfv__CallFunc_GetGameUserSettings_ReturnValue1__pf))
				{
					bpfv__CallFunc_GetGameUserSettings_ReturnValue1__pf->UGameUserSettings::SetVSyncEnabled(true);
				}
			}
		case 14:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("v-sync enabled")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 10.000000);
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf).Reset();
				bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue1__pf = UKismetSystemLibrary::GetSupportedFullscreenResolutions(/*out*/ b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf);
			}
		case 16:
			{
				b1l__K2Node_SwitchEnum6_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::Fullscreen));
				if (!b1l__K2Node_SwitchEnum6_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				b1l__K2Node_SwitchEnum6_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::WindowedFullscreen));
				if (!b1l__K2Node_SwitchEnum6_CmpSuccess__pf)
				{
					__CurrentState = 17;
					break;
				}
				b1l__K2Node_SwitchEnum6_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::Windowed));
				if (!b1l__K2Node_SwitchEnum6_CmpSuccess__pf)
				{
					__CurrentState = 26;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf, bpv__SelRes__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item__pf.Y);
				bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item__pf.X);
				bpfv__CallFunc_MakeLiteralString_ReturnValue1__pf = UKismetSystemLibrary::MakeLiteralString(FString(TEXT("wf")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf, FString(TEXT("x")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf, bpfv__CallFunc_MakeLiteralString_ReturnValue1__pf);
				UKismetSystemLibrary::ExecuteConsoleCommand(this, bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf, ((APlayerController*)nullptr));
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf, bpv__SelRes__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item__pf.Y);
				bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item__pf.X);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf, FString(TEXT("x")));
				bpfv__CallFunc_MakeLiteralString_ReturnValue2__pf = UKismetSystemLibrary::MakeLiteralString(FString(TEXT("f")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("r.setres ")), bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue5__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf, bpfv__CallFunc_MakeLiteralString_ReturnValue2__pf);
				UKismetSystemLibrary::ExecuteConsoleCommand(this, bpfv__CallFunc_Concat_StrStr_ReturnValue5__pf, ((APlayerController*)nullptr));
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b1l__K2Node_DynamicCast_AsDebug_Instance__pf = Cast<UDebugInstance_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess1__pf = (b1l__K2Node_DynamicCast_AsDebug_Instance__pf != nullptr);;
				if(::IsValid(b1l__K2Node_DynamicCast_AsDebug_Instance__pf) && ::IsValid(b1l__K2Node_DynamicCast_AsDebug_Instance__pf->bpv__UserxInfo__pfT))
				{
					b1l__K2Node_DynamicCast_AsDebug_Instance__pf->bpv__UserxInfo__pfT->bpf__SetxWindowxMode__pfTT(bpv__WindowxModexSel__pfTT);
				}
			}
		case 20:
			{
				bpf__MenuxBack__pfT();
			}
		case 21:
			{
				b1l__K2Node_SwitchEnum4_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::Fullscreen));
				if (!b1l__K2Node_SwitchEnum4_CmpSuccess__pf)
				{
					__CurrentState = 24;
					break;
				}
				b1l__K2Node_SwitchEnum4_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::WindowedFullscreen));
				if (!b1l__K2Node_SwitchEnum4_CmpSuccess__pf)
				{
					__CurrentState = 23;
					break;
				}
				b1l__K2Node_SwitchEnum4_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::Windowed));
				if (!b1l__K2Node_SwitchEnum4_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.setres 640x480w")), bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("r.setres 640x480wf")), bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = GetOwningPlayer();
				UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("fullscreen")), bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue1__pf = GetOwningPlayer();
				bpfv__CallFunc_MakeLiteralString_ReturnValue3__pf = UKismetSystemLibrary::MakeLiteralString(FString(TEXT("r.ScreenPercentage ")));
				bpfv__CallFunc_Conv_IntToString_ReturnValue7__pf = UKismetStringLibrary::Conv_IntToString(bpv__RenderScaleVal__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue10__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_MakeLiteralString_ReturnValue3__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue7__pf);
				UKismetSystemLibrary::ExecuteConsoleCommand(this, bpfv__CallFunc_Concat_StrStr_ReturnValue10__pf, bpfv__CallFunc_GetOwningPlayer_ReturnValue1__pf);
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_MakeLiteralString_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralString(FString(TEXT("w")));
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions1__pf, bpv__SelRes__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item__pf.Y);
				bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item__pf.X);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf, FString(TEXT("x")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue1__pf, bpfv__CallFunc_MakeLiteralString_ReturnValue__pf);
				UKismetSystemLibrary::ExecuteConsoleCommand(this, bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf, ((APlayerController*)nullptr));
				__CurrentState = -1;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__InOption__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 31:
			{
				b1l__K2Node_SwitchEnum8_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum8_CmpSuccess__pf)
				{
					__CurrentState = 40;
					break;
				}
				b1l__K2Node_SwitchEnum8_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum8_CmpSuccess__pf)
				{
					__CurrentState = 38;
					break;
				}
				b1l__K2Node_SwitchEnum8_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum8_CmpSuccess__pf)
				{
					__CurrentState = 36;
					break;
				}
				b1l__K2Node_SwitchEnum8_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum8_CmpSuccess__pf)
				{
					__CurrentState = 34;
					break;
				}
				b1l__K2Node_SwitchEnum8_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum8_CmpSuccess__pf)
				{
					__CurrentState = 32;
					break;
				}
				b1l__K2Node_SwitchEnum8_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum8_CmpSuccess__pf)
				{
					__CurrentState = 42;
					break;
				}
				b1l__K2Node_SwitchEnum8_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum8_CmpSuccess__pf)
				{
					__CurrentState = 44;
					break;
				}
				b1l__K2Node_SwitchEnum8_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum8_CmpSuccess__pf)
				{
					__CurrentState = 46;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				bpv__InOption__pf = true;
			}
		case 33:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor3__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor3__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxGraphicsSkin__pfG, b1l__K2Node_MakeStruct_SlateColor3__pf);
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				bpv__InOption__pf = true;
			}
		case 35:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor4__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor4__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxRenderScale__pfG, b1l__K2Node_MakeStruct_SlateColor4__pf);
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				bpv__InOption__pf = true;
			}
		case 37:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor5__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor5__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxvSync__pfG, b1l__K2Node_MakeStruct_SlateColor5__pf);
				__CurrentState = -1;
				break;
			}
		case 38:
			{
				bpv__InOption__pf = true;
			}
		case 39:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor6__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor6__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxDisplayResolution__pfG, b1l__K2Node_MakeStruct_SlateColor6__pf);
				__CurrentState = -1;
				break;
			}
		case 40:
			{
				bpv__InOption__pf = true;
			}
		case 41:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor7__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor7__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxDisplayMode__pfG, b1l__K2Node_MakeStruct_SlateColor7__pf);
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				bpv__InOption__pf = true;
			}
		case 43:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor2__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor2__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxMasterVolume__pfG, b1l__K2Node_MakeStruct_SlateColor2__pf);
				__CurrentState = -1;
				break;
			}
		case 44:
			{
				bpv__InOption__pf = true;
			}
		case 45:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor1__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor1__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxMusicVolume__pfG, b1l__K2Node_MakeStruct_SlateColor1__pf);
				__CurrentState = -1;
				break;
			}
		case 46:
			{
				bpv__InOption__pf = true;
			}
		case 47:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxSFXVolume__pfG, b1l__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		case 142:
			{
				__CurrentState = 30;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_C__pf1232574660::bpf__ExecuteUbergraph_Options__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Add_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Add_ByteByte_ReturnValue1__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	bool bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue4__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue5__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue6__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue8__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue9__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_MakeLiteralInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue4__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue1__pf{};
	bool bpfv__CallFunc_Less_ByteByte_ReturnValue1__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Add_ByteByte_ReturnValue__pf = UKismetMathLibrary::Add_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), 1);
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_Add_ByteByte_ReturnValue__pf);
				bpv__WindowxModexSel__pfTT = static_cast<EWindowMode::Type>(bpfv__CallFunc_GetValidValue_ReturnValue__pf);
			}
		case 2:
			{
				b1l__K2Node_SwitchEnum13_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::Fullscreen));
				if (!b1l__K2Node_SwitchEnum13_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				b1l__K2Node_SwitchEnum13_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::WindowedFullscreen));
				if (!b1l__K2Node_SwitchEnum13_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				b1l__K2Node_SwitchEnum13_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::Windowed));
				if (!b1l__K2Node_SwitchEnum13_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__DisplayModeOptions__pf))
				{
					bpv__DisplayModeOptions__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Fullscreen"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("3E32F09447B27087FB265A877501F4AB") /* Key */
	));
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__DisplayModeOptions__pf))
				{
					bpv__DisplayModeOptions__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Borderless"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A5D100A24ED554041180D79D7D7D3301") /* Key */
	));
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				if(::IsValid(bpv__DisplayModeOptions__pf))
				{
					bpv__DisplayModeOptions__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Windowed"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("432F983F42EFA59B767A5287B4901302") /* Key */
	));
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralInt(3);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_MakeLiteralInt_ReturnValue__pf, 1);
				bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Less_ByteByte_ReturnValue__pf = UKismetMathLibrary::Less_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 1;
				break;
			}
		case 82:
			{
				__CurrentState = 83;
				break;
			}
		case 83:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpv__InOption__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue2__pf)
				{
					__CurrentState = 96;
					break;
				}
			}
		case 84:
			{
				bpfv__CallFunc_MakeLiteralInt_ReturnValue1__pf = UKismetSystemLibrary::MakeLiteralInt(8);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue4__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_MakeLiteralInt_ReturnValue1__pf, 1);
				bpfv__CallFunc_Conv_IntToByte_ReturnValue1__pf = UKismetMathLibrary::Conv_IntToByte(bpfv__CallFunc_Subtract_IntInt_ReturnValue4__pf);
				bpfv__CallFunc_Less_ByteByte_ReturnValue1__pf = UKismetMathLibrary::Less_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), bpfv__CallFunc_Conv_IntToByte_ReturnValue1__pf);
				if (!bpfv__CallFunc_Less_ByteByte_ReturnValue1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 85:
			{
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 95;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 94;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 93;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 92;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 91;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 90;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 86;
					break;
				}
				b1l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 110;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 86:
			{
				if(::IsValid(bpv__MusicVolume__pf))
				{
					bpv__MusicVolume__pf->UWidget::SetRenderOpacity(0.500000);
				}
			}
		case 87:
			{
				bpfv__CallFunc_Add_ByteByte_ReturnValue1__pf = UKismetMathLibrary::Add_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), 1);
				bpfv__CallFunc_GetValidValue_ReturnValue2__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->ReferencedConvertedFields[0]), bpfv__CallFunc_Add_ByteByte_ReturnValue1__pf);
				bpv__OptionxSelection__pfT = static_cast<E__EOptionSel__pf>(bpfv__CallFunc_GetValidValue_ReturnValue2__pf);
			}
		case 88:
			{
				b1l__K2Node_SwitchEnum11_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum11_CmpSuccess__pf)
				{
					__CurrentState = 89;
					break;
				}
				b1l__K2Node_SwitchEnum11_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum11_CmpSuccess__pf)
				{
					__CurrentState = 111;
					break;
				}
				b1l__K2Node_SwitchEnum11_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum11_CmpSuccess__pf)
				{
					__CurrentState = 112;
					break;
				}
				b1l__K2Node_SwitchEnum11_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum11_CmpSuccess__pf)
				{
					__CurrentState = 113;
					break;
				}
				b1l__K2Node_SwitchEnum11_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum11_CmpSuccess__pf)
				{
					__CurrentState = 114;
					break;
				}
				b1l__K2Node_SwitchEnum11_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum11_CmpSuccess__pf)
				{
					__CurrentState = 115;
					break;
				}
				b1l__K2Node_SwitchEnum11_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum11_CmpSuccess__pf)
				{
					__CurrentState = 116;
					break;
				}
				b1l__K2Node_SwitchEnum11_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum11_CmpSuccess__pf)
				{
					__CurrentState = 117;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 89:
			{
				if(::IsValid(bpv__Windowsdisplayoption__pf))
				{
					bpv__Windowsdisplayoption__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 90:
			{
				if(::IsValid(bpv__MasterVolume__pf))
				{
					bpv__MasterVolume__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 87;
				break;
			}
		case 91:
			{
				if(::IsValid(bpv__GraphicsSkin__pf))
				{
					bpv__GraphicsSkin__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 87;
				break;
			}
		case 92:
			{
				if(::IsValid(bpv__RenderScale__pf))
				{
					bpv__RenderScale__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 87;
				break;
			}
		case 93:
			{
				if(::IsValid(bpv__VerticalSync__pf))
				{
					bpv__VerticalSync__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 87;
				break;
			}
		case 94:
			{
				if(::IsValid(bpv__DisplayResolution__pf))
				{
					bpv__DisplayResolution__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 87;
				break;
			}
		case 95:
			{
				if(::IsValid(bpv__Windowsdisplayoption__pf))
				{
					bpv__Windowsdisplayoption__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 87;
				break;
			}
		case 96:
			{
				b1l__K2Node_SwitchEnum5_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum5_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				b1l__K2Node_SwitchEnum5_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum5_CmpSuccess__pf)
				{
					__CurrentState = 105;
					break;
				}
				b1l__K2Node_SwitchEnum5_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum5_CmpSuccess__pf)
				{
					__CurrentState = 98;
					break;
				}
				b1l__K2Node_SwitchEnum5_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum5_CmpSuccess__pf)
				{
					__CurrentState = 97;
					break;
				}
				b1l__K2Node_SwitchEnum5_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum5_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum5_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum5_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum5_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum5_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum5_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum5_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 97:
			{
				bpv__RenderValDirection__pf = E__ERenderValDirection__pf::NewEnumerator2;
				__CurrentState = -1;
				break;
			}
		case 98:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue2__pf = UKismetSystemLibrary::MakeLiteralText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Off"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("E0046E9045B5F08DB14C0FB4FF436004") /* Key */
	));
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue2__pf = UKismetTextLibrary::EqualEqual_TextText(bpv__V_SyncString__pf, bpfv__CallFunc_MakeLiteralText_ReturnValue2__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue2__pf)
				{
					__CurrentState = 102;
					break;
				}
			}
		case 99:
			{
				bpv__V_SyncString__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("On"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5DC8C77C416E6911F4DCD9A3B0BD97CE") /* Key */
	);
			}
		case 100:
			{
				if(::IsValid(bpv__vSyncOption__pf))
				{
					bpv__vSyncOption__pf->SetText(bpv__V_SyncString__pf);
				}
			}
		case 101:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Change Text  to On")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 102:
			{
				bpv__V_SyncString__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Off"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("6DE7A9E847576B1421036F8A021C310D") /* Key */
	);
			}
		case 103:
			{
				if(::IsValid(bpv__vSyncOption__pf))
				{
					bpv__vSyncOption__pf->SetText(bpv__V_SyncString__pf);
				}
			}
		case 104:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Change Text to Off")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 105:
			{
				(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf).Reset();
				bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue2__pf = UKismetSystemLibrary::GetSupportedFullscreenResolutions(/*out*/ b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf);
			}
		case 106:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf);
				bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 1);
				bpfv__CallFunc_Less_IntInt_ReturnValue1__pf = UKismetMathLibrary::Less_IntInt(bpv__SelRes__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue3__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 107:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue1__pf = UKismetMathLibrary::Add_IntInt(bpv__SelRes__pf, 1);
				bpv__SelRes__pf = bpfv__CallFunc_Add_IntInt_ReturnValue1__pf;
			}
		case 108:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf, bpv__SelRes__pf, /*out*/ b1l__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue5__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item2__pf.X);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_IntToString_ReturnValue5__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 109:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions2__pf, bpv__SelRes__pf, /*out*/ b1l__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue4__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item2__pf.Y);
				bpfv__CallFunc_Conv_IntToString_ReturnValue6__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item2__pf.X);
				bpfv__CallFunc_Concat_StrStr_ReturnValue8__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue6__pf, FString(TEXT("x")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue9__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue8__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue4__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue9__pf);
				if(::IsValid(bpv__DisplayResolutionOptions__pf))
				{
					bpv__DisplayResolutionOptions__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue1__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 110:
			{
				if(::IsValid(bpv__SFXVolume__pf))
				{
					bpv__SFXVolume__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 87;
				break;
			}
		case 111:
			{
				if(::IsValid(bpv__DisplayResolution__pf))
				{
					bpv__DisplayResolution__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 112:
			{
				if(::IsValid(bpv__VerticalSync__pf))
				{
					bpv__VerticalSync__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 113:
			{
				if(::IsValid(bpv__RenderScale__pf))
				{
					bpv__RenderScale__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 114:
			{
				if(::IsValid(bpv__GraphicsSkin__pf))
				{
					bpv__GraphicsSkin__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 115:
			{
				if(::IsValid(bpv__MasterVolume__pf))
				{
					bpv__MasterVolume__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 116:
			{
				if(::IsValid(bpv__MusicVolume__pf))
				{
					bpv__MusicVolume__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 117:
			{
				if(::IsValid(bpv__SFXVolume__pf))
				{
					bpv__SFXVolume__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_C__pf1232574660::bpf__ExecuteUbergraph_Options__pf_2(int32 bpp__EntryPoint__pf)
{
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 71:
			{
				__CurrentState = 72;
				break;
			}
		case 72:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(b1l__K2Node_Event_InDeltaTime__pf, bpv__ElapsedTime__pf);
				bpv__ElapsedTime__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 73:
			{
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__ElapsedTime__pf, bpv__ValChangeInterval__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 74:
			{
				bpv__ElapsedTime__pf = 0.000000;
			}
		case 75:
			{
				b1l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__RenderValDirection__pf), static_cast<uint8>(E__ERenderValDirection__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__RenderValDirection__pf), static_cast<uint8>(E__ERenderValDirection__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 79;
					break;
				}
				b1l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__RenderValDirection__pf), static_cast<uint8>(E__ERenderValDirection__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 76;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 76:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__RenderScaleVal__pf, 1);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 77:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__RenderScaleVal__pf, 1);
				bpv__RenderScaleVal__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf;
			}
		case 78:
			{
				bpfv__CallFunc_Conv_IntToText_ReturnValue1__pf = UKismetTextLibrary::Conv_IntToText(bpv__RenderScaleVal__pf, false, true, 1, 324);
				if(::IsValid(bpv__RenderScaleOption__pf))
				{
					bpv__RenderScaleOption__pf->SetText(bpfv__CallFunc_Conv_IntToText_ReturnValue1__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 79:
			{
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__RenderScaleVal__pf, 1000);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 80:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__RenderScaleVal__pf, 1);
				bpv__RenderScaleVal__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 81:
			{
				bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpv__RenderScaleVal__pf, false, true, 1, 324);
				if(::IsValid(bpv__RenderScaleOption__pf))
				{
					bpv__RenderScaleOption__pf->SetText(bpfv__CallFunc_Conv_IntToText_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_C__pf1232574660::bpf__ExecuteUbergraph_Options__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue1__pf{};
	uint8 bpfv__CallFunc_Subtract_ByteByte_ReturnValue1__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue3__pf{};
	bool bpfv__CallFunc_Greater_ByteByte_ReturnValue1__pf{};
	bool bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue6__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue7__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue3__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue1__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 122:
			{
				if(::IsValid(bpv__SFXVolume__pf))
				{
					bpv__SFXVolume__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 123:
			{
				bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf = UKismetMathLibrary::Greater_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), 0);
				if (!bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 124:
			{
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 141;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 140;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 139;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 138;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 137;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 136;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 135;
					break;
				}
				b1l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 125;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 125:
			{
				if(::IsValid(bpv__SFXVolume__pf))
				{
					bpv__SFXVolume__pf->UWidget::SetRenderOpacity(0.500000);
				}
			}
		case 126:
			{
				bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf = UKismetMathLibrary::Subtract_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), 1);
				bpfv__CallFunc_GetValidValue_ReturnValue1__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->ReferencedConvertedFields[0]), bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf);
				bpv__OptionxSelection__pfT = static_cast<E__EOptionSel__pf>(bpfv__CallFunc_GetValidValue_ReturnValue1__pf);
			}
		case 127:
			{
				b1l__K2Node_SwitchEnum12_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum12_CmpSuccess__pf)
				{
					__CurrentState = 134;
					break;
				}
				b1l__K2Node_SwitchEnum12_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum12_CmpSuccess__pf)
				{
					__CurrentState = 133;
					break;
				}
				b1l__K2Node_SwitchEnum12_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum12_CmpSuccess__pf)
				{
					__CurrentState = 132;
					break;
				}
				b1l__K2Node_SwitchEnum12_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum12_CmpSuccess__pf)
				{
					__CurrentState = 131;
					break;
				}
				b1l__K2Node_SwitchEnum12_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum12_CmpSuccess__pf)
				{
					__CurrentState = 130;
					break;
				}
				b1l__K2Node_SwitchEnum12_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum12_CmpSuccess__pf)
				{
					__CurrentState = 129;
					break;
				}
				b1l__K2Node_SwitchEnum12_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum12_CmpSuccess__pf)
				{
					__CurrentState = 128;
					break;
				}
				b1l__K2Node_SwitchEnum12_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum12_CmpSuccess__pf)
				{
					__CurrentState = 122;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 128:
			{
				if(::IsValid(bpv__MusicVolume__pf))
				{
					bpv__MusicVolume__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 129:
			{
				if(::IsValid(bpv__MasterVolume__pf))
				{
					bpv__MasterVolume__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 130:
			{
				if(::IsValid(bpv__GraphicsSkin__pf))
				{
					bpv__GraphicsSkin__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 131:
			{
				if(::IsValid(bpv__RenderScale__pf))
				{
					bpv__RenderScale__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 132:
			{
				if(::IsValid(bpv__VerticalSync__pf))
				{
					bpv__VerticalSync__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 133:
			{
				if(::IsValid(bpv__DisplayResolution__pf))
				{
					bpv__DisplayResolution__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 134:
			{
				if(::IsValid(bpv__Windowsdisplayoption__pf))
				{
					bpv__Windowsdisplayoption__pf->UWidget::SetRenderOpacity(1.000000);
				}
				__CurrentState = -1;
				break;
			}
		case 135:
			{
				if(::IsValid(bpv__MusicVolume__pf))
				{
					bpv__MusicVolume__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 126;
				break;
			}
		case 136:
			{
				if(::IsValid(bpv__MasterVolume__pf))
				{
					bpv__MasterVolume__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 126;
				break;
			}
		case 137:
			{
				if(::IsValid(bpv__GraphicsSkin__pf))
				{
					bpv__GraphicsSkin__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 126;
				break;
			}
		case 138:
			{
				if(::IsValid(bpv__RenderScale__pf))
				{
					bpv__RenderScale__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 126;
				break;
			}
		case 139:
			{
				if(::IsValid(bpv__VerticalSync__pf))
				{
					bpv__VerticalSync__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 126;
				break;
			}
		case 140:
			{
				if(::IsValid(bpv__DisplayResolution__pf))
				{
					bpv__DisplayResolution__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 126;
				break;
			}
		case 141:
			{
				if(::IsValid(bpv__Windowsdisplayoption__pf))
				{
					bpv__Windowsdisplayoption__pf->UWidget::SetRenderOpacity(0.500000);
				}
				__CurrentState = 126;
				break;
			}
		case 143:
			{
				__CurrentState = 144;
				break;
			}
		case 144:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue3__pf = UKismetMathLibrary::Not_PreBool(bpv__InOption__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue3__pf)
				{
					__CurrentState = 145;
					break;
				}
				__CurrentState = 123;
				break;
			}
		case 145:
			{
				b1l__K2Node_SwitchEnum7_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum7_CmpSuccess__pf)
				{
					__CurrentState = 158;
					break;
				}
				b1l__K2Node_SwitchEnum7_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum7_CmpSuccess__pf)
				{
					__CurrentState = 154;
					break;
				}
				b1l__K2Node_SwitchEnum7_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum7_CmpSuccess__pf)
				{
					__CurrentState = 147;
					break;
				}
				b1l__K2Node_SwitchEnum7_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum7_CmpSuccess__pf)
				{
					__CurrentState = 146;
					break;
				}
				b1l__K2Node_SwitchEnum7_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum7_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum7_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum7_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum7_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum7_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b1l__K2Node_SwitchEnum7_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum7_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 146:
			{
				bpv__RenderValDirection__pf = E__ERenderValDirection__pf::NewEnumerator1;
				__CurrentState = -1;
				break;
			}
		case 147:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue1__pf = UKismetSystemLibrary::MakeLiteralText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Off"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("E0493142471012A4D400598D84AB23FE") /* Key */
	));
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue1__pf = UKismetTextLibrary::EqualEqual_TextText(bpv__V_SyncString__pf, bpfv__CallFunc_MakeLiteralText_ReturnValue1__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue1__pf)
				{
					__CurrentState = 151;
					break;
				}
			}
		case 148:
			{
				bpv__V_SyncString__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("On"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C6AEC52A414736BB3DDBC8963CE1B0C3") /* Key */
	);
			}
		case 149:
			{
				if(::IsValid(bpv__vSyncOption__pf))
				{
					bpv__vSyncOption__pf->SetText(bpv__V_SyncString__pf);
				}
			}
		case 150:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Change Text  to On")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 151:
			{
				bpv__V_SyncString__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Off"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("3F016C2443401699BB24BAA27EBD38F1") /* Key */
	);
			}
		case 152:
			{
				if(::IsValid(bpv__vSyncOption__pf))
				{
					bpv__vSyncOption__pf->SetText(bpv__V_SyncString__pf);
				}
			}
		case 153:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Change Text to Off")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 154:
			{
				(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf).Reset();
				bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue__pf = UKismetSystemLibrary::GetSupportedFullscreenResolutions(/*out*/ b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf);
			}
		case 155:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf = UKismetMathLibrary::Greater_IntInt(bpv__SelRes__pf, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 156:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf = UKismetMathLibrary::Subtract_IntInt(bpv__SelRes__pf, 1);
				bpv__SelRes__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue2__pf;
			}
		case 157:
			{
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf, bpv__SelRes__pf, /*out*/ b1l__CallFunc_Array_Get_Item1__pf);
				bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item1__pf.Y);
				bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf = UKismetStringLibrary::Conv_IntToString(b1l__CallFunc_Array_Get_Item1__pf.X);
				bpfv__CallFunc_Concat_StrStr_ReturnValue6__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf, FString(TEXT("x")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue7__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue6__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue7__pf);
				if(::IsValid(bpv__DisplayResolutionOptions__pf))
				{
					bpv__DisplayResolutionOptions__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 158:
			{
				bpfv__CallFunc_Greater_ByteByte_ReturnValue1__pf = UKismetMathLibrary::Greater_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), 0);
				if (!bpfv__CallFunc_Greater_ByteByte_ReturnValue1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 159:
			{
				bpfv__CallFunc_Subtract_ByteByte_ReturnValue1__pf = UKismetMathLibrary::Subtract_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), 1);
				bpfv__CallFunc_GetValidValue_ReturnValue3__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOptions_C__pf1232574660::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpfv__CallFunc_Subtract_ByteByte_ReturnValue1__pf);
				bpv__WindowxModexSel__pfTT = static_cast<EWindowMode::Type>(bpfv__CallFunc_GetValidValue_ReturnValue3__pf);
			}
		case 160:
			{
				b1l__K2Node_SwitchEnum9_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::Fullscreen));
				if (!b1l__K2Node_SwitchEnum9_CmpSuccess__pf)
				{
					__CurrentState = 163;
					break;
				}
				b1l__K2Node_SwitchEnum9_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::WindowedFullscreen));
				if (!b1l__K2Node_SwitchEnum9_CmpSuccess__pf)
				{
					__CurrentState = 162;
					break;
				}
				b1l__K2Node_SwitchEnum9_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__WindowxModexSel__pfTT), static_cast<uint8>(EWindowMode::Windowed));
				if (!b1l__K2Node_SwitchEnum9_CmpSuccess__pf)
				{
					__CurrentState = 161;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 161:
			{
				if(::IsValid(bpv__DisplayModeOptions__pf))
				{
					bpv__DisplayModeOptions__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Windowed"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("432F983F42EFA59B767A5287B4901302") /* Key */
	));
				}
				__CurrentState = -1;
				break;
			}
		case 162:
			{
				if(::IsValid(bpv__DisplayModeOptions__pf))
				{
					bpv__DisplayModeOptions__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Borderless"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A5D100A24ED554041180D79D7D7D3301") /* Key */
	));
				}
				__CurrentState = -1;
				break;
			}
		case 163:
			{
				if(::IsValid(bpv__DisplayModeOptions__pf))
				{
					bpv__DisplayModeOptions__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Fullscreen"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("3E32F09447B27087FB265A877501F4AB") /* Key */
	));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_C__pf1232574660::bpf__ExecuteUbergraph_Options__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 48:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				if(::IsValid(b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf))
				{
					b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpf__SpawnxWidget__pfT(UMainScreen_C__pf1232574660::StaticClass());
				}
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue1__pf = UKismetMathLibrary::Not_PreBool(bpv__InOption__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue1__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 50:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				if(::IsValid(b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf))
				{
					UUserWidget*  __Local__84 = ((UUserWidget*)nullptr);
					b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpf__RemovexWidget__pfT(((::IsValid(b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf)) ? (b1l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpv__WidgetxRef__pfT) : (__Local__84)));
				}
				__CurrentState = 48;
				break;
			}
		case 51:
			{
				b1l__K2Node_SwitchEnum10_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator0));
				if (!b1l__K2Node_SwitchEnum10_CmpSuccess__pf)
				{
					__CurrentState = 66;
					break;
				}
				b1l__K2Node_SwitchEnum10_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator1));
				if (!b1l__K2Node_SwitchEnum10_CmpSuccess__pf)
				{
					__CurrentState = 64;
					break;
				}
				b1l__K2Node_SwitchEnum10_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator3));
				if (!b1l__K2Node_SwitchEnum10_CmpSuccess__pf)
				{
					__CurrentState = 62;
					break;
				}
				b1l__K2Node_SwitchEnum10_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator4));
				if (!b1l__K2Node_SwitchEnum10_CmpSuccess__pf)
				{
					__CurrentState = 60;
					break;
				}
				b1l__K2Node_SwitchEnum10_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator2));
				if (!b1l__K2Node_SwitchEnum10_CmpSuccess__pf)
				{
					__CurrentState = 58;
					break;
				}
				b1l__K2Node_SwitchEnum10_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator5));
				if (!b1l__K2Node_SwitchEnum10_CmpSuccess__pf)
				{
					__CurrentState = 56;
					break;
				}
				b1l__K2Node_SwitchEnum10_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator6));
				if (!b1l__K2Node_SwitchEnum10_CmpSuccess__pf)
				{
					__CurrentState = 54;
					break;
				}
				b1l__K2Node_SwitchEnum10_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__OptionxSelection__pfT), static_cast<uint8>(E__EOptionSel__pf::NewEnumerator7));
				if (!b1l__K2Node_SwitchEnum10_CmpSuccess__pf)
				{
					__CurrentState = 52;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 52:
			{
				bpv__InOption__pf = false;
			}
		case 53:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor8__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor8__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxSFXVolume__pfG, b1l__K2Node_MakeStruct_SlateColor8__pf);
				__CurrentState = -1;
				break;
			}
		case 54:
			{
				bpv__InOption__pf = false;
			}
		case 55:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor9__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor9__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxMusicVolume__pfG, b1l__K2Node_MakeStruct_SlateColor9__pf);
				__CurrentState = -1;
				break;
			}
		case 56:
			{
				bpv__InOption__pf = false;
			}
		case 57:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor10__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor10__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxMasterVolume__pfG, b1l__K2Node_MakeStruct_SlateColor10__pf);
				__CurrentState = -1;
				break;
			}
		case 58:
			{
				bpv__InOption__pf = false;
			}
		case 59:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor11__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor11__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxGraphicsSkin__pfG, b1l__K2Node_MakeStruct_SlateColor11__pf);
				__CurrentState = -1;
				break;
			}
		case 60:
			{
				bpv__InOption__pf = false;
			}
		case 61:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor12__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor12__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxRenderScale__pfG, b1l__K2Node_MakeStruct_SlateColor12__pf);
				__CurrentState = -1;
				break;
			}
		case 62:
			{
				bpv__InOption__pf = false;
			}
		case 63:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor13__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor13__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxvSync__pfG, b1l__K2Node_MakeStruct_SlateColor13__pf);
				__CurrentState = -1;
				break;
			}
		case 64:
			{
				bpv__InOption__pf = false;
			}
		case 65:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor14__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor14__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxDisplayResolution__pfG, b1l__K2Node_MakeStruct_SlateColor14__pf);
				__CurrentState = -1;
				break;
			}
		case 66:
			{
				bpv__InOption__pf = false;
			}
		case 67:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(b1l__K2Node_MakeStruct_SlateColor15__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b1l__K2Node_MakeStruct_SlateColor15__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(bpv__TextxDisplayMode__pfG, b1l__K2Node_MakeStruct_SlateColor15__pf);
				__CurrentState = -1;
				break;
			}
		case 70:
			{
				__CurrentState = 49;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_C__pf1232574660::bpf__ExecuteUbergraph_Options__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 120);
	// optimized KCST_UnconditionalGoto
	bpv__RenderValDirection__pf = E__ERenderValDirection__pf::NewEnumerator0;
	return; // KCST_GotoReturn
}
void UOptions_C__pf1232574660::bpf__ExecuteUbergraph_Options__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 118);
	// optimized KCST_UnconditionalGoto
	bpv__RenderValDirection__pf = E__ERenderValDirection__pf::NewEnumerator0;
	return; // KCST_GotoReturn
}
void UOptions_C__pf1232574660::bpf__ExecuteUbergraph_Options__pf_7(int32 bpp__EntryPoint__pf)
{
	UGameUserSettings* bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 69);
	// optimized KCST_UnconditionalGoto
	bpv__OptionxSelection__pfT = E__EOptionSel__pf::NewEnumerator0;
	// optimized KCST_UnconditionalGoto
	bpv__InOption__pf = false;
	bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf = UGameUserSettings::GetGameUserSettings();
	if(::IsValid(bpv__vSyncOption__pf))
	{
		bpv__vSyncOption__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Off"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("EA1853CB467EE20BCC94769DA4D93C29") /* Key */
	));
	}
	return; // KCST_GotoReturn
}
void UOptions_C__pf1232574660::bpf__MenuxUp__pfT()
{
	bpf__ExecuteUbergraph_Options__pf_3(143);
}
void UOptions_C__pf1232574660::bpf__MenuxSelect__pfT()
{
	bpf__ExecuteUbergraph_Options__pf_0(142);
}
void UOptions_C__pf1232574660::bpf__MenuxDownxReleased__pfTT()
{
	bpf__ExecuteUbergraph_Options__pf_5(120);
}
void UOptions_C__pf1232574660::bpf__MenuxUpxReleased__pfTT()
{
	bpf__ExecuteUbergraph_Options__pf_6(118);
}
void UOptions_C__pf1232574660::bpf__MenuxDown__pfT()
{
	bpf__ExecuteUbergraph_Options__pf_1(82);
}
void UOptions_C__pf1232574660::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b1l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b1l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_Options__pf_2(71);
}
void UOptions_C__pf1232574660::bpf__MenuxBack__pfT()
{
	bpf__ExecuteUbergraph_Options__pf_4(70);
}
void UOptions_C__pf1232574660::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Options__pf_7(69);
}
PRAGMA_DISABLE_OPTIMIZATION
void UOptions_C__pf1232574660::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/_Imported/Fonts/Hyperspace_Font.Hyperspace_Font 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/_Imported/Fonts/Hyperspace_Bold_Font.Hyperspace_Bold_Font 
		{76, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EWindowMode 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UOptions_C__pf1232574660::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MenuBase.MenuBase_C 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{98, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.HorizontalBox 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/PlayerC_Regular.PlayerC_Regular_C 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugInstance.DebugInstance_C 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MainScreen/MainScreen.MainScreen_C 
		{101, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/UserInterface/MainScreen/EOptionSel.EOptionSel 
		{102, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/UserInterface/MainScreen/ERenderValDirection.ERenderValDirection 
		{103, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/UserInterface/MainScreen/EDisplayRes.EDisplayRes 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UOptions_C__pf1232574660
{
	FRegisterHelper__UOptions_C__pf1232574660()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UserInterface/MainScreen/Options"), &UOptions_C__pf1232574660::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UOptions_C__pf1232574660 Instance;
};
FRegisterHelper__UOptions_C__pf1232574660 FRegisterHelper__UOptions_C__pf1232574660::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
