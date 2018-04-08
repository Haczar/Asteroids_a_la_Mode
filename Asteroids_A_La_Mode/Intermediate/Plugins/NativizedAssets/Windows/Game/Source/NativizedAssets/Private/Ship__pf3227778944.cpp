#include "NativizedAssets.h"
#include "Ship__pf3227778944.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
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
#include "DebugState__pf4162722864.h"
#include "PlayerC_Regular__pf4061722237.h"
#include "BP_Projectile__pf3227778944.h"
#include "Alien__pf655108736.h"
#include "Asteroid__pf2772898577.h"
#include "DebugMode__pf4162722864.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "GameStart__pf3166771619.h"
#include "InGameHud__pf515974370.h"
#include "PlyrState__pf4061722237.h"
#include "DStates__pf4162722864.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "DebugInstance__pf4162722864.h"
#include "PState__pf4061722237.h"
#include "Spawn_Volume__pf2174024837.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "1979Rounds__pf2955639682.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
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
AShip_C__pf3227778944::AShip_C__pf3227778944(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AShip_C__pf3227778944::StaticClass() == GetClass()))
	{
		AShip_C__pf3227778944::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__Thruster__pf = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Thruster"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakObjectPtr<UProperty> __Local__1{};
	const UProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), true, 0));
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UStaticMesh* >((bpv__StaticMesh__pf), UStaticMeshComponent::__PPO__StaticMesh() )));
	__Local__2 = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AShip_C__pf3227778944::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AShip_C__pf3227778944::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__StaticMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__StaticMesh__pf->BodyInstance.bEnableGravity = false;
	bpv__StaticMesh__pf->RelativeLocation = FVector(-0.000003, 0.000012, -50.000000);
	bpv__StaticMesh__pf->RelativeRotation = FRotator(0.000000, -90.000000, 90.000000);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.500000, 0.500000, 0.500000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__StaticMesh__pf), true, 0));
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__Thruster__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Thruster__pf->AttachToComponent(bpv__StaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("Thruster"));
	bpv__Thruster__pf->Template = CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AShip_C__pf3227778944::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Thruster__pf->RelativeLocation = FVector(-0.684106, -0.000012, -0.000000);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Thruster__pf), true, 0));
	bpv__Thruster__pf->bAutoActivate = false;
	if(!bpv__Thruster__pf->IsTemplate())
	{
		bpv__Thruster__pf->BodyInstance.FixupData(bpv__Thruster__pf);
	}
	bpv__acceleratex__pfzy = false;
	bpv__Firing__pf = false;
	bpv__Rotatex__pfzy = E__SRotate__pf::NewEnumerator2;
	bpv__Degregation_Constant__pf = 0.004000f;
	bpv__Degredation_Factor__pf = 0.500000f;
	bpv__MaxSpeed__pf = 20.000000f;
	bpv__Rotation_Constant__pf = 1.930000f;
	bpv__ThurstForce_Constant__pf = 0.093000f;
	bpv__FiringDelay__pf = 0.200000f;
	bpv__Tilt__pf = 0.000000f;
	bpv__VelocityV__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__ShipMat_Inst__pf = nullptr;
	bpv__ShipColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	bpv__WishRot__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__MissleCount__pf = 0;
	bAlwaysRelevant = true;
	bFindCameraComponentWhenViewTarget = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void AShip_C__pf3227778944::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__Thruster__pf)
	{
		bpv__Thruster__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void AShip_C__pf3227778944::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/Ship/SRotate.SRotate")));
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ADebugState_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(APlayerC_Regular_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Projectile_C__pf3227778944::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAlien_C__pf655108736::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AAsteroid_C__pf2772898577::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADebugMode_C__pf4162722864::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__3 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__3);
	auto __Local__4 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__4);
	__Local__3->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__3->InputActionDelegateBindings.AddUninitialized(7);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__3->InputActionDelegateBindings.GetData(), 7);
	auto& __Local__5 = __Local__3->InputActionDelegateBindings[0];
	__Local__5.InputActionName = FName(TEXT("Fire Weapon"));
	__Local__5.FunctionNameToBind = FName(TEXT("InpActEvt_Fire Weapon_K2Node_InputActionEvent_13"));
	auto& __Local__6 = __Local__3->InputActionDelegateBindings[1];
	__Local__6.InputActionName = FName(TEXT("Rotate Left"));
	__Local__6.InputKeyEvent = EInputEvent::IE_Released;
	__Local__6.FunctionNameToBind = FName(TEXT("InpActEvt_Rotate Left_K2Node_InputActionEvent_10"));
	auto& __Local__7 = __Local__3->InputActionDelegateBindings[2];
	__Local__7.InputActionName = FName(TEXT("Rotate Right"));
	__Local__7.InputKeyEvent = EInputEvent::IE_Released;
	__Local__7.FunctionNameToBind = FName(TEXT("InpActEvt_Rotate Right_K2Node_InputActionEvent_12"));
	auto& __Local__8 = __Local__3->InputActionDelegateBindings[3];
	__Local__8.InputActionName = FName(TEXT("Rotate Right"));
	__Local__8.FunctionNameToBind = FName(TEXT("InpActEvt_Rotate Right_K2Node_InputActionEvent_11"));
	auto& __Local__9 = __Local__3->InputActionDelegateBindings[4];
	__Local__9.InputActionName = FName(TEXT("Thrust"));
	__Local__9.FunctionNameToBind = FName(TEXT("InpActEvt_Thrust_K2Node_InputActionEvent_7"));
	auto& __Local__10 = __Local__3->InputActionDelegateBindings[5];
	__Local__10.InputActionName = FName(TEXT("Thrust"));
	__Local__10.InputKeyEvent = EInputEvent::IE_Released;
	__Local__10.FunctionNameToBind = FName(TEXT("InpActEvt_Thrust_K2Node_InputActionEvent_8"));
	auto& __Local__11 = __Local__3->InputActionDelegateBindings[6];
	__Local__11.InputActionName = FName(TEXT("Rotate Left"));
	__Local__11.FunctionNameToBind = FName(TEXT("InpActEvt_Rotate Left_K2Node_InputActionEvent_9"));
	__Local__4->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__4->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__4->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__12 = __Local__4->ComponentDelegateBindings[0];
	__Local__12.ComponentPropertyName = FName(TEXT("StaticMesh"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
PRAGMA_ENABLE_OPTIMIZATION
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_0(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 53);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
	b0l__K2Node_DynamicCast_AsDebug_State__pf = Cast<ADebugState_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsDebug_State__pf != nullptr);;
	APlayerController*  __Local__13 = ((APlayerController*)nullptr);
	b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf = Cast<APlayerC_Regular_C__pf4061722237>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_State__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_State__pf->bpv__PlayerCx2xRef__pfTT) : (__Local__13)));
	b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf != nullptr);;
	bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
	b0l__K2Node_DynamicCast_AsDebug_Mode__pf = Cast<ADebugMode_C__pf4162722864>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsDebug_Mode__pf != nullptr);;
	if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Mode__pf))
	{
		b0l__K2Node_DynamicCast_AsDebug_Mode__pf->bpf__ShipxDestroyed__pfT(b0l__K2Node_DynamicCast_AsPlayer_C_Regular__pf);
	}
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 55);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__MissleCount__pf, 4);
	if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__Server_FireWeapon__pf(false);
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 50);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Ship Destoryed.")), true, true, FLinearColor(0.098297,0.000000,1.000000,1.000000), 2.000000);
	K2_DestroyActor();
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 46:
			{
				__CurrentState = 47;
				break;
			}
		case 47:
			{
				b0l__K2Node_DynamicCast_AsAsteroid__pf = Cast<AAsteroid_C__pf2772898577>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsAsteroid__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = 49;
					break;
				}
			}
		case 48:
			{
				bpf__DestoryxShip__pfT();
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				b0l__K2Node_DynamicCast_AsAlien__pf = Cast<AAlien_C__pf655108736>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsAlien__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 48;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsLocallyControlled_ReturnValue__pf{};
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
				bpfv__CallFunc_IsLocallyControlled_ReturnValue__pf = IsLocallyControlled();
				if (!bpfv__CallFunc_IsLocallyControlled_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 31:
			{
				__StateStack.Push(34);
				__StateStack.Push(33);
			}
		case 32:
			{
				bpf__HandleThrust__pf(b0l__K2Node_Event_DeltaSeconds__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpf__HandleRotation__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				bpf__ServerTick__pf(bpv__VelocityV__pf, bpv__WishRot__pf, bpv__Tilt__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_5(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 37);
	// optimized KCST_UnconditionalGoto
	AActor::K2_AddActorWorldOffset(b0l__K2Node_CustomEvent_Location__pf, false, /*out*/ b0l__CallFunc_K2_AddActorWorldOffset_SweepHitResult__pf, false);
	AActor::K2_AddActorWorldRotation(b0l__K2Node_CustomEvent_Rotation__pf, false, /*out*/ b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf, false);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf = AActor::K2_GetActorRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue1__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(b0l__K2Node_CustomEvent_Tilt__pf, b0l__CallFunc_BreakRotator_Pitch__pf, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_K2_SetActorRotation_ReturnValue__pf = AActor::K2_SetActorRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false);
	bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	bpf__ClientReplicate__pf(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf);
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				__CurrentState = 5;
				break;
			}
		case 5:
			{
				b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputActionEvent_Key1__pf;
			}
		case 6:
			{
				bpv__acceleratex__pfzy = false;
			}
		case 7:
			{
				bpf__ServerToggleThrust__pf(bpv__acceleratex__pfzy);
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				__CurrentState = 9;
				break;
			}
		case 9:
			{
				b0l__Temp_struct_Variable1__pf = b0l__K2Node_InputActionEvent_Key__pf;
			}
		case 10:
			{
				bpv__acceleratex__pfzy = true;
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_K2_SetActorLocationAndRotation_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 44);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_SetActorLocationAndRotation_ReturnValue__pf = AActor::K2_SetActorLocationAndRotation(b0l__K2Node_CustomEvent_NewLocation__pf, b0l__K2Node_CustomEvent_NewRotation__pf, false, /*out*/ b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf, false);
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 42);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key3__pf;
	// optimized KCST_UnconditionalGoto
	bpv__Rotatex__pfzy = E__SRotate__pf::NewEnumerator2;
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 36);
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 35);
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_11(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_GetSocketTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABP_Projectile_C__pf3227778944* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpfv__CallFunc_GetSocketTransform_ReturnValue__pf = bpv__StaticMesh__pf->GetSocketTransform(FName(TEXT("Barrel")), ERelativeTransformSpace::RTS_World);
	}
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_Projectile_C__pf3227778944::StaticClass(), bpfv__CallFunc_GetSocketTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
	UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Instigator")), this);
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpfv__CallFunc_GetSocketTransform_ReturnValue__pf = bpv__StaticMesh__pf->GetSocketTransform(FName(TEXT("Barrel")), ERelativeTransformSpace::RTS_World);
	}
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_Projectile_C__pf3227778944>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_GetSocketTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key5__pf;
	// optimized KCST_UnconditionalGoto
	bpv__Rotatex__pfzy = E__SRotate__pf::NewEnumerator2;
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key4__pf;
	// optimized KCST_UnconditionalGoto
	bpv__Rotatex__pfzy = E__SRotate__pf::NewEnumerator0;
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 22);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Thruster__pf))
	{
		bpv__Thruster__pf->SetActive(b0l__K2Node_CustomEvent_accelerate___pf, true);
	}
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Thruster__pf))
	{
		bpv__Thruster__pf->SetActive(b0l__K2Node_CustomEvent_accelerate_1__pf, true);
	}
	bpf__ClienToggleThrust__pf(b0l__K2Node_CustomEvent_accelerate_1__pf);
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ExecuteUbergraph_Ship__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key2__pf;
	bpv__Rotatex__pfzy = E__SRotate__pf::NewEnumerator1;
	return; //KCST_EndOfThread
}
void AShip_C__pf3227778944::bpf__ReceiveDestroyed__pf()
{
	bpf__ExecuteUbergraph_Ship__pf_0(53);
}
void AShip_C__pf3227778944::bpf__DestoryxShip__pfT_Implementation()
{
	bpf__ExecuteUbergraph_Ship__pf_2(50);
}
void AShip_C__pf3227778944::bpf__BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__14;
	T__Local__14& bpp__SweepResult__pf = *const_cast<T__Local__14 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_Ship__pf_3(46);
}
void AShip_C__pf3227778944::bpf__ClientReplicate__pf_Implementation(FVector bpp__NewLocation__pf, FRotator bpp__NewRotation__pf)
{
	b0l__K2Node_CustomEvent_NewLocation__pf = bpp__NewLocation__pf;
	b0l__K2Node_CustomEvent_NewRotation__pf = bpp__NewRotation__pf;
	bpf__ExecuteUbergraph_Ship__pf_7(44);
}
void AShip_C__pf3227778944::bpf__ServerTick__pf_Implementation(FVector bpp__Location__pf, FRotator bpp__Rotation__pf, float bpp__Tilt__pf)
{
	b0l__K2Node_CustomEvent_Location__pf = bpp__Location__pf;
	b0l__K2Node_CustomEvent_Rotation__pf = bpp__Rotation__pf;
	b0l__K2Node_CustomEvent_Tilt__pf = bpp__Tilt__pf;
	bpf__ExecuteUbergraph_Ship__pf_5(37);
}
void AShip_C__pf3227778944::bpf__Shield__pf()
{
	bpf__ExecuteUbergraph_Ship__pf_9(36);
}
void AShip_C__pf3227778944::bpf__HyperWarp__pf()
{
	bpf__ExecuteUbergraph_Ship__pf_10(35);
}
void AShip_C__pf3227778944::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_Ship__pf_4(29);
}
void AShip_C__pf3227778944::bpf__ClienToggleThrust__pf_Implementation(bool bpp__acceleratex__pfzy)
{
	b0l__K2Node_CustomEvent_accelerate___pf = bpp__acceleratex__pfzy;
	bpf__ExecuteUbergraph_Ship__pf_14(22);
}
void AShip_C__pf3227778944::bpf__ServerToggleThrust__pf_Implementation(bool bpp__acceleratex__pfzy)
{
	b0l__K2Node_CustomEvent_accelerate_1__pf = bpp__acceleratex__pfzy;
	bpf__ExecuteUbergraph_Ship__pf_15(19);
}
void AShip_C__pf3227778944::bpf__Server_FireWeapon__pf_Implementation(bool bpp__IsFiring__pf)
{
	b0l__K2Node_CustomEvent_IsFiring__pf = bpp__IsFiring__pf;
	bpf__ExecuteUbergraph_Ship__pf_11(11);
}
void AShip_C__pf3227778944::bpf__InpActEvt_Thrust_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Ship__pf_6(8);
}
void AShip_C__pf3227778944::bpf__InpActEvt_Thrust_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Ship__pf_6(4);
}
void AShip_C__pf3227778944::bpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_9__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Ship__pf_16(1);
}
void AShip_C__pf3227778944::bpf__InpActEvt_RotatexLeft_K2Node_InputActionEvent_10__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Ship__pf_8(42);
}
void AShip_C__pf3227778944::bpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_11__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Ship__pf_13(25);
}
void AShip_C__pf3227778944::bpf__InpActEvt_RotatexRight_K2Node_InputActionEvent_12__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Ship__pf_12(27);
}
void AShip_C__pf3227778944::bpf__InpActEvt_FirexWeapon_K2Node_InputActionEvent_13__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_Ship__pf_1(55);
}
void AShip_C__pf3227778944::bpf__UserConstructionScript__pf()
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	if(::IsValid(bpv__StaticMesh__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__StaticMesh__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AShip_C__pf3227778944::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	}
	bpv__ShipMat_Inst__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	if(::IsValid(bpv__ShipMat_Inst__pf))
	{
		bpv__ShipMat_Inst__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__ShipColor__pf);
	}
}
void AShip_C__pf3227778944::bpf__HandleThrust__pf(float bpp__DeltaSeconds__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_ClampVectorSize_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue1__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_VEase_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__acceleratex__pfzy)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, bpv__ThurstForce_Constant__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__VelocityV__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__MaxSpeed__pf, -1.000000);
				bpfv__CallFunc_ClampVectorSize_ReturnValue__pf = UKismetMathLibrary::ClampVectorSize(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__MaxSpeed__pf);
				bpv__VelocityV__pf = bpfv__CallFunc_ClampVectorSize_ReturnValue__pf;
			}
		case 3:
			{
				bpv__Degredation_Factor__pf = 0.000000;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__DeltaSeconds__pf, bpv__Degregation_Constant__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue1__pf, bpv__Degredation_Factor__pf);
				bpv__Degredation_Factor__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue1__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__DeltaSeconds__pf, bpv__Degregation_Constant__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue1__pf, bpv__Degredation_Factor__pf);
				bpfv__CallFunc_VEase_ReturnValue__pf = UKismetMathLibrary::VEase(bpv__VelocityV__pf, FVector(0.000000,0.000000,0.000000), bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, EEasingFunc::Linear, 2.000000, 2);
				bpv__VelocityV__pf = bpfv__CallFunc_VEase_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AShip_C__pf3227778944::bpf__HandleRotation__pf()
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue1__pf(EForceInit::ForceInit);
	bool bpfv__K2Node_SwitchEnum_CmpSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Rotatex__pfzy), static_cast<uint8>(E__SRotate__pf::NewEnumerator0));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 2;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Rotatex__pfzy), static_cast<uint8>(E__SRotate__pf::NewEnumerator1));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				bpfv__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(bpv__Rotatex__pfzy), static_cast<uint8>(E__SRotate__pf::NewEnumerator2));
				if (!bpfv__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 6;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__Rotation_Constant__pf);
				bpv__WishRot__pf = bpfv__CallFunc_MakeRotator_ReturnValue__pf;
			}
		case 3:
			{
				bpv__Tilt__pf = 20.000000;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__Rotation_Constant__pf, -1.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue1__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpv__WishRot__pf = bpfv__CallFunc_MakeRotator_ReturnValue1__pf;
			}
		case 5:
			{
				bpv__Tilt__pf = -20.000000;
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpv__WishRot__pf = FRotator(0.000000,0.000000,0.000000);
			}
		case 7:
			{
				bpv__Tilt__pf = 0.000000;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AShip_C__pf3227778944::bpf__OnRep_ShipColor__pf()
{
	if(::IsValid(bpv__ShipMat_Inst__pf))
	{
		bpv__ShipMat_Inst__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpv__ShipColor__pf);
	}
}
void AShip_C__pf3227778944::bpf__ToggleThrusters__pf()
{
	bool bpfv__CallFunc_IsActive_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(::IsValid(bpv__Thruster__pf))
				{
					bpfv__CallFunc_IsActive_ReturnValue__pf = bpv__Thruster__pf->IsActive();
				}
				if (!bpfv__CallFunc_IsActive_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				if(::IsValid(bpv__Thruster__pf))
				{
					bpv__Thruster__pf->Deactivate();
				}
			}
		case 3:
			{
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				if(::IsValid(bpv__Thruster__pf))
				{
					bpv__Thruster__pf->Activate(true);
				}
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AShip_C__pf3227778944::bpf__OnRep_acceleratex__pfzy()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void AShip_C__pf3227778944::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Ship/Mesh/TR-3B_III.TR-3B_III 
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Ship/Material/ShipMat.ShipMat 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/_Imported/ParagonHowitzer/FX/Particles/Abilities/Mobility/FX/P_HB_Mobility_TravelMode_FootJets.P_HB_Mobility_TravelMode_FootJets 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void AShip_C__pf3227778944::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{59, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugState.DebugState_C 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/PlayerC_Regular.PlayerC_Regular_C 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Ship/BP_Projectile.BP_Projectile_C 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Enemy/Alien.Alien_C 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Obstacles/Asteroid.Asteroid_C 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugMode.DebugMode_C 
		{117, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/Ship/SRotate.SRotate 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__AShip_C__pf3227778944
{
	FRegisterHelper__AShip_C__pf3227778944()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Ship/Ship"), &AShip_C__pf3227778944::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AShip_C__pf3227778944 Instance;
};
FRegisterHelper__AShip_C__pf3227778944 FRegisterHelper__AShip_C__pf3227778944::Instance;
void AShip_C__pf3227778944::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(AShip_C__pf3227778944, bpv__ShipColor__pf, FName(TEXT("ShipColor")));
	DOREPLIFETIME_DIFFNAMES(AShip_C__pf3227778944, bpv__MissleCount__pf, FName(TEXT("MissleCount")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
