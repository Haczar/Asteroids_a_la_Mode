#include "NativizedAssets.h"
#include "InGameHud__pf515974370.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
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
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
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
#include "Runtime/Engine/Classes/Components/InputComponent.h"
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
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "DebugState__pf4162722864.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
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
#include "PlayerC_Regular__pf4061722237.h"
#include "GameStart__pf3166771619.h"
#include "PlyrState__pf4061722237.h"
#include "DStates__pf4162722864.h"
#include "DebugMode__pf4162722864.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "DebugInstance__pf4162722864.h"
#include "PState__pf4061722237.h"
#include "Spawn_Volume__pf2174024837.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Ship__pf3227778944.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "1979Rounds__pf2955639682.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "BP_Projectile__pf3227778944.h"
#include "Alien__pf655108736.h"
#include "Asteroid__pf2772898577.h"
#include "SRotate__pf3227778944.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "MenuPawn__pf4061722237.h"
#include "Asteroid_Medium__pf2772898577.h"
#include "Asteroid_Large__pf2772898577.h"
#include "MainScreen__pf1232574660.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "LevelStart_Widget__pf515974370.h"
#include "GameOver__pf3166771619.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
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
UInGameHud_C__pf515974370::UInGameHud_C__pf515974370(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UInGameHud_C__pf515974370::StaticClass() == GetClass()))
	{
		UInGameHud_C__pf515974370::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__HighScore__pf = nullptr;
	bpv__HS_PlayerName__pf = nullptr;
	bpv__Player1_Name__pf = nullptr;
	bpv__Player1_Score__pf = nullptr;
	bpv__Player2_Name__pf = nullptr;
	bpv__Player2_Score__pf = nullptr;
	bpv__Player2StatsVB__pf = nullptr;
	bpv__PlayerLifeIcon1_1__pf = nullptr;
	bpv__PlayerLifeIcon1_2__pf = nullptr;
	bpv__PlayerLifeIcon1_3__pf = nullptr;
	bpv__PlayerLifeIcon1_4__pf = nullptr;
	bpv__PlayerLifeIcon1_5__pf = nullptr;
	bpv__PlayerLifeIcon1_6__pf = nullptr;
	bpv__PlayerLifeIcon1_7__pf = nullptr;
	bpv__PlayerLifeIcon2_1__pf = nullptr;
	bpv__PlayerLifeIcon2_2__pf = nullptr;
	bpv__PlayerLifeIcon2_3__pf = nullptr;
	bpv__PlayerLifeIcon2_4__pf = nullptr;
	bpv__PlayerLifeIcon2_5__pf = nullptr;
	bpv__PlayerLifeIcon2_6__pf = nullptr;
	bpv__PlayerLifeIcon2_7__pf = nullptr;
	bpv__Player1__pf = false;
	bCanEverTick = false;
	bCanEverPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UInGameHud_C__pf515974370::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UInGameHud_C__pf515974370::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ADebugState_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APlyrState_C__pf4061722237::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(1);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__3->LayoutData.Offsets.Right = 0.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 182.284515f;
	__Local__3->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("PlayerStatsHB"));
	auto& __Local__5 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__5 = TArray<UPanelSlot*> ();
	__Local__5.Reserve(5);
	auto __Local__6 = NewObject<UHorizontalBoxSlot>(__Local__4, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__6->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__6->Parent = __Local__4;
	auto __Local__7 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("Player1StatsVB"));
	auto& __Local__8 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__7), UPanelWidget::__PPO__Slots() )));
	__Local__8 = TArray<UPanelSlot*> ();
	__Local__8.Reserve(3);
	auto __Local__9 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"));
	__Local__9->Parent = __Local__7;
	auto __Local__10 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_1"));
	__Local__10->Size = FVector2D(1.000000, 10.000000);
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__8.Add(__Local__9);
	auto __Local__11 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__11->Parent = __Local__7;
	auto __Local__12 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("Player1HB"));
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(2);
	auto __Local__14 = NewObject<UHorizontalBoxSlot>(__Local__12, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__14->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Player1_Name"));
	__Local__15->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("\"Player One\": "), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("65868CA541172A6D8B96FFBB4DCEEB7D") /* Key */
	);
	__Local__15->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__15->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__15->Font.Size = 20;
	__Local__15->Slot = __Local__14;
	__Local__15->bIsVariable = true;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__16 = NewObject<UHorizontalBoxSlot>(__Local__12, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_9"));
	__Local__16->Parent = __Local__12;
	auto __Local__17 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Player1_Score"));
	__Local__17->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("\"Score\""), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("B486A6A341675C321EA790B6B894E423") /* Key */
	);
	__Local__17->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__17->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__17->Font.Size = 20;
	__Local__17->Slot = __Local__16;
	__Local__17->bIsVariable = true;
	__Local__16->Content = __Local__17;
	__Local__13.Add(__Local__16);
	__Local__12->Slot = __Local__11;
	__Local__12->Visibility = ESlateVisibility::Visible;
	__Local__11->Content = __Local__12;
	__Local__8.Add(__Local__11);
	auto __Local__18 = NewObject<UVerticalBoxSlot>(__Local__7, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__18->Parent = __Local__7;
	auto __Local__19 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("Player1LivesHB"));
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(7);
	auto __Local__21 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon1_2"));
	__Local__22->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<UObject* >(&(__Local__22->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__23 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__22->Slot = __Local__21;
	__Local__22->Visibility = ESlateVisibility::Hidden;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	auto __Local__24 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_16"));
	__Local__24->Parent = __Local__19;
	auto __Local__25 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon1_1"));
	__Local__25->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__26 = (*(AccessPrivateProperty<UObject* >(&(__Local__25->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__26 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__25->Slot = __Local__24;
	__Local__25->Visibility = ESlateVisibility::Hidden;
	__Local__24->Content = __Local__25;
	__Local__20.Add(__Local__24);
	auto __Local__27 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__27->Parent = __Local__19;
	auto __Local__28 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon1_3"));
	__Local__28->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__28->Slot = __Local__27;
	__Local__28->Visibility = ESlateVisibility::Hidden;
	__Local__27->Content = __Local__28;
	__Local__20.Add(__Local__27);
	auto __Local__30 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__30->Parent = __Local__19;
	auto __Local__31 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon1_4"));
	__Local__31->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__31->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__31->Slot = __Local__30;
	__Local__31->Visibility = ESlateVisibility::Hidden;
	__Local__30->Content = __Local__31;
	__Local__20.Add(__Local__30);
	auto __Local__33 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__33->Parent = __Local__19;
	auto __Local__34 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon1_5"));
	__Local__34->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__35 = (*(AccessPrivateProperty<UObject* >(&(__Local__34->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__35 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__34->Slot = __Local__33;
	__Local__34->Visibility = ESlateVisibility::Hidden;
	__Local__33->Content = __Local__34;
	__Local__20.Add(__Local__33);
	auto __Local__36 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__36->Parent = __Local__19;
	auto __Local__37 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon1_6"));
	__Local__37->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__38 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__37->Slot = __Local__36;
	__Local__37->Visibility = ESlateVisibility::Hidden;
	__Local__36->Content = __Local__37;
	__Local__20.Add(__Local__36);
	auto __Local__39 = NewObject<UHorizontalBoxSlot>(__Local__19, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__39->Parent = __Local__19;
	auto __Local__40 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon1_7"));
	__Local__40->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<UObject* >(&(__Local__40->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__41 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__40->Slot = __Local__39;
	__Local__40->Visibility = ESlateVisibility::Hidden;
	__Local__39->Content = __Local__40;
	__Local__20.Add(__Local__39);
	__Local__19->Slot = __Local__18;
	__Local__19->Visibility = ESlateVisibility::Visible;
	__Local__18->Content = __Local__19;
	__Local__8.Add(__Local__18);
	__Local__7->Slot = __Local__6;
	__Local__7->Visibility = ESlateVisibility::Visible;
	__Local__6->Content = __Local__7;
	__Local__5.Add(__Local__6);
	auto __Local__42 = NewObject<UHorizontalBoxSlot>(__Local__4, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_10"));
	__Local__42->Parent = __Local__4;
	auto __Local__43 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_3"));
	__Local__43->Size = FVector2D(50.000000, 1.000000);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__5.Add(__Local__42);
	auto __Local__44 = NewObject<UHorizontalBoxSlot>(__Local__4, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_11"));
	__Local__44->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__44->Parent = __Local__4;
	auto __Local__45 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("HighScoreVB"));
	auto& __Local__46 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__45), UPanelWidget::__PPO__Slots() )));
	__Local__46 = TArray<UPanelSlot*> ();
	__Local__46.Reserve(2);
	auto __Local__47 = NewObject<UVerticalBoxSlot>(__Local__45, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"));
	__Local__47->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__47->Parent = __Local__45;
	auto __Local__48 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("HighScore"));
	__Local__48->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("\"High Score\""), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("550B5C8E4CA28B1AABFB159AABE36267") /* Key */
	);
	__Local__48->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__48->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__48->Font.Size = 20;
	auto& __Local__49 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__48), UTextLayoutWidget::__PPO__Justification() )));
	__Local__49 = ETextJustify::Type::Center;
	__Local__48->Slot = __Local__47;
	__Local__48->bIsVariable = true;
	__Local__47->Content = __Local__48;
	__Local__46.Add(__Local__47);
	auto __Local__50 = NewObject<UVerticalBoxSlot>(__Local__45, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_10"));
	__Local__50->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__50->Parent = __Local__45;
	auto __Local__51 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("HS_PlayerName"));
	__Local__51->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("\"HS Player Name\""), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("1AF50AFA465F0BB53F0D55BFF7CFF257") /* Key */
	);
	__Local__51->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__51->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__51->Font.Size = 20;
	auto& __Local__52 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__51), UTextLayoutWidget::__PPO__Justification() )));
	__Local__52 = ETextJustify::Type::Center;
	__Local__51->Slot = __Local__50;
	__Local__51->bIsVariable = true;
	__Local__50->Content = __Local__51;
	__Local__46.Add(__Local__50);
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__5.Add(__Local__44);
	auto __Local__53 = NewObject<UHorizontalBoxSlot>(__Local__4, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_12"));
	__Local__53->Parent = __Local__4;
	auto __Local__54 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_4"));
	__Local__54->Size = FVector2D(50.000000, 1.000000);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__5.Add(__Local__53);
	auto __Local__55 = NewObject<UHorizontalBoxSlot>(__Local__4, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_24"));
	__Local__55->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__55->Parent = __Local__4;
	auto __Local__56 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("Player2StatsVB"));
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__56), UPanelWidget::__PPO__Slots() )));
	__Local__57 = TArray<UPanelSlot*> ();
	__Local__57.Reserve(3);
	auto __Local__58 = NewObject<UVerticalBoxSlot>(__Local__56, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"));
	__Local__58->Parent = __Local__56;
	auto __Local__59 = NewObject<USpacer>(__Local__0, USpacer::StaticClass(), TEXT("Spacer_8"));
	__Local__59->Size = FVector2D(1.000000, 10.000000);
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__57.Add(__Local__58);
	auto __Local__60 = NewObject<UVerticalBoxSlot>(__Local__56, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__60->Parent = __Local__56;
	auto __Local__61 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("Player2HB"));
	auto& __Local__62 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__61), UPanelWidget::__PPO__Slots() )));
	__Local__62 = TArray<UPanelSlot*> ();
	__Local__62.Reserve(2);
	auto __Local__63 = NewObject<UHorizontalBoxSlot>(__Local__61, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__63->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__63->Parent = __Local__61;
	auto __Local__64 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Player2_Name"));
	__Local__64->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("\"Player Two\": "), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("AF32B7F84E32ED7F51926DA6AC882F4F") /* Key */
	);
	__Local__64->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__64->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__64->Font.Size = 20;
	__Local__64->Slot = __Local__63;
	__Local__64->bIsVariable = true;
	__Local__63->Content = __Local__64;
	__Local__62.Add(__Local__63);
	auto __Local__65 = NewObject<UHorizontalBoxSlot>(__Local__61, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_9"));
	__Local__65->Parent = __Local__61;
	auto __Local__66 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Player2_Score"));
	__Local__66->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("\"Score\""), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F2819D9948FCB2FB91268AB6848BA0D9") /* Key */
	);
	__Local__66->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__66->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__66->Font.Size = 20;
	__Local__66->Slot = __Local__65;
	__Local__66->bIsVariable = true;
	__Local__65->Content = __Local__66;
	__Local__62.Add(__Local__65);
	__Local__61->Slot = __Local__60;
	__Local__61->Visibility = ESlateVisibility::Visible;
	__Local__60->Content = __Local__61;
	__Local__57.Add(__Local__60);
	auto __Local__67 = NewObject<UVerticalBoxSlot>(__Local__56, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__67->Parent = __Local__56;
	auto __Local__68 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("Player2LivesHB"));
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__68), UPanelWidget::__PPO__Slots() )));
	__Local__69 = TArray<UPanelSlot*> ();
	__Local__69.Reserve(7);
	auto __Local__70 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_16"));
	__Local__70->Parent = __Local__68;
	auto __Local__71 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon2_1"));
	__Local__71->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__72 = (*(AccessPrivateProperty<UObject* >(&(__Local__71->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__72 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__71->Slot = __Local__70;
	__Local__70->Content = __Local__71;
	__Local__69.Add(__Local__70);
	auto __Local__73 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_20"));
	__Local__73->Parent = __Local__68;
	auto __Local__74 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon2_2"));
	__Local__74->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__75 = (*(AccessPrivateProperty<UObject* >(&(__Local__74->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__75 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__74->Slot = __Local__73;
	__Local__73->Content = __Local__74;
	__Local__69.Add(__Local__73);
	auto __Local__76 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_23"));
	__Local__76->Parent = __Local__68;
	auto __Local__77 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon2_3"));
	__Local__77->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__78 = (*(AccessPrivateProperty<UObject* >(&(__Local__77->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__78 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__77->Slot = __Local__76;
	__Local__77->Visibility = ESlateVisibility::Hidden;
	__Local__76->Content = __Local__77;
	__Local__69.Add(__Local__76);
	auto __Local__79 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__79->Parent = __Local__68;
	auto __Local__80 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon2_4"));
	__Local__80->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__81 = (*(AccessPrivateProperty<UObject* >(&(__Local__80->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__81 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__80->Slot = __Local__79;
	__Local__80->Visibility = ESlateVisibility::Hidden;
	__Local__79->Content = __Local__80;
	__Local__69.Add(__Local__79);
	auto __Local__82 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_5"));
	__Local__82->Parent = __Local__68;
	auto __Local__83 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon2_5"));
	__Local__83->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__84 = (*(AccessPrivateProperty<UObject* >(&(__Local__83->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__84 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__83->Slot = __Local__82;
	__Local__83->Visibility = ESlateVisibility::Hidden;
	__Local__82->Content = __Local__83;
	__Local__69.Add(__Local__82);
	auto __Local__85 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_6"));
	__Local__85->Parent = __Local__68;
	auto __Local__86 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon2_6"));
	__Local__86->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__87 = (*(AccessPrivateProperty<UObject* >(&(__Local__86->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__87 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__86->Slot = __Local__85;
	__Local__86->Visibility = ESlateVisibility::Hidden;
	__Local__85->Content = __Local__86;
	__Local__69.Add(__Local__85);
	auto __Local__88 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_7"));
	__Local__88->Parent = __Local__68;
	auto __Local__89 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("PlayerLifeIcon2_7"));
	__Local__89->Brush.ImageSize = FVector2D(50.000000, 50.000000);
	auto& __Local__90 = (*(AccessPrivateProperty<UObject* >(&(__Local__89->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__90 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__89->Slot = __Local__88;
	__Local__89->Visibility = ESlateVisibility::Hidden;
	__Local__88->Content = __Local__89;
	__Local__69.Add(__Local__88);
	__Local__68->Slot = __Local__67;
	__Local__68->Visibility = ESlateVisibility::Visible;
	__Local__67->Content = __Local__68;
	__Local__57.Add(__Local__67);
	__Local__56->Slot = __Local__55;
	__Local__56->bIsVariable = true;
	__Local__56->Visibility = ESlateVisibility::Hidden;
	__Local__55->Content = __Local__56;
	__Local__5.Add(__Local__55);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	__Local__0->RootWidget = __Local__1;
}
PRAGMA_ENABLE_OPTIMIZATION
void UInGameHud_C__pf515974370::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__91;
	SlotNames.Append(__Local__91);
}
void UInGameHud_C__pf515974370::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__92;
	TArray<FDelegateRuntimeBinding>  __Local__93;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UInGameHud_C__pf515974370::StaticClass())->MiscConvertedSubobjects[0]), __Local__92, __Local__93);
}
void UInGameHud_C__pf515974370::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UInGameHud_C__pf515974370::bpf__ExecuteUbergraph_InGameHud__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 54);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Player2StatsVB__pf))
	{
		bpv__Player2StatsVB__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; //KCST_EndOfThread
}
void UInGameHud_C__pf515974370::bpf__ExecuteUbergraph_InGameHud__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue1__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable__pf, 0);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable__pf, 1);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable__pf, 2);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 5;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable__pf, 3);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable__pf, 4);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 7;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable__pf, 5);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 8;
					break;
				}
				b0l__K2Node_SwitchInteger_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable__pf, 6);
				if (!b0l__K2Node_SwitchInteger_CmpSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_1__pf))
				{
					bpv__PlayerLifeIcon2_1__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_2__pf))
				{
					bpv__PlayerLifeIcon2_2__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_3__pf))
				{
					bpv__PlayerLifeIcon2_3__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_4__pf))
				{
					bpv__PlayerLifeIcon2_4__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_5__pf))
				{
					bpv__PlayerLifeIcon2_5__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_6__pf))
				{
					bpv__PlayerLifeIcon2_6__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_7__pf))
				{
					bpv__PlayerLifeIcon2_7__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				b0l__Temp_int_Variable__pf = 0;
			}
		case 11:
			{
				bpfv__CallFunc_GetGameState_ReturnValue1__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_State1__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsDebug_State1__pf != nullptr);;
				int32  __Local__94 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__LivesxLeftxP2__pfTT) : (__Local__94)), 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 12:
			{
				__StateStack.Push(13);
				__CurrentState = 2;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable__pf, 1);
				b0l__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 11;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_GetGameState_ReturnValue1__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_State1__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsDebug_State1__pf != nullptr);;
				int32  __Local__95 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__LivesxLeftxP2__pfTT) : (__Local__95)), 1);
				b0l__Temp_int_Variable2__pf = bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf;
			}
		case 15:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue1__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable2__pf, 6);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue1__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				__StateStack.Push(24);
			}
		case 17:
			{
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable2__pf, 0);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 23;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable2__pf, 1);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 22;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable2__pf, 2);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 21;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable2__pf, 3);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 20;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable2__pf, 4);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 19;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable2__pf, 5);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 18;
					break;
				}
				b0l__K2Node_SwitchInteger2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable2__pf, 6);
				if (!b0l__K2Node_SwitchInteger2_CmpSuccess__pf)
				{
					__CurrentState = 25;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_6__pf))
				{
					bpv__PlayerLifeIcon2_6__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_5__pf))
				{
					bpv__PlayerLifeIcon2_5__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_4__pf))
				{
					bpv__PlayerLifeIcon2_4__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_3__pf))
				{
					bpv__PlayerLifeIcon2_3__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_2__pf))
				{
					bpv__PlayerLifeIcon2_2__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_1__pf))
				{
					bpv__PlayerLifeIcon2_1__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable2__pf, 1);
				b0l__Temp_int_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 15;
				break;
			}
		case 25:
			{
				if(::IsValid(bpv__PlayerLifeIcon2_7__pf))
				{
					bpv__PlayerLifeIcon2_7__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				__StateStack.Push(35);
			}
		case 27:
			{
				b0l__K2Node_SwitchInteger1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable1__pf, 0);
				if (!b0l__K2Node_SwitchInteger1_CmpSuccess__pf)
				{
					__CurrentState = 34;
					break;
				}
				b0l__K2Node_SwitchInteger1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable1__pf, 1);
				if (!b0l__K2Node_SwitchInteger1_CmpSuccess__pf)
				{
					__CurrentState = 33;
					break;
				}
				b0l__K2Node_SwitchInteger1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable1__pf, 2);
				if (!b0l__K2Node_SwitchInteger1_CmpSuccess__pf)
				{
					__CurrentState = 32;
					break;
				}
				b0l__K2Node_SwitchInteger1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable1__pf, 3);
				if (!b0l__K2Node_SwitchInteger1_CmpSuccess__pf)
				{
					__CurrentState = 31;
					break;
				}
				b0l__K2Node_SwitchInteger1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable1__pf, 4);
				if (!b0l__K2Node_SwitchInteger1_CmpSuccess__pf)
				{
					__CurrentState = 30;
					break;
				}
				b0l__K2Node_SwitchInteger1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable1__pf, 5);
				if (!b0l__K2Node_SwitchInteger1_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				b0l__K2Node_SwitchInteger1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable1__pf, 6);
				if (!b0l__K2Node_SwitchInteger1_CmpSuccess__pf)
				{
					__CurrentState = 28;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_7__pf))
				{
					bpv__PlayerLifeIcon1_7__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_6__pf))
				{
					bpv__PlayerLifeIcon1_6__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_5__pf))
				{
					bpv__PlayerLifeIcon1_5__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_4__pf))
				{
					bpv__PlayerLifeIcon1_4__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_3__pf))
				{
					bpv__PlayerLifeIcon1_3__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_2__pf))
				{
					bpv__PlayerLifeIcon1_2__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_1__pf))
				{
					bpv__PlayerLifeIcon1_1__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue1__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable1__pf, 1);
				b0l__Temp_int_Variable1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue1__pf;
			}
		case 36:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_State__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsDebug_State__pf != nullptr);;
				int32  __Local__96 = 0;
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__LivesxLeftxP1__pfTT) : (__Local__96)), 1);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable1__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 37;
					break;
				}
				__CurrentState = 26;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_State__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsDebug_State__pf != nullptr);;
				int32  __Local__97 = 0;
				b0l__Temp_int_Variable3__pf = ((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__LivesxLeftxP1__pfTT) : (__Local__97));
			}
		case 38:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue3__pf = UKismetMathLibrary::LessEqual_IntInt(b0l__Temp_int_Variable3__pf, 6);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue3__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 39:
			{
				__StateStack.Push(48);
			}
		case 40:
			{
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable3__pf, 0);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 47;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable3__pf, 1);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 46;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable3__pf, 2);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 45;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable3__pf, 3);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 44;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable3__pf, 4);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 43;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable3__pf, 5);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 42;
					break;
				}
				b0l__K2Node_SwitchInteger3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_IntInt(b0l__Temp_int_Variable3__pf, 6);
				if (!b0l__K2Node_SwitchInteger3_CmpSuccess__pf)
				{
					__CurrentState = 41;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_7__pf))
				{
					bpv__PlayerLifeIcon1_7__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_6__pf))
				{
					bpv__PlayerLifeIcon1_6__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 43:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_5__pf))
				{
					bpv__PlayerLifeIcon1_5__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_4__pf))
				{
					bpv__PlayerLifeIcon1_4__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_3__pf))
				{
					bpv__PlayerLifeIcon1_3__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 46:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_2__pf))
				{
					bpv__PlayerLifeIcon1_2__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				if(::IsValid(bpv__PlayerLifeIcon1_1__pf))
				{
					bpv__PlayerLifeIcon1_1__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 48:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Variable3__pf, 1);
				b0l__Temp_int_Variable3__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 38;
				break;
			}
		case 49:
			{
				b0l__Temp_int_Variable1__pf = 0;
				__CurrentState = 36;
				break;
			}
		case 50:
			{
				__CurrentState = 49;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UInGameHud_C__pf515974370::bpf__ExecuteUbergraph_InGameHud__pf_2(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue2__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue1__pf{};
	check(bpp__EntryPoint__pf == 51);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameState_ReturnValue2__pf = UGameplayStatics::GetGameState(this);
	b0l__K2Node_DynamicCast_AsDebug_State2__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue2__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsDebug_State2__pf != nullptr);;
	int32  __Local__98 = 0;
	bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__ScoreP1__pf) : (__Local__98)));
	bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
	if(::IsValid(bpv__Player1_Score__pf))
	{
		bpv__Player1_Score__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
	}
	bpfv__CallFunc_GetGameState_ReturnValue3__pf = UGameplayStatics::GetGameState(this);
	b0l__K2Node_DynamicCast_AsDebug_State3__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue3__pf);
	b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsDebug_State3__pf != nullptr);;
	int32  __Local__99 = 0;
	bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf = UKismetStringLibrary::Conv_IntToString(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__ScoreP2__pf) : (__Local__99)));
	bpfv__CallFunc_Conv_StringToText_ReturnValue1__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf);
	if(::IsValid(bpv__Player2_Score__pf))
	{
		bpv__Player2_Score__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue1__pf);
	}
	return; //KCST_EndOfThread
}
void UInGameHud_C__pf515974370::bpf__Makexp2xvisible__pfTT()
{
	bpf__ExecuteUbergraph_InGameHud__pf_0(54);
}
void UInGameHud_C__pf515974370::bpf__UpdatexScore__pfT(APlayerController* bpp__Player__pf)
{
	b0l__K2Node_CustomEvent_Player__pf = bpp__Player__pf;
	bpf__ExecuteUbergraph_InGameHud__pf_2(51);
}
void UInGameHud_C__pf515974370::bpf__UpdatexLives__pfT(APlayerController* bpp__Player__pf)
{
	b0l__K2Node_CustomEvent_Player1__pf = bpp__Player__pf;
	bpf__ExecuteUbergraph_InGameHud__pf_1(50);
}
void UInGameHud_C__pf515974370::bpf__DeterminexPlayer__pfT(AController* bpp__Playah__pf, /*out*/ bool& bpp__determination__pf)
{
	APlyrState_C__pf4061722237* bpfv__K2Node_DynamicCast_AsPlyr_State__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	APlayerState*  __Local__100 = ((APlayerState*)nullptr);
	bpfv__K2Node_DynamicCast_AsPlyr_State__pf = Cast<APlyrState_C__pf4061722237>(((::IsValid(bpp__Playah__pf)) ? (bpp__Playah__pf->PlayerState) : (__Local__100)));
	bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPlyr_State__pf != nullptr);;
	FName  __Local__101 = FName();
	bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(((::IsValid(bpfv__K2Node_DynamicCast_AsPlyr_State__pf)) ? (bpfv__K2Node_DynamicCast_AsPlyr_State__pf->bpv__PlyrxName__pfT) : (__Local__101)), FName(TEXT("Player One")));
	bpp__determination__pf = bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf;
}
PRAGMA_DISABLE_OPTIMIZATION
void UInGameHud_C__pf515974370::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Game/_Imported/Fonts/Hyperspace_Font.Hyperspace_Font 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/UserInterface/Assets/CapturedMat.CapturedMat 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UInGameHud_C__pf515974370::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.VerticalBox 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Image 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugState.DebugState_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/PlyrState.PlyrState_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UInGameHud_C__pf515974370
{
	FRegisterHelper__UInGameHud_C__pf515974370()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UserInterface/Dev_Test/InGameHud"), &UInGameHud_C__pf515974370::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UInGameHud_C__pf515974370 Instance;
};
FRegisterHelper__UInGameHud_C__pf515974370 FRegisterHelper__UInGameHud_C__pf515974370::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
