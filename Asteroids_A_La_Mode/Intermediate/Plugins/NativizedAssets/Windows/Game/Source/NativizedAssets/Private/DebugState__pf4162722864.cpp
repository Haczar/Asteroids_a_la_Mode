#include "NativizedAssets.h"
#include "DebugState__pf4162722864.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
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
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
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
#include "PlayerC_Regular__pf4061722237.h"
#include "GameStart__pf3166771619.h"
#include "InGameHud__pf515974370.h"
#include "PlyrState__pf4061722237.h"
#include "DebugMode__pf4162722864.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "DebugInstance__pf4162722864.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "MenuPawn__pf4061722237.h"
#include "Asteroid_Medium__pf2772898577.h"
#include "Asteroid_Large__pf2772898577.h"
#include "MainScreen__pf1232574660.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "LevelStart_Widget__pf515974370.h"
#include "GameOver__pf3166771619.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ADebugState_C__pf4162722864::ADebugState_C__pf4162722864(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ADebugState_C__pf4162722864::StaticClass() == GetClass()))
	{
		ADebugState_C__pf4162722864::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PlayerStartx1xRef__pfTT = nullptr;
	bpv__PlayerStartx2xRef__pfTT = nullptr;
	bpv__ScoreP1__pf = 0;
	bpv__LivesxLeftxP1__pfTT = 0;
	bpv__ScoreP2__pf = 0;
	bpv__ScoreTotal__pf = 0;
	bpv__LivesxLeftxShared__pfTT = 0;
	bpv__LivesxLeftxP2__pfTT = 0;
	bpv__EDebugState__pf = E__DStates__pf::NewEnumerator0;
	bpv__PlayerCx1xRef__pfTT = nullptr;
	bpv__PlayerCx2xRef__pfTT = nullptr;
	bpv__CamxOne__pfT = nullptr;
	bpv__CamxTwo__pfT = nullptr;
	bpv__Shittyxcam__pfT = nullptr;
	bpv__Player2Ready__pf = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void ADebugState_C__pf4162722864::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ADebugState_C__pf4162722864::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(UGameStart_C__pf3166771619::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UInGameHud_C__pf515974370::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APlyrState_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADebugMode_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGameOver_C__pf3166771619::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void ADebugState_C__pf4162722864::bpf__ExecuteUbergraph_DebugState__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				__CurrentState = 14;
				break;
			}
		case 14:
			{
				if (!b0l__K2Node_CustomEvent_Player___pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue1__pf = UKismetMathLibrary::Add_IntInt(bpv__ScoreP1__pf, b0l__K2Node_CustomEvent_Amount__pf);
				bpv__ScoreP1__pf = bpfv__CallFunc_Add_IntInt_ReturnValue1__pf;
			}
		case 16:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 Points: ")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 17:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf = UKismetStringLibrary::Conv_IntToString(bpv__ScoreP1__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 18:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess17__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf != nullptr);;
				UUserWidget*  __Local__0 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf = Cast<UInGameHud_C__pf515974370>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf->bpv__WidgetxRef__pfT) : (__Local__0)));
				b0l__K2Node_DynamicCast_bSuccess18__pf = (b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf))
				{
					b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf->bpf__UpdatexScore__pfT(b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__ScoreP2__pf, b0l__K2Node_CustomEvent_Amount__pf);
				bpv__ScoreP2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 20:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 Points: ")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 21:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf = UKismetStringLibrary::Conv_IntToString(bpv__ScoreP2__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_IntToString_ReturnValue1__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 22:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx2xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess10__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf->bpf__UpdatexScore_FromController__pfT();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugState_C__pf4162722864::bpf__ExecuteUbergraph_DebugState__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue4__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 Lives: ")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 5:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf = UKismetStringLibrary::Conv_IntToString(bpv__LivesxLeftxP2__pfTT);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 6:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx2xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess11__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf != nullptr);;
				UUserWidget*  __Local__1 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf = Cast<UInGameHud_C__pf515974370>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular7__pf->bpv__WidgetxRef__pfT) : (__Local__1)));
				b0l__K2Node_DynamicCast_bSuccess12__pf = (b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf))
				{
					b0l__K2Node_DynamicCast_AsIn_Game_Hud2__pf->bpf__UpdatexLives__pfT(((APlayerController*)nullptr));
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 Lives: ")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 8:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue4__pf = UKismetStringLibrary::Conv_IntToString(bpv__LivesxLeftxP1__pfTT);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_IntToString_ReturnValue4__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 9:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess17__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf != nullptr);;
				UUserWidget*  __Local__2 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf = Cast<UInGameHud_C__pf515974370>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular9__pf->bpv__WidgetxRef__pfT) : (__Local__2)));
				b0l__K2Node_DynamicCast_bSuccess18__pf = (b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf))
				{
					b0l__K2Node_DynamicCast_AsIn_Game_Hud4__pf->bpf__UpdatexLives__pfT(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 61:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Take Player Life called.")), true, true, FLinearColor(1.000000,0.000000,0.884798,1.000000), 1000.000000);
			}
		case 62:
			{
				if (!b0l__K2Node_CustomEvent_Player_1__pf)
				{
					__CurrentState = 64;
					break;
				}
			}
		case 63:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LivesxLeftxP1__pfTT, b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf);
				bpv__LivesxLeftxP1__pfTT = bpfv__CallFunc_Subtract_IntInt_ReturnValue1__pf;
				__CurrentState = 7;
				break;
			}
		case 64:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__LivesxLeftxP2__pfTT, b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf);
				bpv__LivesxLeftxP2__pfTT = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 69:
			{
				__CurrentState = 61;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugState_C__pf4162722864::bpf__ExecuteUbergraph_DebugState__pf_2(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpv__LivesxLeftxP1__pfTT);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 2:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx1xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess15__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf != nullptr);;
				UUserWidget*  __Local__3 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf = Cast<UInGameHud_C__pf515974370>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf->bpv__WidgetxRef__pfT) : (__Local__3)));
				b0l__K2Node_DynamicCast_bSuccess16__pf = (b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf))
				{
					b0l__K2Node_DynamicCast_AsIn_Game_Hud3__pf->bpf__UpdatexLives__pfT(b0l__K2Node_DynamicCast_AsPlayer_C_Regular8__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 Lives: ")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = 1;
				break;
			}
		case 10:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 Lives: ")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 11:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue5__pf = UKismetStringLibrary::Conv_IntToString(bpv__LivesxLeftxP2__pfTT);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_IntToString_ReturnValue5__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 12:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx2xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf != nullptr);;
				UUserWidget*  __Local__4 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf = Cast<UInGameHud_C__pf515974370>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf->bpv__WidgetxRef__pfT) : (__Local__4)));
				b0l__K2Node_DynamicCast_bSuccess9__pf = (b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf))
				{
					b0l__K2Node_DynamicCast_AsIn_Game_Hud1__pf->bpf__UpdatexLives__pfT(b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 65:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Give Player Life called.")), true, true, FLinearColor(1.000000,0.000000,0.884798,1.000000), 1000.000000);
			}
		case 66:
			{
				if (!b0l__K2Node_CustomEvent_Player_2__pf)
				{
					__CurrentState = 68;
					break;
				}
			}
		case 67:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(bpv__LivesxLeftxP1__pfTT, b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf);
				bpv__LivesxLeftxP1__pfTT = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 3;
				break;
			}
		case 68:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpv__LivesxLeftxP2__pfTT, b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf);
				bpv__LivesxLeftxP2__pfTT = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 10;
				break;
			}
		case 70:
			{
				__CurrentState = 65;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugState_C__pf4162722864::bpf__ExecuteUbergraph_DebugState__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 53:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Failed to set state.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
				__CurrentState = -1;
				break;
			}
		case 54:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("State sucessfully set.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
			}
		case 55:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsDebug_Mode__pf = Cast<ADebugMode_C__pf4162722864>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess13__pf = (b0l__K2Node_DynamicCast_AsDebug_Mode__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess13__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 56:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Mode__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_Mode__pf->bpf__StatexChanged__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 57:
			{
				__CurrentState = 58;
				break;
			}
		case 58:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue1__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b0l__K2Node_CustomEvent_Desired_State__pf), static_cast<uint8>(bpv__EDebugState__pf));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue1__pf)
				{
					__CurrentState = 59;
					break;
				}
				__CurrentState = 54;
				break;
			}
		case 59:
			{
				bpv__EDebugState__pf = b0l__K2Node_CustomEvent_Desired_State__pf;
			}
		case 60:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(b0l__K2Node_CustomEvent_Desired_State__pf), static_cast<uint8>(bpv__EDebugState__pf));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 53;
					break;
				}
				__CurrentState = 54;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugState_C__pf4162722864::bpf__ExecuteUbergraph_DebugState__pf_4(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_GetPlayerControllerID_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 28:
			{
				__CurrentState = 29;
				break;
			}
		case 29:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(b0l__K2Node_CustomEvent_Player_Ref__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 30:
			{
				bpfv__CallFunc_GetPlayerControllerID_ReturnValue__pf = UGameplayStatics::GetPlayerControllerID(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf);
			}
		case 31:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_GetPlayerControllerID_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 36;
					break;
				}
			}
		case 32:
			{
				bpv__PlayerCx1xRef__pfTT = b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf;
			}
		case 33:
			{
				APlayerState*  __Local__5 = ((APlayerState*)nullptr);
				b0l__K2Node_DynamicCast_AsPlyr_State__pf = Cast<APlyrState_C__pf4061722237>(((::IsValid(bpv__PlayerCx1xRef__pfTT)) ? (bpv__PlayerCx1xRef__pfTT->PlayerState) : (__Local__5)));
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsPlyr_State__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess8__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 34:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlyr_State__pf))
				{
					b0l__K2Node_DynamicCast_AsPlyr_State__pf->bpv__PlyrxName__pfT = FName(TEXT("Player One"));
				}
			}
		case 35:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 Ref Set.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				bpv__PlayerCx2xRef__pfTT = b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf;
			}
		case 37:
			{
				APlayerState*  __Local__6 = ((APlayerState*)nullptr);
				b0l__K2Node_DynamicCast_AsPlyr_State1__pf = Cast<APlyrState_C__pf4061722237>(((::IsValid(bpv__PlayerCx2xRef__pfTT)) ? (bpv__PlayerCx2xRef__pfTT->PlayerState) : (__Local__6)));
				b0l__K2Node_DynamicCast_bSuccess14__pf = (b0l__K2Node_DynamicCast_AsPlyr_State1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess14__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 38:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlyr_State1__pf))
				{
					b0l__K2Node_DynamicCast_AsPlyr_State1__pf->bpv__PlyrxName__pfT = FName(TEXT("Player Two"));
				}
			}
		case 39:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 Ref Set.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugState_C__pf4162722864::bpf__ExecuteUbergraph_DebugState__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 43:
			{
				__CurrentState = 44;
				break;
			}
		case 44:
			{
				bpf__GivexPlayerxLife__pfTT(b0l__K2Node_CustomEvent_Player_to_add___pf, 3);
			}
		case 45:
			{
				bpf__GivexPoints__pfT(b0l__K2Node_CustomEvent_Player_to_add___pf, 0);
			}
		case 46:
			{
				if (!b0l__K2Node_CustomEvent_Player_to_add___pf)
				{
					__CurrentState = 50;
					break;
				}
			}
		case 47:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx1xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf->bpf__SpawnxPlayer__pfT();
				}
			}
		case 48:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx1xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf))
				{
					UUserWidget*  __Local__7 = ((UUserWidget*)nullptr);
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf->bpf__Changexwidget__pfT(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf->bpv__WidgetxRef__pfT) : (__Local__7)), UInGameHud_C__pf515974370::StaticClass());
				}
			}
		case 49:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx1xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf != nullptr);;
				UUserWidget*  __Local__8 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf = Cast<UInGameHud_C__pf515974370>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf->bpv__WidgetxRef__pfT) : (__Local__8)));
				b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf))
				{
					b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf->bpf__UpdatexLives__pfT(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 50:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx2xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf))
				{
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf->bpf__SpawnxPlayer__pfT();
				}
			}
		case 51:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx2xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf))
				{
					UUserWidget*  __Local__9 = ((UUserWidget*)nullptr);
					b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf->bpf__Changexwidget__pfT(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf->bpv__WidgetxRef__pfT) : (__Local__9)), UInGameHud_C__pf515974370::StaticClass());
				}
			}
		case 52:
			{
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpv__PlayerCx1xRef__pfTT);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf != nullptr);;
				UUserWidget*  __Local__10 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf = Cast<UInGameHud_C__pf515974370>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf->bpv__WidgetxRef__pfT) : (__Local__10)));
				b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf))
				{
					b0l__K2Node_DynamicCast_AsIn_Game_Hud__pf->bpf__Makexp2xvisible__pfTT();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugState_C__pf4162722864::bpf__ExecuteUbergraph_DebugState__pf_6(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue1__pf{};
	check(bpp__EntryPoint__pf == 40);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue1__pf);
	b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf))
	{
		UUserWidget*  __Local__11 = ((UUserWidget*)nullptr);
		b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf->bpf__Changexwidget__pfT(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf->bpv__WidgetxRef__pfT) : (__Local__11)), UGameOver_C__pf3166771619::StaticClass());
	}
	return; // KCST_GotoReturn
}
void ADebugState_C__pf4162722864::bpf__ExecuteUbergraph_DebugState__pf_7(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	UUserWidget*  __Local__12 = ((UUserWidget*)nullptr);
	b0l__K2Node_DynamicCast_AsGame_Start__pf = Cast<UGameStart_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf->bpv__WidgetxRef__pfT) : (__Local__12)));
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsGame_Start__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsGame_Start__pf))
	{
		b0l__K2Node_DynamicCast_AsGame_Start__pf->bpf__ShowPlayer2isReady__pf();
	}
	bpv__Player2Ready__pf = true;
	return; // KCST_GotoReturn
}
void ADebugState_C__pf4162722864::bpf__SetxState__pfT_Implementation(E__DStates__pf bpp__DesiredxState__pfT)
{
	b0l__K2Node_CustomEvent_Desired_State__pf = bpp__DesiredxState__pfT;
	bpf__ExecuteUbergraph_DebugState__pf_3(57);
}
void ADebugState_C__pf4162722864::bpf__AddxPlayer__pfT_Implementation(bool bpp__Playerxtoxaddx__pfTTzy)
{
	b0l__K2Node_CustomEvent_Player_to_add___pf = bpp__Playerxtoxaddx__pfTTzy;
	bpf__ExecuteUbergraph_DebugState__pf_5(43);
}
void ADebugState_C__pf4162722864::bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT_Implementation()
{
	bpf__ExecuteUbergraph_DebugState__pf_6(40);
}
void ADebugState_C__pf4162722864::bpf__SetxPlayerRef__pfT_Implementation(APlayerController* bpp__PlayerxRef__pfT)
{
	b0l__K2Node_CustomEvent_Player_Ref__pf = bpp__PlayerxRef__pfT;
	bpf__ExecuteUbergraph_DebugState__pf_4(28);
}
void ADebugState_C__pf4162722864::bpf__Player2IsReady__pf_Implementation()
{
	bpf__ExecuteUbergraph_DebugState__pf_7(23);
}
void ADebugState_C__pf4162722864::bpf__GivexPoints__pfT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__Amount__pf)
{
	b0l__K2Node_CustomEvent_Player___pf = bpp__Playerx__pfzy;
	b0l__K2Node_CustomEvent_Amount__pf = bpp__Amount__pf;
	bpf__ExecuteUbergraph_DebugState__pf_0(13);
}
void ADebugState_C__pf4162722864::bpf__TakexPlayerxLife__pfTT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxTake__pfTTTT)
{
	b0l__K2Node_CustomEvent_Player_1__pf = bpp__Playerx__pfzy;
	b0l__K2Node_CustomEvent_Number_of_Lives_to_Take__pf = bpp__NumberxofxLivesxtoxTake__pfTTTT;
	bpf__ExecuteUbergraph_DebugState__pf_1(69);
}
void ADebugState_C__pf4162722864::bpf__GivexPlayerxLife__pfTT_Implementation(bool bpp__Playerx__pfzy, int32 bpp__NumberxofxLivesxtoxGive__pfTTTT)
{
	b0l__K2Node_CustomEvent_Player_2__pf = bpp__Playerx__pfzy;
	b0l__K2Node_CustomEvent_Number_of_Lives_to_Give__pf = bpp__NumberxofxLivesxtoxGive__pfTTTT;
	bpf__ExecuteUbergraph_DebugState__pf_2(70);
}
void ADebugState_C__pf4162722864::bpf__UserConstructionScript__pf()
{
}
void ADebugState_C__pf4162722864::bpf__SetxPlayerxControllerxReference__pfTTT(APlayerController* bpp__PlayerxControllerxReference__pfTT, /*out*/ uint8& bpp__PlayerxSet__pfT)
{
	APlayerC_Regular_C__pf4061722237* bpfv__K2Node_DynamicCast_AsPlayer_C_Regular__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_GetPlayerControllerID_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	APlyrState_C__pf4061722237* bpfv__K2Node_DynamicCast_AsPlyr_State__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess1__pf{};
	APlyrState_C__pf4061722237* bpfv__K2Node_DynamicCast_AsPlyr_State1__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpp__PlayerxControllerxReference__pfTT);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetPlayerControllerID_ReturnValue__pf = UGameplayStatics::GetPlayerControllerID(bpp__PlayerxControllerxReference__pfTT);
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_GetPlayerControllerID_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 4:
			{
				bpv__PlayerCx1xRef__pfTT = bpfv__K2Node_DynamicCast_AsPlayer_C_Regular__pf;
			}
		case 5:
			{
				APlayerState*  __Local__13 = ((APlayerState*)nullptr);
				bpfv__K2Node_DynamicCast_AsPlyr_State__pf = Cast<APlyrState_C__pf4061722237>(((::IsValid(bpv__PlayerCx1xRef__pfTT)) ? (bpv__PlayerCx1xRef__pfTT->PlayerState) : (__Local__13)));
				bpfv__K2Node_DynamicCast_bSuccess1__pf = (bpfv__K2Node_DynamicCast_AsPlyr_State__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess1__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 6:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsPlyr_State__pf))
				{
					bpfv__K2Node_DynamicCast_AsPlyr_State__pf->bpv__PlyrxName__pfT = FName(TEXT("Player One"));
				}
			}
		case 7:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 Ref Set.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
			}
		case 8:
			{
				bpp__PlayerxSet__pfT = 0;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("cncer")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpv__PlayerCx2xRef__pfTT = bpfv__K2Node_DynamicCast_AsPlayer_C_Regular__pf;
			}
		case 11:
			{
				APlayerState*  __Local__14 = ((APlayerState*)nullptr);
				bpfv__K2Node_DynamicCast_AsPlyr_State1__pf = Cast<APlyrState_C__pf4061722237>(((::IsValid(bpv__PlayerCx2xRef__pfTT)) ? (bpv__PlayerCx2xRef__pfTT->PlayerState) : (__Local__14)));
				bpfv__K2Node_DynamicCast_bSuccess2__pf = (bpfv__K2Node_DynamicCast_AsPlyr_State1__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 12:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsPlyr_State1__pf))
				{
					bpfv__K2Node_DynamicCast_AsPlyr_State1__pf->bpv__PlyrxName__pfT = FName(TEXT("Player Two"));
				}
			}
		case 13:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 Ref Set.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
			}
		case 14:
			{
				bpp__PlayerxSet__pfT = 1;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugState_C__pf4162722864::bpf__SetxPlayerxStartxRef__pfTTT(APlayerStart* bpp__PlayerxStartxReference__pfTT)
{
	APlayerStart* bpfv__PlayerxStart__pfT{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				FName  __Local__15 = FName();
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(((::IsValid(bpp__PlayerxStartxReference__pfTT)) ? (bpp__PlayerxStartxReference__pfTT->PlayerStartTag) : (__Local__15)), FName(TEXT("PlayerOne")));
				if (!bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpv__PlayerStartx1xRef__pfTT = bpp__PlayerxStartxReference__pfTT;
			}
		case 3:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 Start Ref set.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpv__PlayerStartx2xRef__pfTT = bpp__PlayerxStartxReference__pfTT;
			}
		case 5:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 Start Ref set.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugState_C__pf4162722864::bpf__GetxDModexState__pfTT()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void ADebugState_C__pf4162722864::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ADebugState_C__pf4162722864::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameState 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerStart 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraActor 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/PlayerC_Regular.PlayerC_Regular_C 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/GameStart.GameStart_C 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/Dev_Test/InGameHud.InGameHud_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/PlyrState.PlyrState_C 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugMode.DebugMode_C 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/GameOver.GameOver_C 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Modes/Debug/DStates.DStates 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ADebugState_C__pf4162722864
{
	FRegisterHelper__ADebugState_C__pf4162722864()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Modes/Debug/DebugState"), &ADebugState_C__pf4162722864::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ADebugState_C__pf4162722864 Instance;
};
FRegisterHelper__ADebugState_C__pf4162722864 FRegisterHelper__ADebugState_C__pf4162722864::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
