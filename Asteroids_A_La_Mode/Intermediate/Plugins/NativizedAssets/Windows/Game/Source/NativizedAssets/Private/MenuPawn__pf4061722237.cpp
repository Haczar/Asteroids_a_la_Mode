#include "NativizedAssets.h"
#include "MenuPawn__pf4061722237.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
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
#include "Coop__pf1232574660.h"
#include "MenuBase__pf3166771619.h"
#include "MainScreen__pf1232574660.h"
#include "DebugState__pf4162722864.h"
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
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "PlyrState__pf4061722237.h"
#include "DebugInstance__pf4162722864.h"
#include "DebugMode__pf4162722864.h"
#include "InGameHud__pf515974370.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "GameStart__pf3166771619.h"
#include "DStates__pf4162722864.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "PState__pf4061722237.h"
#include "GameOver__pf3166771619.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Spawn_Volume__pf2174024837.h"
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
AMenuPawn_C__pf4061722237::AMenuPawn_C__pf4061722237(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AMenuPawn_C__pf4061722237::StaticClass() == GetClass()))
	{
		AMenuPawn_C__pf4061722237::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bAlwaysRelevant = true;
}
PRAGMA_ENABLE_OPTIMIZATION
void AMenuPawn_C__pf4061722237::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AMenuPawn_C__pf4061722237::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(APlayerC_Regular_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UCoop_C__pf1232574660::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMenuBase_C__pf3166771619::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMainScreen_C__pf1232574660::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADebugState_C__pf4162722864::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	__Local__0->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__0->InputActionDelegateBindings.AddUninitialized(6);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->InputActionDelegateBindings.GetData(), 6);
	auto& __Local__1 = __Local__0->InputActionDelegateBindings[0];
	__Local__1.InputActionName = FName(TEXT("Menu Down"));
	__Local__1.InputKeyEvent = EInputEvent::IE_Released;
	__Local__1.FunctionNameToBind = FName(TEXT("InpActEvt_Menu Down_K2Node_InputActionEvent_11"));
	auto& __Local__2 = __Local__0->InputActionDelegateBindings[1];
	__Local__2.InputActionName = FName(TEXT("Menu Down"));
	__Local__2.FunctionNameToBind = FName(TEXT("InpActEvt_Menu Down_K2Node_InputActionEvent_10"));
	auto& __Local__3 = __Local__0->InputActionDelegateBindings[2];
	__Local__3.InputActionName = FName(TEXT("Menu Up"));
	__Local__3.InputKeyEvent = EInputEvent::IE_Released;
	__Local__3.FunctionNameToBind = FName(TEXT("InpActEvt_Menu Up_K2Node_InputActionEvent_9"));
	auto& __Local__4 = __Local__0->InputActionDelegateBindings[3];
	__Local__4.InputActionName = FName(TEXT("Menu Up"));
	__Local__4.FunctionNameToBind = FName(TEXT("InpActEvt_Menu Up_K2Node_InputActionEvent_8"));
	auto& __Local__5 = __Local__0->InputActionDelegateBindings[4];
	__Local__5.InputActionName = FName(TEXT("Menu Select"));
	__Local__5.FunctionNameToBind = FName(TEXT("InpActEvt_Menu Select_K2Node_InputActionEvent_7"));
	auto& __Local__6 = __Local__0->InputActionDelegateBindings[5];
	__Local__6.InputActionName = FName(TEXT("Menu Back"));
	__Local__6.FunctionNameToBind = FName(TEXT("InpActEvt_Menu Back_K2Node_InputActionEvent_6"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AMenuPawn_C__pf4061722237::bpf__ExecuteUbergraph_MenuPawn__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue1__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue1__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf != nullptr);;
				UUserWidget*  __Local__7 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMenu_Base__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf->bpv__WidgetxRef__pfT) : (__Local__7)));
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsMenu_Base__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue5__pf);
				b0l__K2Node_DynamicCast_bSuccess18__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf != nullptr);;
				UUserWidget*  __Local__8 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMenu_Base4__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf->bpv__WidgetxRef__pfT) : (__Local__8)));
				b0l__K2Node_DynamicCast_bSuccess20__pf = (b0l__K2Node_DynamicCast_AsMenu_Base4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsMenu_Base4__pf))
				{
					b0l__K2Node_DynamicCast_AsMenu_Base4__pf->bpf__MenuxBack__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Could not determine the widget of the Player.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				UUserWidget*  __Local__9 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsCoop__pf = Cast<UCoop_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpv__WidgetxRef__pfT) : (__Local__9)));
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsCoop__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsCoop__pf))
				{
					b0l__K2Node_DynamicCast_AsCoop__pf->bpf__MenuxBack__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf != nullptr);;
				UUserWidget*  __Local__10 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsCoop1__pf = Cast<UCoop_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf->bpv__WidgetxRef__pfT) : (__Local__10)));
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsCoop1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = 10;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue1__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf != nullptr);;
				UUserWidget*  __Local__11 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMain_Screen__pf = Cast<UMainScreen_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular1__pf->bpv__WidgetxRef__pfT) : (__Local__11)));
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsMain_Screen__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess5__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess23__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf != nullptr);;
				UUserWidget*  __Local__12 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMain_Screen4__pf = Cast<UMainScreen_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf->bpv__WidgetxRef__pfT) : (__Local__12)));
				b0l__K2Node_DynamicCast_bSuccess25__pf = (b0l__K2Node_DynamicCast_AsMain_Screen4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Screen4__pf))
				{
					b0l__K2Node_DynamicCast_AsMain_Screen4__pf->bpf__DebugxxChangeMode__pf3T();
				}
				__CurrentState = -1;
				break;
			}
		case 22:
			{
				__CurrentState = 23;
				break;
			}
		case 23:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Menu Back pressed.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 24:
			{
				bpfv__CallFunc_GetGameState_ReturnValue1__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_State1__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess11__pf = (b0l__K2Node_DynamicCast_AsDebug_State1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess11__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 25:
			{
				E__DStates__pf  __Local__13 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__EDebugState__pf) : (__Local__13))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__14 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__EDebugState__pf) : (__Local__14))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__15 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__EDebugState__pf) : (__Local__15))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__16 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__EDebugState__pf) : (__Local__16))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__17 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__EDebugState__pf) : (__Local__17))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__18 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__EDebugState__pf) : (__Local__18))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__19 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__EDebugState__pf) : (__Local__19))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 12;
					break;
				}
				E__DStates__pf  __Local__20 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State1__pf->bpv__EDebugState__pf) : (__Local__20))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMenuPawn_C__pf4061722237::bpf__ExecuteUbergraph_MenuPawn__pf_1(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				UUserWidget*  __Local__21 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsCoop__pf = Cast<UCoop_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpv__WidgetxRef__pfT) : (__Local__21)));
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsCoop__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsCoop__pf))
				{
					b0l__K2Node_DynamicCast_AsCoop__pf->bpf__MovexDown__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_State__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsDebug_State__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 15:
			{
				E__DStates__pf  __Local__22 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__EDebugState__pf) : (__Local__22))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__23 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__EDebugState__pf) : (__Local__23))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__24 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__EDebugState__pf) : (__Local__24))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__25 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__EDebugState__pf) : (__Local__25))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__26 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__EDebugState__pf) : (__Local__26))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__27 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__EDebugState__pf) : (__Local__27))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__28 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__EDebugState__pf) : (__Local__28))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				E__DStates__pf  __Local__29 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__EDebugState__pf) : (__Local__29))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf != nullptr);;
				UUserWidget*  __Local__30 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMain_Screen1__pf = Cast<UMainScreen_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf->bpv__WidgetxRef__pfT) : (__Local__30)));
				b0l__K2Node_DynamicCast_bSuccess10__pf = (b0l__K2Node_DynamicCast_AsMain_Screen1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess10__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 17:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess23__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf != nullptr);;
				UUserWidget*  __Local__31 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMain_Screen4__pf = Cast<UMainScreen_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf->bpv__WidgetxRef__pfT) : (__Local__31)));
				b0l__K2Node_DynamicCast_bSuccess25__pf = (b0l__K2Node_DynamicCast_AsMain_Screen4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Screen4__pf))
				{
					b0l__K2Node_DynamicCast_AsMain_Screen4__pf->bpf__MovexDown__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf != nullptr);;
				UUserWidget*  __Local__32 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsCoop2__pf = Cast<UCoop_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf->bpv__WidgetxRef__pfT) : (__Local__32)));
				b0l__K2Node_DynamicCast_bSuccess9__pf = (b0l__K2Node_DynamicCast_AsCoop2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess9__pf)
				{
					__CurrentState = 19;
					break;
				}
				__CurrentState = 9;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf != nullptr);;
				UUserWidget*  __Local__33 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMenu_Base1__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular2__pf->bpv__WidgetxRef__pfT) : (__Local__33)));
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsMenu_Base1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess8__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 20:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue5__pf);
				b0l__K2Node_DynamicCast_bSuccess18__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf != nullptr);;
				UUserWidget*  __Local__34 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMenu_Base4__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf->bpv__WidgetxRef__pfT) : (__Local__34)));
				b0l__K2Node_DynamicCast_bSuccess20__pf = (b0l__K2Node_DynamicCast_AsMenu_Base4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsMenu_Base4__pf))
				{
					b0l__K2Node_DynamicCast_AsMenu_Base4__pf->bpf__MenuxDown__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Could not determine the widget of the Player.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 48:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Menu Down Pressd.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = 14;
				break;
			}
		case 51:
			{
				__CurrentState = 52;
				break;
			}
		case 52:
			{
				b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputActionEvent_Key4__pf;
				__CurrentState = 48;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMenuPawn_C__pf4061722237::bpf__ExecuteUbergraph_MenuPawn__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue4__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue2__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 8:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				UUserWidget*  __Local__35 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsCoop__pf = Cast<UCoop_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpv__WidgetxRef__pfT) : (__Local__35)));
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsCoop__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsCoop__pf))
				{
					b0l__K2Node_DynamicCast_AsCoop__pf->bpf__MovexUp__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Could not determine the widget of the Player.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 37:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue4__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue4__pf);
				b0l__K2Node_DynamicCast_bSuccess16__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf != nullptr);;
				UUserWidget*  __Local__36 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMenu_Base3__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf->bpv__WidgetxRef__pfT) : (__Local__36)));
				b0l__K2Node_DynamicCast_bSuccess17__pf = (b0l__K2Node_DynamicCast_AsMenu_Base3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess17__pf)
				{
					__CurrentState = 36;
					break;
				}
			}
		case 38:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue5__pf);
				b0l__K2Node_DynamicCast_bSuccess18__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf != nullptr);;
				UUserWidget*  __Local__37 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMenu_Base4__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf->bpv__WidgetxRef__pfT) : (__Local__37)));
				b0l__K2Node_DynamicCast_bSuccess20__pf = (b0l__K2Node_DynamicCast_AsMenu_Base4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsMenu_Base4__pf))
				{
					b0l__K2Node_DynamicCast_AsMenu_Base4__pf->bpf__MenuxUp__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 39:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue4__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue4__pf);
				b0l__K2Node_DynamicCast_bSuccess16__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf != nullptr);;
				UUserWidget*  __Local__38 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsCoop4__pf = Cast<UCoop_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf->bpv__WidgetxRef__pfT) : (__Local__38)));
				b0l__K2Node_DynamicCast_bSuccess19__pf = (b0l__K2Node_DynamicCast_AsCoop4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess19__pf)
				{
					__CurrentState = 37;
					break;
				}
				__CurrentState = 8;
				break;
			}
		case 41:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue4__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue4__pf);
				b0l__K2Node_DynamicCast_bSuccess16__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf != nullptr);;
				UUserWidget*  __Local__39 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMain_Screen3__pf = Cast<UMainScreen_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular4__pf->bpv__WidgetxRef__pfT) : (__Local__39)));
				b0l__K2Node_DynamicCast_bSuccess21__pf = (b0l__K2Node_DynamicCast_AsMain_Screen3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess21__pf)
				{
					__CurrentState = 39;
					break;
				}
			}
		case 42:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess23__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf != nullptr);;
				UUserWidget*  __Local__40 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMain_Screen4__pf = Cast<UMainScreen_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf->bpv__WidgetxRef__pfT) : (__Local__40)));
				b0l__K2Node_DynamicCast_bSuccess25__pf = (b0l__K2Node_DynamicCast_AsMain_Screen4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Screen4__pf))
				{
					b0l__K2Node_DynamicCast_AsMain_Screen4__pf->bpf__MovexUp__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 43:
			{
				__CurrentState = 44;
				break;
			}
		case 44:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key2__pf;
			}
		case 45:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Menu Up Pressed.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 46:
			{
				bpfv__CallFunc_GetGameState_ReturnValue2__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_State2__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess22__pf = (b0l__K2Node_DynamicCast_AsDebug_State2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess22__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 47:
			{
				E__DStates__pf  __Local__41 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__EDebugState__pf) : (__Local__41))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__42 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__EDebugState__pf) : (__Local__42))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__43 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__EDebugState__pf) : (__Local__43))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__44 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__EDebugState__pf) : (__Local__44))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__45 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__EDebugState__pf) : (__Local__45))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__46 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__EDebugState__pf) : (__Local__46))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__47 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__EDebugState__pf) : (__Local__47))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 41;
					break;
				}
				E__DStates__pf  __Local__48 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State2__pf->bpv__EDebugState__pf) : (__Local__48))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMenuPawn_C__pf4061722237::bpf__ExecuteUbergraph_MenuPawn__pf_3(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue3__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue6__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
				UUserWidget*  __Local__49 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsCoop__pf = Cast<UCoop_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf->bpv__WidgetxRef__pfT) : (__Local__49)));
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsCoop__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsCoop__pf))
				{
					b0l__K2Node_DynamicCast_AsCoop__pf->bpf__MenuxSelect__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Could not determine the widget of the Player.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = -1;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess12__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf != nullptr);;
				UUserWidget*  __Local__50 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMenu_Base2__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf->bpv__WidgetxRef__pfT) : (__Local__50)));
				b0l__K2Node_DynamicCast_bSuccess13__pf = (b0l__K2Node_DynamicCast_AsMenu_Base2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess13__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 28:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue5__pf);
				b0l__K2Node_DynamicCast_bSuccess18__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf != nullptr);;
				UUserWidget*  __Local__51 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMenu_Base4__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf->bpv__WidgetxRef__pfT) : (__Local__51)));
				b0l__K2Node_DynamicCast_bSuccess20__pf = (b0l__K2Node_DynamicCast_AsMenu_Base4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsMenu_Base4__pf))
				{
					b0l__K2Node_DynamicCast_AsMenu_Base4__pf->bpf__MenuxSelect__pfT();
				}
				__CurrentState = -1;
				break;
			}
		case 29:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess12__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf != nullptr);;
				UUserWidget*  __Local__52 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsCoop3__pf = Cast<UCoop_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf->bpv__WidgetxRef__pfT) : (__Local__52)));
				b0l__K2Node_DynamicCast_bSuccess14__pf = (b0l__K2Node_DynamicCast_AsCoop3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess14__pf)
				{
					__CurrentState = 27;
					break;
				}
				__CurrentState = 4;
				break;
			}
		case 30:
			{
				__CurrentState = 31;
				break;
			}
		case 31:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Menu Select Pressed.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 32:
			{
				bpfv__CallFunc_GetGameState_ReturnValue3__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_State3__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess24__pf = (b0l__K2Node_DynamicCast_AsDebug_State3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess24__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 33:
			{
				E__DStates__pf  __Local__53 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__EDebugState__pf) : (__Local__53))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__54 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__EDebugState__pf) : (__Local__54))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__55 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__EDebugState__pf) : (__Local__55))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__56 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__EDebugState__pf) : (__Local__56))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__57 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__EDebugState__pf) : (__Local__57))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__58 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__EDebugState__pf) : (__Local__58))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__59 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__EDebugState__pf) : (__Local__59))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = 34;
					break;
				}
				E__DStates__pf  __Local__60 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum3_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State3__pf->bpv__EDebugState__pf) : (__Local__60))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum3_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess12__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf != nullptr);;
				UUserWidget*  __Local__61 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMain_Screen2__pf = Cast<UMainScreen_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular3__pf->bpv__WidgetxRef__pfT) : (__Local__61)));
				b0l__K2Node_DynamicCast_bSuccess15__pf = (b0l__K2Node_DynamicCast_AsMain_Screen2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess15__pf)
				{
					__CurrentState = 29;
					break;
				}
			}
		case 35:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue6__pf);
				b0l__K2Node_DynamicCast_bSuccess23__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf != nullptr);;
				UUserWidget*  __Local__62 = ((UUserWidget*)nullptr);
				b0l__K2Node_DynamicCast_AsMain_Screen4__pf = Cast<UMainScreen_C__pf1232574660>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular6__pf->bpv__WidgetxRef__pfT) : (__Local__62)));
				b0l__K2Node_DynamicCast_bSuccess25__pf = (b0l__K2Node_DynamicCast_AsMain_Screen4__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsMain_Screen4__pf))
				{
					b0l__K2Node_DynamicCast_AsMain_Screen4__pf->bpf__MenuxSelect__pfT();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMenuPawn_C__pf4061722237::bpf__ExecuteUbergraph_MenuPawn__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputActionEvent_Key5__pf;
	bpfv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue5__pf);
	b0l__K2Node_DynamicCast_bSuccess18__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf != nullptr);;
	UUserWidget*  __Local__63 = ((UUserWidget*)nullptr);
	b0l__K2Node_DynamicCast_AsMenu_Base4__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf->bpv__WidgetxRef__pfT) : (__Local__63)));
	b0l__K2Node_DynamicCast_bSuccess20__pf = (b0l__K2Node_DynamicCast_AsMenu_Base4__pf != nullptr);;
	if(::IsValid(b0l__K2Node_DynamicCast_AsMenu_Base4__pf))
	{
		b0l__K2Node_DynamicCast_AsMenu_Base4__pf->bpf__MenuxDownxReleased__pfTT();
	}
	return; // KCST_GotoReturn
}
void AMenuPawn_C__pf4061722237::bpf__ExecuteUbergraph_MenuPawn__pf_5(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key3__pf;
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
	b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf = Cast<APlayerC_Regular_C__pf4061722237>(bpfv__CallFunc_GetPlayerController_ReturnValue5__pf);
	b0l__K2Node_DynamicCast_bSuccess18__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf != nullptr);;
	UUserWidget*  __Local__64 = ((UUserWidget*)nullptr);
	b0l__K2Node_DynamicCast_AsMenu_Base4__pf = Cast<UMenuBase_C__pf3166771619>(((::IsValid(b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf)) ? (b0l__K2Node_DynamicCast_AsPlayer_C_Regular5__pf->bpv__WidgetxRef__pfT) : (__Local__64)));
	b0l__K2Node_DynamicCast_bSuccess20__pf = (b0l__K2Node_DynamicCast_AsMenu_Base4__pf != nullptr);;
	if(::IsValid(b0l__K2Node_DynamicCast_AsMenu_Base4__pf))
	{
		b0l__K2Node_DynamicCast_AsMenu_Base4__pf->bpf__MenuxUpxReleased__pfTT();
	}
	return; // KCST_GotoReturn
}
void AMenuPawn_C__pf4061722237::bpf__InpActEvt_MenuxBack_K2Node_InputActionEvent_6__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MenuPawn__pf_0(22);
}
void AMenuPawn_C__pf4061722237::bpf__InpActEvt_MenuxSelect_K2Node_InputActionEvent_7__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MenuPawn__pf_3(30);
}
void AMenuPawn_C__pf4061722237::bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_8__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MenuPawn__pf_2(43);
}
void AMenuPawn_C__pf4061722237::bpf__InpActEvt_MenuxUp_K2Node_InputActionEvent_9__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MenuPawn__pf_5(49);
}
void AMenuPawn_C__pf4061722237::bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_10__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MenuPawn__pf_1(51);
}
void AMenuPawn_C__pf4061722237::bpf__InpActEvt_MenuxDown_K2Node_InputActionEvent_11__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MenuPawn__pf_4(1);
}
void AMenuPawn_C__pf4061722237::bpf__UserConstructionScript__pf()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void AMenuPawn_C__pf4061722237::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AMenuPawn_C__pf4061722237::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{59, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/PlayerC_Regular.PlayerC_Regular_C 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MainScreen/Coop.Coop_C 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MenuBase.MenuBase_C 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MainScreen/MainScreen.MainScreen_C 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugState.DebugState_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AMenuPawn_C__pf4061722237
{
	FRegisterHelper__AMenuPawn_C__pf4061722237()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Player/MenuPawn"), &AMenuPawn_C__pf4061722237::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AMenuPawn_C__pf4061722237 Instance;
};
FRegisterHelper__AMenuPawn_C__pf4061722237 FRegisterHelper__AMenuPawn_C__pf4061722237::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
