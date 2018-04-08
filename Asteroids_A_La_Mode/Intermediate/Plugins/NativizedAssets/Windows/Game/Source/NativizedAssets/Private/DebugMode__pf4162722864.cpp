#include "NativizedAssets.h"
#include "DebugMode__pf4162722864.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
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
#include "DebugMData__pf4162722864.h"
#include "RegUser__pf4061722237.h"
#include "UserData__pf4061722237.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Spawn_Volume__pf2174024837.h"
#include "Ship__pf668171628.h"
#include "DebugManager__pf4162722864.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
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
#include "GameStart__pf3166771619.h"
#include "InGameHud__pf515974370.h"
#include "DStates__pf4162722864.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "PState__pf4061722237.h"
#include "MainScreen__pf1232574660.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "LevelStart_Widget__pf515974370.h"
#include "GameOver__pf3166771619.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "BP_Projectile__pf668171628.h"
#include "Alien__pf655108736.h"
#include "Asteroid__pf2772898577.h"
#include "SRotate__pf668171628.h"
#include "MenuPawn__pf3752356522.h"
#include "Asteroid_Medium__pf2772898577.h"
#include "Asteroid_Large__pf2772898577.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ADebugMode_C__pf4162722864::ADebugMode_C__pf4162722864(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ADebugMode_C__pf4162722864::StaticClass() == GetClass()))
	{
		ADebugMode_C__pf4162722864::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__1979xGameStarted__pfT = false;
	bpv__1979xAsteroidSpawnRate__pfT = 0.500000f;
	bpv__SpawnVolumes__pf = TArray<ASpawn_Volume_C__pf2174024837*> ();
	bpv__AsteroidxObstacles__pfT = TArray<UClass*> ();
	bpv__AsteroidxObstacles__pfT.Reserve(3);
	bpv__AsteroidxObstacles__pfT.Add(CastChecked<UClass>(CastChecked<UDynamicClass>(ADebugMode_C__pf4162722864::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
	bpv__AsteroidxObstacles__pfT.Add(AAsteroid_Medium_C__pf2772898577::StaticClass());
	bpv__AsteroidxObstacles__pfT.Add(AAsteroid_Large_C__pf2772898577::StaticClass());
	bpv__1979xAlienSpawnRate__pfT = 3.000000f;
	bpv__NumBounds__pf = 0;
	bpv__1979xRounds__pfT = E__1979Rounds__pf::NewEnumerator0;
	bpv__1979xAsteroidxCount__pfTT = 0;
	bpv__1979xRoundxInxSession__pfTTT = false;
	bHandleDedicatedServerReplays = false;
	GameStateClass = ADebugMData_C__pf4162722864::StaticClass();
	PlayerControllerClass = ARegUser_C__pf4061722237::StaticClass();
	PlayerStateClass = AUserData_C__pf4061722237::StaticClass();
	HUDClass = nullptr;
	DefaultPawnClass = nullptr;
}
PRAGMA_ENABLE_OPTIMIZATION
void ADebugMode_C__pf4162722864::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void ADebugMode_C__pf4162722864::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Modes/Arcade1979/1979Rounds.1979Rounds")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ADebugMData_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ARegUser_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AUserData_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ASpawn_Volume_C__pf2174024837::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AShip_C__pf668171628::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UDebugManager_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AMenuPawn_C__pf3752356522::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAsteroid_C__pf2772898577::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAsteroid_Medium_C__pf2772898577::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAsteroid_Large_C__pf2772898577::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
void ADebugMode_C__pf4162722864::bpf__ExecuteUbergraph_DebugMode__pf_0(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__CallFunc_GetDisplayName_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue1__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsDebug_MData__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				E__DStates__pf  __Local__0 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpv__EDebugState__pf) : (__Local__0))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				E__DStates__pf  __Local__1 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpv__EDebugState__pf) : (__Local__1))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__2 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpv__EDebugState__pf) : (__Local__2))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__3 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpv__EDebugState__pf) : (__Local__3))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__4 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpv__EDebugState__pf) : (__Local__4))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__5 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpv__EDebugState__pf) : (__Local__5))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__6 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpv__EDebugState__pf) : (__Local__6))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__7 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpv__EDebugState__pf) : (__Local__7))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ASpawn_Volume_C__pf2174024837::StaticClass(), /*out*/ TArrayCaster<ASpawn_Volume_C__pf2174024837*>(b0l__CallFunc_GetAllActorsOfClass_OutActors__pf).Get<AActor*>());
			}
		case 7:
			{
				bpv__SpawnVolumes__pf = b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
			}
		case 8:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 9:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 10:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__SpawnVolumes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 11:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 12:
			{
				__StateStack.Push(15);
			}
		case 13:
			{
				FCustomThunkTemplates::Array_Get(bpv__SpawnVolumes__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_GetDisplayName_ReturnValue__pf = UKismetSystemLibrary::GetDisplayName(b0l__CallFunc_Array_Get_Item__pf);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_GetDisplayName_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_Array_Length_ReturnValue1__pf = FCustomThunkTemplates::Array_Length(bpv__SpawnVolumes__pf);
				bpv__NumBounds__pf = bpfv__CallFunc_Array_Length_ReturnValue1__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 10;
				break;
			}
		case 62:
			{
				__CurrentState = 63;
				break;
			}
		case 63:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsDebug_Manager__pf = Cast<UDebugManager_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess12__pf = (b0l__K2Node_DynamicCast_AsDebug_Manager__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess12__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 64:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Manager__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_Manager__pf->bpf__LoadxSettings__pfT();
				}
			}
		case 65:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("BeginPlay called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugMode_C__pf4162722864::bpf__ExecuteUbergraph_DebugMode__pf_1(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue1__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf{};
	int32 bpfv__CallFunc_GetNumPlayers_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue4__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue6__pf{};
	uint8 bpfv__CallFunc_Add_ByteByte_ReturnValue__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue8__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue9__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue5__pf{};
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
				bpfv__CallFunc_Add_ByteByte_ReturnValue__pf = UKismetMathLibrary::Add_ByteByte(static_cast<uint8>(bpv__1979xRounds__pfT), 1);
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(ADebugMode_C__pf4162722864::StaticClass())->ReferencedConvertedFields[0]), bpfv__CallFunc_Add_ByteByte_ReturnValue__pf);
				bpv__1979xRounds__pfT = static_cast<E__1979Rounds__pf>(bpfv__CallFunc_GetValidValue_ReturnValue__pf);
			}
		case 3:
			{
				bpf__StartxRound__pfT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_GetGameState_ReturnValue1__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData1__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsDebug_MData1__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData1__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData1__pf->bpf__SetxState__pfT(E__DStates__pf::NewEnumerator3);
				}
			}
		case 17:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Game Over")), true, true, FLinearColor(1.000000,0.000000,0.070606,1.000000), 1000.000000);
			}
		case 18:
			{
				bpfv__CallFunc_GetGameState_ReturnValue4__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData4__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue4__pf);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsDebug_MData4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData4__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData4__pf->bpf__SendxPlayerxsxtoxGamexOverxScreen__pfTMTTTT();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpf__StartxRound__pfT();
			}
		case 20:
			{
				bpv__1979xGameStarted__pfT = false;
			}
		case 21:
			{
				bpv__1979xRoundxInxSession__pfTTT = true;
			}
		case 22:
			{
				bpfv__CallFunc_GetGameState_ReturnValue8__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData8__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue8__pf);
				b0l__K2Node_DynamicCast_bSuccess10__pf = (b0l__K2Node_DynamicCast_AsDebug_MData8__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData8__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData8__pf->bpf__AddxPlayer__pfT(true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				__StateStack.Push(25);
			}
		case 24:
			{
				if (!bpv__1979xGameStarted__pfT)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 19;
				break;
			}
		case 25:
			{
				if (!bpv__1979xRoundxInxSession__pfTTT)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				__StateStack.Push(28);
				__StateStack.Push(33);
			}
		case 27:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue5__pf = UKismetMathLibrary::Greater_IntInt(bpv__1979xAsteroidxCount__pfTT, 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue5__pf)
				{
					__CurrentState = 38;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpfv__CallFunc_GetGameState_ReturnValue6__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData6__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsDebug_MData6__pf != nullptr);;
				bool  __Local__8 = false;
				if (!((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData6__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData6__pf->bpv__Player2Ready__pf) : (__Local__8)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				bpfv__CallFunc_GetGameState_ReturnValue6__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData6__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsDebug_MData6__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData6__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData6__pf->bpf__AddxPlayer__pfT(false);
				}
			}
		case 30:
			{
				bpfv__CallFunc_GetGameState_ReturnValue6__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData6__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsDebug_MData6__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData6__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData6__pf->AActor::FlushNetDormancy();
				}
			}
		case 31:
			{
				bpfv__CallFunc_GetGameState_ReturnValue6__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData6__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsDebug_MData6__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData6__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData6__pf->bpv__Player2Ready__pf = false;
				}
			}
		case 32:
			{
				bpfv__CallFunc_GetGameState_ReturnValue6__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData6__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsDebug_MData6__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData6__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData6__pf->bpf__OnRep_Player2Ready__pf();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpfv__CallFunc_GetNumPlayers_ReturnValue__pf = GetNumPlayers();
			}
		case 34:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_GetNumPlayers_ReturnValue__pf, 1);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 37;
					break;
				}
			}
		case 35:
			{
				bpfv__CallFunc_GetGameState_ReturnValue2__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData2__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsDebug_MData2__pf != nullptr);;
				int32  __Local__9 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__LivesxLeftxP2__pfTT) : (__Local__9)), 0);
				int32  __Local__10 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__LivesxLeftxP1__pfTT) : (__Local__10)), 0);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Greater_IntInt_ReturnValue__pf, bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 36;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				bpv__1979xRoundxInxSession__pfTTT = false;
				__CurrentState = 16;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_GetGameState_ReturnValue2__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData2__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsDebug_MData2__pf != nullptr);;
				int32  __Local__11 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__LivesxLeftxP1__pfTT) : (__Local__11)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue1__pf)
				{
					__CurrentState = 36;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(1, 312926139, TEXT("ExecuteUbergraph_DebugMode_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 71:
			{
				__CurrentState = 72;
				break;
			}
		case 72:
			{
				bpfv__CallFunc_GetGameState_ReturnValue9__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData9__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue9__pf);
				b0l__K2Node_DynamicCast_bSuccess11__pf = (b0l__K2Node_DynamicCast_AsDebug_MData9__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess11__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 73:
			{
				E__DStates__pf  __Local__13 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData9__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData9__pf->bpv__EDebugState__pf) : (__Local__13))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 23;
					break;
				}
				E__DStates__pf  __Local__14 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData9__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData9__pf->bpv__EDebugState__pf) : (__Local__14))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__15 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData9__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData9__pf->bpv__EDebugState__pf) : (__Local__15))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__16 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData9__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData9__pf->bpv__EDebugState__pf) : (__Local__16))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__17 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData9__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData9__pf->bpv__EDebugState__pf) : (__Local__17))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__18 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData9__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData9__pf->bpv__EDebugState__pf) : (__Local__18))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__19 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData9__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData9__pf->bpv__EDebugState__pf) : (__Local__19))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__20 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData9__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData9__pf->bpv__EDebugState__pf) : (__Local__20))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
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
void ADebugMode_C__pf4162722864::bpf__ExecuteUbergraph_DebugMode__pf_2(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 74:
			{
				__CurrentState = 75;
				break;
			}
		case 75:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("State change called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
			}
		case 76:
			{
				bpfv__CallFunc_GetGameState_ReturnValue5__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData5__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue5__pf);
				b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsDebug_MData5__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 77:
			{
				E__DStates__pf  __Local__21 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData5__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData5__pf->bpv__EDebugState__pf) : (__Local__21))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 80;
					break;
				}
				E__DStates__pf  __Local__22 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData5__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData5__pf->bpv__EDebugState__pf) : (__Local__22))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__23 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData5__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData5__pf->bpv__EDebugState__pf) : (__Local__23))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__24 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData5__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData5__pf->bpv__EDebugState__pf) : (__Local__24))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__25 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData5__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData5__pf->bpv__EDebugState__pf) : (__Local__25))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__26 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData5__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData5__pf->bpv__EDebugState__pf) : (__Local__26))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 79;
					break;
				}
				E__DStates__pf  __Local__27 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData5__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData5__pf->bpv__EDebugState__pf) : (__Local__27))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 78;
					break;
				}
				E__DStates__pf  __Local__28 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData5__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData5__pf->bpv__EDebugState__pf) : (__Local__28))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 78:
			{
				bpf__SetupxMainMenu__pfT();
				__CurrentState = -1;
				break;
			}
		case 79:
			{
				bpf__SetupxDebugMode__pfT();
				__CurrentState = -1;
				break;
			}
		case 80:
			{
				bpf__SetupxArcade1979__pfT();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugMode_C__pf4162722864::bpf__ExecuteUbergraph_DebugMode__pf_3(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_ObjectToString_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 66);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Player: ")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	bpfv__CallFunc_Conv_ObjectToString_ReturnValue__pf = UKismetStringLibrary::Conv_ObjectToString(b0l__K2Node_Event_ExitingController__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_ObjectToString_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Logged out")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	if(::IsValid(b0l__K2Node_Event_ExitingController__pf))
	{
		b0l__K2Node_Event_ExitingController__pf->K2_DestroyActor();
	}
	return; //KCST_EndOfThread
}
void ADebugMode_C__pf4162722864::bpf__ExecuteUbergraph_DebugMode__pf_4(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AShip_C__pf668171628* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 88);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Spawn Ship called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
	if(::IsValid(b0l__K2Node_CustomEvent_Player_Start_Ref__pf))
	{
		bpfv__CallFunc_GetTransform_ReturnValue__pf = b0l__K2Node_CustomEvent_Player_Start_Ref__pf->AActor::GetTransform();
	}
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AShip_C__pf668171628::StaticClass(), bpfv__CallFunc_GetTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, b0l__K2Node_CustomEvent_Player_Controller_Ref__pf);
	if(::IsValid(b0l__K2Node_CustomEvent_Player_Start_Ref__pf))
	{
		bpfv__CallFunc_GetTransform_ReturnValue__pf = b0l__K2Node_CustomEvent_Player_Start_Ref__pf->AActor::GetTransform();
	}
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AShip_C__pf668171628>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_GetTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::FlushNetDormancy();
	}
	if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__ShipColor__pf = b0l__K2Node_CustomEvent_Color__pf;
	}
	if(::IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
	{
		bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpf__OnRep_ShipColor__pf();
	}
	if(::IsValid(b0l__K2Node_CustomEvent_Player_Controller_Ref__pf))
	{
		b0l__K2Node_CustomEvent_Player_Controller_Ref__pf->Possess(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
	}
	return; //KCST_EndOfThread
}
void ADebugMode_C__pf4162722864::bpf__ExecuteUbergraph_DebugMode__pf_5(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue7__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 81:
			{
				__CurrentState = 82;
				break;
			}
		case 82:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("OnPostLogin called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
			}
		case 83:
			{
				__StateStack.Push(86);
			}
		case 84:
			{
				bpfv__CallFunc_GetGameState_ReturnValue7__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData7__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue7__pf);
				b0l__K2Node_DynamicCast_bSuccess9__pf = (b0l__K2Node_DynamicCast_AsDebug_MData7__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess9__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 85:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData7__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData7__pf->bpf__SetxPlayerxControllerxReference__pfTTT(b0l__K2Node_Event_NewPlayer__pf, /*out*/ b0l__CallFunc_Set_Player_Controller_Reference_Player_Set__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 86:
			{
				b0l__K2Node_DynamicCast_AsReg_User__pf = Cast<ARegUser_C__pf4061722237>(b0l__K2Node_Event_NewPlayer__pf);
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsReg_User__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 87:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsReg_User__pf))
				{
					b0l__K2Node_DynamicCast_AsReg_User__pf->bpf__OnPostLogin__pf();
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
void ADebugMode_C__pf4162722864::bpf__ExecuteUbergraph_DebugMode__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 39:
			{
				__CurrentState = 40;
				break;
			}
		case 40:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Round Starting.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 41:
			{
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__1979xRounds__pfT), static_cast<uint8>(E__1979Rounds__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 46;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__1979xRounds__pfT), static_cast<uint8>(E__1979Rounds__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 44;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__1979xRounds__pfT), static_cast<uint8>(E__1979Rounds__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 42;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__1979xRounds__pfT), static_cast<uint8>(E__1979Rounds__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 48;
					break;
				}
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__1979xRounds__pfT), static_cast<uint8>(E__1979Rounds__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 50;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Round 3 Started")), true, true, FLinearColor(0.000000,1.000000,0.977967,1.000000), 1000.000000);
			}
		case 43:
			{
				bpf__SpawnxAsteroids__pfT(8);
				__CurrentState = -1;
				break;
			}
		case 44:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Round 2 Started")), true, true, FLinearColor(0.000000,1.000000,0.977967,1.000000), 1000.000000);
			}
		case 45:
			{
				bpf__SpawnxAsteroids__pfT(6);
				__CurrentState = -1;
				break;
			}
		case 46:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Round 1 Started")), true, true, FLinearColor(0.000000,1.000000,0.977967,1.000000), 1000.000000);
			}
		case 47:
			{
				bpf__SpawnxAsteroids__pfT(4);
				__CurrentState = -1;
				break;
			}
		case 48:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Round 4 Started")), true, true, FLinearColor(0.000000,1.000000,0.977967,1.000000), 1000.000000);
			}
		case 49:
			{
				bpf__SpawnxAsteroids__pfT(10);
				__CurrentState = -1;
				break;
			}
		case 50:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Round 5 Started")), true, true, FLinearColor(0.000000,1.000000,0.977967,1.000000), 1000.000000);
			}
		case 51:
			{
				bpf__SpawnxAsteroids__pfT(11);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugMode_C__pf4162722864::bpf__ExecuteUbergraph_DebugMode__pf_7(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 52:
			{
				__CurrentState = 53;
				break;
			}
		case 53:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Ship Destroyed called.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 54:
			{
				APlayerState*  __Local__29 = ((APlayerState*)nullptr);
				b0l__K2Node_DynamicCast_AsUser_Data__pf = Cast<AUserData_C__pf4061722237>(((::IsValid(b0l__K2Node_CustomEvent_Ship_Owner__pf)) ? (b0l__K2Node_CustomEvent_Ship_Owner__pf->PlayerState) : (__Local__29)));
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsUser_Data__pf != nullptr);;
				FName  __Local__30 = FName();
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(((::IsValid(b0l__K2Node_DynamicCast_AsUser_Data__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Data__pf->bpv__PlyrxName__pfT) : (__Local__30)), FName(TEXT("Player One")));
				if (!bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf)
				{
					__CurrentState = 59;
					break;
				}
			}
		case 55:
			{
				bpfv__CallFunc_GetGameState_ReturnValue3__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData3__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsDebug_MData3__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpf__TakexPlayerxLife__pfTT(true, 1);
				}
			}
		case 56:
			{
				bpfv__CallFunc_GetGameState_ReturnValue3__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData3__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsDebug_MData3__pf != nullptr);;
				int32  __Local__31 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue4__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__LivesxLeftxP1__pfTT) : (__Local__31)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue4__pf)
				{
					__CurrentState = 58;
					break;
				}
			}
		case 57:
			{
				if(::IsValid(b0l__K2Node_CustomEvent_Ship_Owner__pf))
				{
					b0l__K2Node_CustomEvent_Ship_Owner__pf->bpf__SpawnxPlayer__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 58:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 did not have enough life to spawn again.")), true, true, FLinearColor(1.000000,0.000000,0.083783,1.000000), 10.000000);
				__CurrentState = -1;
				break;
			}
		case 59:
			{
				bpfv__CallFunc_GetGameState_ReturnValue3__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData3__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsDebug_MData3__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpf__TakexPlayerxLife__pfTT(false, 1);
				}
			}
		case 60:
			{
				bpfv__CallFunc_GetGameState_ReturnValue3__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData3__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsDebug_MData3__pf != nullptr);;
				int32  __Local__32 = 0;
				bpfv__CallFunc_Greater_IntInt_ReturnValue3__pf = UKismetMathLibrary::Greater_IntInt(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__LivesxLeftxP2__pfTT) : (__Local__32)), 0);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue3__pf)
				{
					__CurrentState = 61;
					break;
				}
				__CurrentState = 57;
				break;
			}
		case 61:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 did not have enough life to spawn again.")), true, true, FLinearColor(1.000000,0.000000,0.080462,1.000000), 10.000000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugMode_C__pf4162722864::bpf__SpawnxShip__pfT_Implementation(APlayerController* bpp__PlayerxControllerxRef__pfTT, APlayerStart* bpp__PlayerxStartxRef__pfTT, FLinearColor bpp__Color__pf)
{
	b0l__K2Node_CustomEvent_Player_Controller_Ref__pf = bpp__PlayerxControllerxRef__pfTT;
	b0l__K2Node_CustomEvent_Player_Start_Ref__pf = bpp__PlayerxStartxRef__pfTT;
	b0l__K2Node_CustomEvent_Color__pf = bpp__Color__pf;
	bpf__ExecuteUbergraph_DebugMode__pf_4(88);
}
void ADebugMode_C__pf4162722864::bpf__K2_PostLogin__pf(APlayerController* bpp__NewPlayer__pf)
{
	b0l__K2Node_Event_NewPlayer__pf = bpp__NewPlayer__pf;
	bpf__ExecuteUbergraph_DebugMode__pf_5(81);
}
void ADebugMode_C__pf4162722864::bpf__StatexChanged__pfT_Implementation()
{
	bpf__ExecuteUbergraph_DebugMode__pf_2(74);
}
void ADebugMode_C__pf4162722864::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_DebugMode__pf_1(71);
}
void ADebugMode_C__pf4162722864::bpf__K2_OnLogout__pf(AController* bpp__ExitingController__pf)
{
	b0l__K2Node_Event_ExitingController__pf = bpp__ExitingController__pf;
	bpf__ExecuteUbergraph_DebugMode__pf_3(66);
}
void ADebugMode_C__pf4162722864::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_DebugMode__pf_0(62);
}
void ADebugMode_C__pf4162722864::bpf__ShipxDestroyed__pfT_Implementation(ARegUser_C__pf4061722237* bpp__ShipxOwner__pfT)
{
	b0l__K2Node_CustomEvent_Ship_Owner__pf = bpp__ShipxOwner__pfT;
	bpf__ExecuteUbergraph_DebugMode__pf_7(52);
}
void ADebugMode_C__pf4162722864::bpf__StartxRound__pfT_Implementation()
{
	bpf__ExecuteUbergraph_DebugMode__pf_6(39);
}
void ADebugMode_C__pf4162722864::bpf__UserConstructionScript__pf()
{
}
AActor*  ADebugMode_C__pf4162722864::ChoosePlayerStart_Implementation(AController* bpp__Player__pf)
{
	AActor* bpp__ReturnValue__pf{};
	bpp__ReturnValue__pf = ((AActor*)nullptr);
	return bpp__ReturnValue__pf;
}
void ADebugMode_C__pf4162722864::bpf__SetupxMainMenu__pfT()
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	ADebugMData_C__pf4162722864* bpfv__K2Node_DynamicCast_AsDebug_MData__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AMenuPawn_C__pf3752356522* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Setup Main Menu called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
			}
		case 2:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				bpfv__K2Node_DynamicCast_AsDebug_MData__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsDebug_MData__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsDebug_MData__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsDebug_MData__pf->bpv__PlayerStartx1xRef__pfTT))
				{
					bpfv__CallFunc_GetTransform_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsDebug_MData__pf->bpv__PlayerStartx1xRef__pfTT->AActor::GetTransform();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AMenuPawn_C__pf3752356522::StaticClass(), bpfv__CallFunc_GetTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 4:
			{
				if(::IsValid(bpfv__K2Node_DynamicCast_AsDebug_MData__pf) && ::IsValid(bpfv__K2Node_DynamicCast_AsDebug_MData__pf->bpv__PlayerStartx1xRef__pfTT))
				{
					bpfv__CallFunc_GetTransform_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsDebug_MData__pf->bpv__PlayerStartx1xRef__pfTT->AActor::GetTransform();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AMenuPawn_C__pf3752356522>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_GetTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->Possess(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ADebugMode_C__pf4162722864::bpf__SetupxDebugMode__pfT()
{
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Setup debug mode called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
}
void ADebugMode_C__pf4162722864::bpf__SetupxArcade1979__pfT()
{
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Setup A1979 mode called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
}
void ADebugMode_C__pf4162722864::bpf__SpawnxAsteroids__pfT(int32 bpp__Howxmanyx__pfTzy)
{
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_RandomInteger_ReturnValue__pf{};
	ASpawn_Volume_C__pf2174024837* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Variable__pf = 1;
			}
		case 2:
			{
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpp__Howxmanyx__pfTzy);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				__StateStack.Push(5);
			}
		case 4:
			{
				bpfv__CallFunc_RandomInteger_ReturnValue__pf = UKismetMathLibrary::RandomInteger(4);
				FCustomThunkTemplates::Array_Get(bpv__SpawnVolumes__pf, bpfv__CallFunc_RandomInteger_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(::IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->bpf__SpawnxLargexAsteroid__pfTT();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
PRAGMA_DISABLE_OPTIMIZATION
void ADebugMode_C__pf4162722864::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Obstacles/Asteroid_Small.Asteroid_Small_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ADebugMode_C__pf4162722864::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerStart 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{16, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameMode 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Asteroid_Small_C /Game/Obstacles/Asteroid_Small.Default__Asteroid_Small_C 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.EngineMessage 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugMData.DebugMData_C 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/RegUser.RegUser_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/UserData.UserData_C 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Levels/Assets/Colliders/Spawn_Volume.Spawn_Volume_C 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Pawns/Ship/Ship.Ship_C 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugManager.DebugManager_C 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Pawns/MenuPawn.MenuPawn_C 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Obstacles/Asteroid.Asteroid_C 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Obstacles/Asteroid_Medium.Asteroid_Medium_C 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Obstacles/Asteroid_Large.Asteroid_Large_C 
		{33, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Modes/Arcade1979/1979Rounds.1979Rounds 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ADebugMode_C__pf4162722864
{
	FRegisterHelper__ADebugMode_C__pf4162722864()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Modes/Debug/DebugMode"), &ADebugMode_C__pf4162722864::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ADebugMode_C__pf4162722864 Instance;
};
FRegisterHelper__ADebugMode_C__pf4162722864 FRegisterHelper__ADebugMode_C__pf4162722864::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
