#include "NativizedAssets.h"
#include "MainScreen__pf1232574660.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/ScaleBox.h"
#include "Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/Image.h"
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
#include "DebugInstance__pf4162722864.h"
#include "DebugState__pf4162722864.h"
#include "PlayerC_Regular__pf4061722237.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
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
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "PlyrState__pf4061722237.h"
#include "DebugMode__pf4162722864.h"
#include "InGameHud__pf515974370.h"
#include "GameStart__pf3166771619.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "PState__pf4061722237.h"
#include "GameOver__pf3166771619.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Spawn_Volume__pf2174024837.h"
#include "Ship__pf3227778944.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
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
#include "Coop__pf1232574660.h"
#include "Options__pf1232574660.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UMainScreen_C__pf1232574660::UMainScreen_C__pf1232574660(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UMainScreen_C__pf1232574660::StaticClass() == GetClass()))
	{
		UMainScreen_C__pf1232574660::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__AsteroidsIMg__pf = nullptr;
	bpv__CoxOp__pfG = nullptr;
	bpv__Exit__pf = nullptr;
	bpv__Option__pf = nullptr;
	bpv__StartGame__pf = nullptr;
	bpv__TextxCoxOp__pfGG = nullptr;
	bpv__TextxExit__pfG = nullptr;
	bpv__TextxOption__pfG = nullptr;
	bpv__TextxStartG__pfG = nullptr;
	bpv__CurrentlySel__pf = E__EMenSel__pf::NewEnumerator0;
	bpv__DM_GameModex__pfT = E__DStates__pf::NewEnumerator0;
	bCanEverTick = false;
	bCanEverPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMainScreen_C__pf1232574660::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UMainScreen_C__pf1232574660::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/UserInterface/MainScreen/EMenSel.EMenSel")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Modes/Debug/DStates.DStates")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UDebugInstance_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADebugState_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APlayerC_Regular_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UCoop_C__pf1232574660::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UOptions_C__pf1232574660::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(3);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_19"));
	__Local__3->LayoutData.Offsets.Top = 150.000000f;
	__Local__3->LayoutData.Offsets.Right = 250.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 285.000000f;
	__Local__3->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__3->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__3->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("VerticalBox_21"));
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(7);
	auto __Local__6 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__6->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("MenuItem"));
	__Local__7->bSingleLayoutPass = false;
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(1);
	auto __Local__9 = NewObject<UScaleBoxSlot>(__Local__7, UScaleBoxSlot::StaticClass(), TEXT("ScaleBoxSlot_1"));
	__Local__9->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__9->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("StartGame"));
	__Local__10->BackgroundColor = FLinearColor(1.000000, 0.000000, 0.000000, 0.000000);
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(1);
	auto __Local__12 = NewObject<UButtonSlot>(__Local__10, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-StartG"));
	__Local__13->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Start Game"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4BE78EFD48117DB8C88E69A8B3B8C664") /* Key */
	);
	auto& __Local__14 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__13->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__14 = FLinearColor(1.000000, 1.000000, 1.000000, 0.500000);
	__Local__13->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__13->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__13->Slot = __Local__12;
	__Local__13->bIsVariable = true;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	__Local__7->Slot = __Local__6;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__15 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"));
	__Local__15->Parent = __Local__4;
	auto __Local__16 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__16->Size = FVector2D(1.000000, 25.000000);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__5.Add(__Local__15);
	auto __Local__17 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_4"));
	__Local__17->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__17->Parent = __Local__4;
	auto __Local__18 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox_3"));
	__Local__18->bSingleLayoutPass = false;
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__18), UPanelWidget::__PPO__Slots() )));
	__Local__19 = TArray<UPanelSlot*> ();
	__Local__19.Reserve(1);
	auto __Local__20 = NewObject<UScaleBoxSlot>(__Local__18, UScaleBoxSlot::StaticClass(), TEXT("ScaleBoxSlot_1"));
	__Local__20->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__20->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__20->Parent = __Local__18;
	auto __Local__21 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Co-Op"));
	__Local__21->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__21), UPanelWidget::__PPO__Slots() )));
	__Local__22 = TArray<UPanelSlot*> ();
	__Local__22.Reserve(1);
	auto __Local__23 = NewObject<UButtonSlot>(__Local__21, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__23->Parent = __Local__21;
	auto __Local__24 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Co-Op"));
	__Local__24->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Co-Op"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("91017C154169AEFD8D42458DA253BBCC") /* Key */
	);
	auto& __Local__25 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__24->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__25 = FLinearColor(1.000000, 1.000000, 1.000000, 0.500000);
	__Local__24->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__24->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__24->Slot = __Local__23;
	__Local__24->bIsVariable = true;
	__Local__23->Content = __Local__24;
	__Local__22.Add(__Local__23);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__19.Add(__Local__20);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__5.Add(__Local__17);
	auto __Local__26 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__26->Parent = __Local__4;
	auto __Local__27 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_1"));
	__Local__27->Size = FVector2D(1.000000, 25.000000);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__5.Add(__Local__26);
	auto __Local__28 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_8"));
	__Local__28->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__28->Parent = __Local__4;
	auto __Local__29 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox_4"));
	__Local__29->bSingleLayoutPass = false;
	auto& __Local__30 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__29), UPanelWidget::__PPO__Slots() )));
	__Local__30 = TArray<UPanelSlot*> ();
	__Local__30.Reserve(1);
	auto __Local__31 = NewObject<UScaleBoxSlot>(__Local__29, UScaleBoxSlot::StaticClass(), TEXT("ScaleBoxSlot_1"));
	__Local__31->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__31->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__31->Parent = __Local__29;
	auto __Local__32 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Option"));
	__Local__32->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__32), UPanelWidget::__PPO__Slots() )));
	__Local__33 = TArray<UPanelSlot*> ();
	__Local__33.Reserve(1);
	auto __Local__34 = NewObject<UButtonSlot>(__Local__32, UButtonSlot::StaticClass(), TEXT("ButtonSlot_4"));
	__Local__34->Parent = __Local__32;
	auto __Local__35 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Option"));
	__Local__35->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Options"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D422B7BF4C6AAEE591E0D693A6E4D623") /* Key */
	);
	auto& __Local__36 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__35->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__36 = FLinearColor(1.000000, 1.000000, 1.000000, 0.500000);
	__Local__35->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__35->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__35->Slot = __Local__34;
	__Local__35->bIsVariable = true;
	__Local__34->Content = __Local__35;
	__Local__33.Add(__Local__34);
	__Local__32->Slot = __Local__31;
	__Local__31->Content = __Local__32;
	__Local__30.Add(__Local__31);
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__5.Add(__Local__28);
	auto __Local__37 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__37->Parent = __Local__4;
	auto __Local__38 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_2"));
	__Local__38->Size = FVector2D(1.000000, 25.000000);
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__5.Add(__Local__37);
	auto __Local__39 = NewObject<UVerticalBoxSlot>(__Local__4, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_11"));
	__Local__39->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__39->Parent = __Local__4;
	auto __Local__40 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("ScaleBox_5"));
	__Local__40->bSingleLayoutPass = false;
	auto& __Local__41 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__40), UPanelWidget::__PPO__Slots() )));
	__Local__41 = TArray<UPanelSlot*> ();
	__Local__41.Reserve(1);
	auto __Local__42 = NewObject<UScaleBoxSlot>(__Local__40, UScaleBoxSlot::StaticClass(), TEXT("ScaleBoxSlot_1"));
	__Local__42->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__42->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__42->Parent = __Local__40;
	auto __Local__43 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Exit"));
	__Local__43->BackgroundColor = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__43), UPanelWidget::__PPO__Slots() )));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(1);
	auto __Local__45 = NewObject<UButtonSlot>(__Local__43, UButtonSlot::StaticClass(), TEXT("ButtonSlot_5"));
	__Local__45->Parent = __Local__43;
	auto __Local__46 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Text-Exit"));
	__Local__46->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Exit"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D84ED3CD4A67F4D5B7B324933671EFF6") /* Key */
	);
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 1.000000, 1.000000, 0.500000);
	__Local__46->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__46->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__46->Slot = __Local__45;
	__Local__46->bIsVariable = true;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__41.Add(__Local__42);
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__5.Add(__Local__39);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__48 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_18"));
	__Local__48->LayoutData.Offsets.Right = 1020.000000f;
	__Local__48->LayoutData.Offsets.Bottom = 100.000000f;
	__Local__48->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.300000);
	__Local__48->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.300000);
	__Local__48->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__48->Parent = __Local__1;
	auto __Local__49 = NewObject<UScaleBox>(__Local__0, UScaleBox::StaticClass(), TEXT("TitleScale"));
	__Local__49->bSingleLayoutPass = false;
	auto& __Local__50 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__49), UPanelWidget::__PPO__Slots() )));
	__Local__50 = TArray<UPanelSlot*> ();
	__Local__50.Reserve(1);
	auto __Local__51 = NewObject<UScaleBoxSlot>(__Local__49, UScaleBoxSlot::StaticClass(), TEXT("ScaleBoxSlot_0"));
	__Local__51->Parent = __Local__49;
	auto __Local__52 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Asteroids"));
	__Local__52->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Asteroids a La Mode"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2513C5D4453AD52C1989138BE7EC8B23") /* Key */
	);
	__Local__52->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__52->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__52->Slot = __Local__51;
	__Local__51->Content = __Local__52;
	__Local__50.Add(__Local__51);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__2.Add(__Local__48);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_17"));
	__Local__53->Parent = __Local__1;
	auto __Local__54 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("AsteroidsIMg"));
	__Local__54->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__2.Add(__Local__53);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UMainScreen_C__pf1232574660::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__55;
	SlotNames.Append(__Local__55);
}
void UMainScreen_C__pf1232574660::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__56;
	TArray<FDelegateRuntimeBinding>  __Local__57;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->MiscConvertedSubobjects[0]), __Local__56, __Local__57);
}
void UMainScreen_C__pf1232574660::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UMainScreen_C__pf1232574660::bpf__ExecuteUbergraph_MainScreen__pf_0(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Menu Select called.")), true, true, FLinearColor(1.000000,0.000000,0.947412,1.000000), 1000.000000);
			}
		case 12:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 13;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 19;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 21;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 14;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsDebug_Instance__pf = Cast<UDebugInstance_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsDebug_Instance__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Instance__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_Instance__pf->bpf__SetxDebugMxtoxArcade1979__pfTTT();
				}
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 17:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf))
				{
					UUserWidget*  __Local__58 = ((UUserWidget*)nullptr);
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf->bpf__RemovexWidget__pfT(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf->bpv__WidgetxRef__pfT) : (__Local__58)));
				}
			}
		case 18:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf->bpf__SpawnxWidget__pfT(UCoop_C__pf1232574660::StaticClass());
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf))
				{
					UUserWidget*  __Local__59 = ((UUserWidget*)nullptr);
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpf__RemovexWidget__pfT(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpv__WidgetxRef__pfT) : (__Local__59)));
				}
			}
		case 20:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpf__SpawnxWidget__pfT(UOptions_C__pf1232574660::StaticClass());
				}
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UKismetSystemLibrary::QuitGame(this, bpfv__CallFunc_GetPlayerController_ReturnValue__pf, EQuitPreference::Quit);
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsDebug_Instance1__pf = Cast<UDebugInstance_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsDebug_Instance1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 23:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Instance1__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_Instance1__pf->bpf__SetxDebugMxtoxDebugMode__pfTTT();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMainScreen_C__pf1232574660::bpf__ExecuteUbergraph_MainScreen__pf_1(int32 bpp__EntryPoint__pf)
{
	uint8 bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue1__pf{};
	bool bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 36);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf = UKismetMathLibrary::Greater_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), 0);
	if (!bpfv__CallFunc_Greater_ByteByte_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__RevertxAlphaxxMenuxItemx__pfTTLTK();
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf = UKismetMathLibrary::Subtract_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), 1);
	bpfv__CallFunc_GetValidValue_ReturnValue1__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->ReferencedConvertedFields[0]), bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf);
	bpv__CurrentlySel__pf = static_cast<E__EMenSel__pf>(bpfv__CallFunc_GetValidValue_ReturnValue1__pf);
	// optimized KCST_UnconditionalGoto
	bpf__SetxAlphaxxMenuxItemx__pfTTLTK(bpv__CurrentlySel__pf);
	return; // KCST_GotoReturn
}
void UMainScreen_C__pf1232574660::bpf__ExecuteUbergraph_MainScreen__pf_2(int32 bpp__EntryPoint__pf)
{
	uint8 bpfv__CallFunc_Add_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_ByteByte_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf = UKismetMathLibrary::Conv_IntToByte(3);
	bpfv__CallFunc_Less_ByteByte_ReturnValue__pf = UKismetMathLibrary::Less_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), bpfv__CallFunc_Conv_IntToByte_ReturnValue__pf);
	if (!bpfv__CallFunc_Less_ByteByte_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpf__RevertxAlphaxxMenuxItemx__pfTTLTK();
	bpfv__CallFunc_Add_ByteByte_ReturnValue__pf = UKismetMathLibrary::Add_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), 1);
	bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->ReferencedConvertedFields[0]), bpfv__CallFunc_Add_ByteByte_ReturnValue__pf);
	bpv__CurrentlySel__pf = static_cast<E__EMenSel__pf>(bpfv__CallFunc_GetValidValue_ReturnValue__pf);
	bpf__SetxAlphaxxMenuxItemx__pfTTLTK(bpv__CurrentlySel__pf);
	return; // KCST_GotoReturn
}
void UMainScreen_C__pf1232574660::bpf__ExecuteUbergraph_MainScreen__pf_3(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Add_ByteByte_ReturnValue1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 7:
			{
				bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->ReferencedConvertedFields[1]), static_cast<uint8>(bpv__DM_GameModex__pfT));
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue__pf, true, true, FLinearColor(1.000000,0.876270,0.000000,1.000000), 5.000000);
				__CurrentState = -1;
				break;
			}
		case 29:
			{
				__CurrentState = 30;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), 7);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 31:
			{
				bpfv__CallFunc_Add_ByteByte_ReturnValue1__pf = UKismetMathLibrary::Add_ByteByte(static_cast<uint8>(bpv__DM_GameModex__pfT), 1);
				bpfv__CallFunc_GetValidValue_ReturnValue2__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->ReferencedConvertedFields[1]), bpfv__CallFunc_Add_ByteByte_ReturnValue1__pf);
				bpv__DM_GameModex__pfT = static_cast<E__DStates__pf>(bpfv__CallFunc_GetValidValue_ReturnValue2__pf);
			}
		case 32:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Current GM ^^")), true, true, FLinearColor(1.000000,0.876270,0.000000,1.000000), 5.000000);
				__CurrentState = 7;
				break;
			}
		case 33:
			{
				bpv__DM_GameModex__pfT = E__DStates__pf::NewEnumerator0;
				__CurrentState = 32;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMainScreen_C__pf1232574660::bpf__ExecuteUbergraph_MainScreen__pf_4(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue1__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxStartG__pfG, /*out*/ b0l__K2Node_MakeStruct_SlateColor__pf);
	bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
	b0l__K2Node_DynamicCast_AsDebug_State__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsDebug_State__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Current GM ^^")), true, true, FLinearColor(1.000000,0.876270,0.000000,1.000000), 5.000000);
	bpv__DM_GameModex__pfT = E__DStates__pf::NewEnumerator0;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue1__pf = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(CastChecked<UEnum>(CastChecked<UDynamicClass>(UMainScreen_C__pf1232574660::StaticClass())->ReferencedConvertedFields[1]), static_cast<uint8>(bpv__DM_GameModex__pfT));
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_GetEnumeratorUserFriendlyName_ReturnValue1__pf, true, true, FLinearColor(1.000000,0.876270,0.000000,1.000000), 5.000000);
	return; // KCST_GotoReturn
}
void UMainScreen_C__pf1232574660::bpf__MovexUp__pfT()
{
	bpf__ExecuteUbergraph_MainScreen__pf_1(36);
}
void UMainScreen_C__pf1232574660::bpf__DebugxxChangeMode__pf3T()
{
	bpf__ExecuteUbergraph_MainScreen__pf_3(29);
}
void UMainScreen_C__pf1232574660::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_MainScreen__pf_4(24);
}
void UMainScreen_C__pf1232574660::bpf__MenuxSelect__pfT()
{
	bpf__ExecuteUbergraph_MainScreen__pf_0(10);
}
void UMainScreen_C__pf1232574660::bpf__MovexDown__pfT()
{
	bpf__ExecuteUbergraph_MainScreen__pf_2(2);
}
void UMainScreen_C__pf1232574660::bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ UTextBlock*& bpp__TextxObj__pfT, /*out*/ FSlateColor& bpp__ColorxandxOpacity__pfTT)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpp__TextxObj__pfT))
				{
					bpp__TextxObj__pfT->UTextBlock::SetColorAndOpacity(bpp__ColorxandxOpacity__pfTT);
				}
			}
		case 2:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
FSlateColor  UMainScreen_C__pf1232574660::bpf__Get_TextxStartG_ColorAndOpacity_0__pfG()
{
	FSlateColor bpp__ReturnValue__pf{};
	auto __Local__60 = FSlateColor{};
	bpp__ReturnValue__pf = __Local__60;
	return bpp__ReturnValue__pf;
}
void UMainScreen_C__pf1232574660::bpf__RevertxAlphaxxMenuxItemx__pfTTLTK()
{
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor__pf{};
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__CurrentlySel__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxStartG__pfG, /*out*/ bpfv__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxCoxOp__pfGG, /*out*/ bpfv__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxOption__pfG, /*out*/ bpfv__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,0.500000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxExit__pfG, /*out*/ bpfv__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMainScreen_C__pf1232574660::bpf__SetxAlphaxxMenuxItemx__pfTTLTK(E__EMenSel__pf bpp__Selection__pf)
{
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	FSlateColor bpfv__K2Node_MakeStruct_SlateColor__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Selection__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Selection__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Selection__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpp__Selection__pf), static_cast<uint8>(E__EMenSel__pf::NewEnumerator3));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxStartG__pfG, /*out*/ bpfv__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxCoxOp__pfGG, /*out*/ bpfv__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxOption__pfG, /*out*/ bpfv__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				(*(AccessPrivateProperty<FLinearColor >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = FLinearColor(1.000000,1.000000,1.000000,1.000000);
				(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(bpfv__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
				bpf__SetxObjxxColorxandxOpacity__pfT3TTT(/*out*/ bpv__TextxExit__pfG, /*out*/ bpfv__K2Node_MakeStruct_SlateColor__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void UMainScreen_C__pf1232574660::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/_Imported/Fonts/Hyperspace_Bold_Font.Hyperspace_Bold_Font 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/_Imported/Fonts/Hyperspace_Font.Hyperspace_Font 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UMainScreen_C__pf1232574660::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugInstance.DebugInstance_C 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugState.DebugState_C 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/PlayerC_Regular.PlayerC_Regular_C 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MainScreen/Coop.Coop_C 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MainScreen/Options.Options_C 
		{97, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/UserInterface/MainScreen/EMenSel.EMenSel 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Modes/Debug/DStates.DStates 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UMainScreen_C__pf1232574660
{
	FRegisterHelper__UMainScreen_C__pf1232574660()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UserInterface/MainScreen/MainScreen"), &UMainScreen_C__pf1232574660::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMainScreen_C__pf1232574660 Instance;
};
FRegisterHelper__UMainScreen_C__pf1232574660 FRegisterHelper__UMainScreen_C__pf1232574660::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
