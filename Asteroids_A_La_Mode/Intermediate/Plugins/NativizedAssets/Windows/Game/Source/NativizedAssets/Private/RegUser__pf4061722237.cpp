#include "NativizedAssets.h"
#include "RegUser__pf4061722237.h"
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
#include "DebugManager__pf4162722864.h"
#include "UserData__pf4061722237.h"
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
#include "GameStart__pf3166771619.h"
#include "InGameHud__pf515974370.h"
#include "DStates__pf4162722864.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "PState__pf4061722237.h"
#include "GameOver__pf3166771619.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "Spawn_Volume__pf2174024837.h"
#include "Ship__pf668171628.h"
#include "1979Rounds__pf2955639682.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "LevelStart_Widget__pf515974370.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
ARegUser_C__pf4061722237::ARegUser_C__pf4061722237(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ARegUser_C__pf4061722237::StaticClass() == GetClass()))
	{
		ARegUser_C__pf4061722237::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<USceneComponent>(this->GetDefaultSubobjectByName(TEXT("TransformComponent0")), ECastCheckedType::NullAllowed);
	if(__Local__0)
	{
		// --- Default subobject 'TransformComponent0' //
		// --- END default subobject 'TransformComponent0' //
	}
	bpv__LevelxStartxWidget__pfTT = nullptr;
	bpv__WidgetxRef__pfT = nullptr;
	bpv__CameraxRef__pfT = nullptr;
	InputYawScale = 2.500000f;
	InputPitchScale = -1.750000f;
	InputRollScale = 1.000000f;
	ForceFeedbackScale = 1.000000f;
	auto& __Local__1 = (*(AccessPrivateProperty<USceneComponent*>((this), AController::__PPO__TransformComponent() )));
	__Local__1 = __Local__0;
}
PRAGMA_ENABLE_OPTIMIZATION
void ARegUser_C__pf4061722237::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void ARegUser_C__pf4061722237::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ADebugMData_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UDebugManager_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AUserData_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ADebugMode_C__pf4162722864::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UMainScreen_C__pf1232574660::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UGameStart_C__pf3166771619::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ULevelStart_Widget_C__pf515974370::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__2 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__2);
	auto __Local__3 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__3);
	__Local__3->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__3->InputActionDelegateBindings.AddUninitialized(3);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__3->InputActionDelegateBindings.GetData(), 3);
	auto& __Local__4 = __Local__3->InputActionDelegateBindings[0];
	__Local__4.InputActionName = FName(TEXT("Use shitty cam"));
	__Local__4.FunctionNameToBind = FName(TEXT("InpActEvt_Use shitty cam_K2Node_InputActionEvent_5"));
	auto& __Local__5 = __Local__3->InputActionDelegateBindings[1];
	__Local__5.InputActionName = FName(TEXT("Player Start"));
	__Local__5.FunctionNameToBind = FName(TEXT("InpActEvt_Player Start_K2Node_InputActionEvent_4"));
	auto& __Local__6 = __Local__3->InputActionDelegateBindings[2];
	__Local__6.InputActionName = FName(TEXT("Debug - Go to main screen"));
	__Local__6.FunctionNameToBind = FName(TEXT("InpActEvt_Debug - Go to main screen_K2Node_InputActionEvent_3"));
}
PRAGMA_ENABLE_OPTIMIZATION
void ARegUser_C__pf4061722237::bpf__ExecuteUbergraph_RegUser__pf_0(int32 bpp__EntryPoint__pf)
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue1__pf{};
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue4__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue1__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 31:
			{
				__CurrentState = 32;
				break;
			}
		case 32:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Spawn Player")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
			}
		case 33:
			{
				__StateStack.Push(35);
			}
		case 34:
			{
				b0l__K2Node_DynamicCast_AsUser_Data1__pf = Cast<AUserData_C__pf4061722237>(PlayerState);
				b0l__K2Node_DynamicCast_bSuccess10__pf = (b0l__K2Node_DynamicCast_AsUser_Data1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess10__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue1__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsDebug_Mode1__pf = Cast<ADebugMode_C__pf4162722864>(bpfv__CallFunc_GetGameMode_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsDebug_Mode1__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 36:
			{
				bpfv__CallFunc_GetGameState_ReturnValue4__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData4__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue4__pf);
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsDebug_MData4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess8__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 37:
			{
				FName  __Local__7 = FName();
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue1__pf = UKismetMathLibrary::EqualEqual_NameName(((::IsValid(b0l__K2Node_DynamicCast_AsUser_Data1__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Data1__pf->bpv__PlyrxName__pfT) : (__Local__7)), FName(TEXT("Player One")));
				if (!bpfv__CallFunc_EqualEqual_NameName_ReturnValue1__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 38:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Mode1__pf))
				{
					APlayerStart*  __Local__8 = ((APlayerStart*)nullptr);
					b0l__K2Node_DynamicCast_AsDebug_Mode1__pf->bpf__SpawnxShip__pfT(this, ((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData4__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData4__pf->bpv__PlayerStartx1xRef__pfTT) : (__Local__8)), FLinearColor(1.000000,0.000000,0.014030,1.000000));
				}
			}
		case 39:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 spawned.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
			}
		case 40:
			{
				ACameraActor*  __Local__9 = ((ACameraActor*)nullptr);
				SetViewTargetWithBlend(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData4__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData4__pf->bpv__CamxOne__pfT) : (__Local__9)), 0.000000, EViewTargetBlendFunction::VTBlend_Linear, 0.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Mode1__pf))
				{
					APlayerStart*  __Local__10 = ((APlayerStart*)nullptr);
					b0l__K2Node_DynamicCast_AsDebug_Mode1__pf->bpf__SpawnxShip__pfT(this, ((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData4__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData4__pf->bpv__PlayerStartx2xRef__pfTT) : (__Local__10)), FLinearColor(0.000000,0.666948,1.000000,1.000000));
				}
			}
		case 42:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 spawned.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
				__CurrentState = 40;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ARegUser_C__pf4061722237::bpf__ExecuteUbergraph_RegUser__pf_1(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 47);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameState_ReturnValue__pf = UGameplayStatics::GetGameState(this);
	b0l__K2Node_DynamicCast_AsDebug_MData__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsDebug_MData__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData__pf))
	{
		b0l__K2Node_DynamicCast_AsDebug_MData__pf->bpf__Player2IsReady__pf();
	}
	return; //KCST_EndOfThread
}
void ARegUser_C__pf4061722237::bpf__ExecuteUbergraph_RegUser__pf_2(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 23:
			{
				__CurrentState = 24;
				break;
			}
		case 24:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("BeginPlay called.")), true, true, FLinearColor(1.000000,0.000000,0.874856,1.000000), 1000.000000);
			}
		case 25:
			{
				bpfv__CallFunc_GetGameState_ReturnValue3__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData3__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsDebug_MData3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				__StateStack.Push(30);
			}
		case 27:
			{
				E__DStates__pf  __Local__11 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__EDebugState__pf) : (__Local__11))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				E__DStates__pf  __Local__12 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__EDebugState__pf) : (__Local__12))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__13 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__EDebugState__pf) : (__Local__13))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__14 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__EDebugState__pf) : (__Local__14))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__15 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__EDebugState__pf) : (__Local__15))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				E__DStates__pf  __Local__16 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__EDebugState__pf) : (__Local__16))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 29;
					break;
				}
				E__DStates__pf  __Local__17 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__EDebugState__pf) : (__Local__17))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = 28;
					break;
				}
				E__DStates__pf  __Local__18 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum1_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__EDebugState__pf) : (__Local__18))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum1_CmpSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				bpf__SpawnxWidget__pfT(UMainScreen_C__pf1232574660::StaticClass());
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				bpf__SpawnxWidget__pfT(UGameStart_C__pf3166771619::StaticClass());
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				ACameraActor*  __Local__19 = ((ACameraActor*)nullptr);
				SetViewTargetWithBlend(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData3__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData3__pf->bpv__CamxOne__pfT) : (__Local__19)), 0.000000, EViewTargetBlendFunction::VTBlend_Linear, 0.000000, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ARegUser_C__pf4061722237::bpf__ExecuteUbergraph_RegUser__pf_3(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue1__pf{};
	check(bpp__EntryPoint__pf == 45);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Shitty Cam Pressed.")), true, true, FLinearColor(1.000000,0.000000,0.816515,1.000000), 1000.000000);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameState_ReturnValue1__pf = UGameplayStatics::GetGameState(this);
	b0l__K2Node_DynamicCast_AsDebug_MData1__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue1__pf);
	b0l__K2Node_DynamicCast_bSuccess1__pf = (b0l__K2Node_DynamicCast_AsDebug_MData1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess1__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	ACameraActor*  __Local__20 = ((ACameraActor*)nullptr);
	SetViewTargetWithBlend(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData1__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData1__pf->bpv__Shittyxcam__pfT) : (__Local__20)), 0.000000, EViewTargetBlendFunction::VTBlend_Linear, 0.000000, false);
	return; //KCST_EndOfThread
}
void ARegUser_C__pf4061722237::bpf__ExecuteUbergraph_RegUser__pf_4(int32 bpp__EntryPoint__pf)
{
	AGameStateBase* bpfv__CallFunc_GetGameState_ReturnValue2__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue1__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 7:
			{
				bpfv__CallFunc_GetGameState_ReturnValue2__pf = UGameplayStatics::GetGameState(this);
				b0l__K2Node_DynamicCast_AsDebug_MData2__pf = Cast<ADebugMData_C__pf4162722864>(bpfv__CallFunc_GetGameState_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsDebug_MData2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				E__DStates__pf  __Local__21 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__EDebugState__pf) : (__Local__21))), static_cast<uint8>(E__DStates__pf::NewEnumerator0));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
				E__DStates__pf  __Local__22 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__EDebugState__pf) : (__Local__22))), static_cast<uint8>(E__DStates__pf::NewEnumerator1));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 9;
					break;
				}
				E__DStates__pf  __Local__23 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__EDebugState__pf) : (__Local__23))), static_cast<uint8>(E__DStates__pf::NewEnumerator2));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__24 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__EDebugState__pf) : (__Local__24))), static_cast<uint8>(E__DStates__pf::NewEnumerator3));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
				E__DStates__pf  __Local__25 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__EDebugState__pf) : (__Local__25))), static_cast<uint8>(E__DStates__pf::NewEnumerator5));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__26 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__EDebugState__pf) : (__Local__26))), static_cast<uint8>(E__DStates__pf::NewEnumerator4));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 16;
					break;
				}
				E__DStates__pf  __Local__27 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__EDebugState__pf) : (__Local__27))), static_cast<uint8>(E__DStates__pf::NewEnumerator6));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				E__DStates__pf  __Local__28 = E__DStates__pf::NewEnumerator0;
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(static_cast<uint8>(((::IsValid(b0l__K2Node_DynamicCast_AsDebug_MData2__pf)) ? (b0l__K2Node_DynamicCast_AsDebug_MData2__pf->bpv__EDebugState__pf) : (__Local__28))), static_cast<uint8>(E__DStates__pf::NewEnumerator7));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				b0l__K2Node_DynamicCast_AsUser_Data__pf = Cast<AUserData_C__pf4061722237>(PlayerState);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsUser_Data__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 10:
			{
				FName  __Local__29 = FName();
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(((::IsValid(b0l__K2Node_DynamicCast_AsUser_Data__pf)) ? (b0l__K2Node_DynamicCast_AsUser_Data__pf->bpv__PlyrxName__pfT) : (__Local__29)), FName(TEXT("Player One")));
				if (!bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 11:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 1 pressed start.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 12:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsDebug_Mode__pf = Cast<ADebugMode_C__pf4162722864>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsDebug_Mode__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Mode__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_Mode__pf->bpv__1979xGameStarted__pfT = true;
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player 2 pressed start.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 14:
			{
				bpf__InformServerP2isReady__pf();
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue1__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsDebug_Manager1__pf = Cast<UDebugManager_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess9__pf = (b0l__K2Node_DynamicCast_AsDebug_Manager1__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Manager1__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_Manager1__pf->bpf__SetxDebugMxtoxArcade1979__pfTTT();
				}
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_GetGameInstance_ReturnValue1__pf = UGameplayStatics::GetGameInstance(this);
				b0l__K2Node_DynamicCast_AsDebug_Manager1__pf = Cast<UDebugManager_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue1__pf);
				b0l__K2Node_DynamicCast_bSuccess9__pf = (b0l__K2Node_DynamicCast_AsDebug_Manager1__pf != nullptr);;
				if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Manager1__pf))
				{
					b0l__K2Node_DynamicCast_AsDebug_Manager1__pf->bpf__SetxDebugMxtoxDebugMode__pfTTT();
				}
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				__CurrentState = 22;
				break;
			}
		case 22:
			{
				UKismetSystemLibrary::PrintString(this, FString(TEXT("Player start pressed.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ARegUser_C__pf4061722237::bpf__ExecuteUbergraph_RegUser__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 43);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("OnPostLogin called.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
	return; //KCST_EndOfThread
}
void ARegUser_C__pf4061722237::bpf__ExecuteUbergraph_RegUser__pf_6(int32 bpp__EntryPoint__pf)
{
	UGameInstance* bpfv__CallFunc_GetGameInstance_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Debug Cmd to Main Screen called.")), true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
	bpfv__CallFunc_GetGameInstance_ReturnValue__pf = UGameplayStatics::GetGameInstance(this);
	b0l__K2Node_DynamicCast_AsDebug_Manager__pf = Cast<UDebugManager_C__pf4162722864>(bpfv__CallFunc_GetGameInstance_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsDebug_Manager__pf != nullptr);;
	if(::IsValid(b0l__K2Node_DynamicCast_AsDebug_Manager__pf))
	{
		b0l__K2Node_DynamicCast_AsDebug_Manager__pf->bpf__LeavexGame__pfT();
	}
	return; //KCST_EndOfThread
}
void ARegUser_C__pf4061722237::bpf__ExecuteUbergraph_RegUser__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
	if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__TellxDStatexP2Ready__pfTT();
	return; //KCST_EndOfThread
}
void ARegUser_C__pf4061722237::bpf__TellxDStatexP2Ready__pfTT_Implementation()
{
	bpf__ExecuteUbergraph_RegUser__pf_1(47);
}
void ARegUser_C__pf4061722237::bpf__OnPostLogin__pf_Implementation()
{
	bpf__ExecuteUbergraph_RegUser__pf_5(43);
}
void ARegUser_C__pf4061722237::bpf__SpawnxPlayer__pfT_Implementation()
{
	bpf__ExecuteUbergraph_RegUser__pf_0(31);
}
void ARegUser_C__pf4061722237::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_RegUser__pf_2(23);
}
void ARegUser_C__pf4061722237::bpf__InformServerP2isReady__pf_Implementation()
{
	bpf__ExecuteUbergraph_RegUser__pf_7(19);
}
void ARegUser_C__pf4061722237::bpf__InpActEvt_DebugxxxGoxtoxmainxscreen_K2Node_InputActionEvent_3__pfTGTTTT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_RegUser__pf_6(20);
}
void ARegUser_C__pf4061722237::bpf__InpActEvt_PlayerxStart_K2Node_InputActionEvent_4__pfT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key1__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_RegUser__pf_4(21);
}
void ARegUser_C__pf4061722237::bpf__InpActEvt_Usexshittyxcam_K2Node_InputActionEvent_5__pfTT(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_RegUser__pf_3(45);
}
void ARegUser_C__pf4061722237::bpf__UserConstructionScript__pf()
{
}
void ARegUser_C__pf4061722237::bpf__SpawnxWidget__pfT(UClass* bpp__Widgetxtoxspawn__pfTT)
{
	UUserWidget* bpfv__CallFunc_Create_ReturnValue__pf{};
	bool bpfv__CallFunc_AddToPlayerScreen_ReturnValue__pf{};
	bpfv__CallFunc_Create_ReturnValue__pf = UWidgetBlueprintLibrary::Create(this, bpp__Widgetxtoxspawn__pfTT, this);
	bpv__WidgetxRef__pfT = bpfv__CallFunc_Create_ReturnValue__pf;
	if(::IsValid(bpv__WidgetxRef__pfT))
	{
		bpfv__CallFunc_AddToPlayerScreen_ReturnValue__pf = bpv__WidgetxRef__pfT->UUserWidget::AddToPlayerScreen(0);
	}
}
void ARegUser_C__pf4061722237::bpf__RemovexWidget__pfT(UUserWidget* bpp__WidgetxtoxRemove__pfTT)
{
	if(::IsValid(bpp__WidgetxtoxRemove__pfTT))
	{
		bpp__WidgetxtoxRemove__pfTT->RemoveFromParent();
	}
	UKismetSystemLibrary::PrintString(this, FString(TEXT("Widget removed.")), true, true, FLinearColor(1.000000,0.000000,0.595111,1.000000), 1000.000000);
}
void ARegUser_C__pf4061722237::bpf__Changexwidget__pfT(UUserWidget* bpp__WidgetFrom__pf, UClass* bpp__WidgetTo__pf)
{
	if(::IsValid(bpp__WidgetFrom__pf))
	{
		bpp__WidgetFrom__pf->RemoveFromParent();
	}
	bpf__SpawnxWidget__pfT(bpp__WidgetTo__pf);
}
PRAGMA_DISABLE_OPTIMIZATION
void ARegUser_C__pf4061722237::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void ARegUser_C__pf4061722237::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameInstance 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{59, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{5, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraActor 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugMData.DebugMData_C 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugManager.DebugManager_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/UserData.UserData_C 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Modes/Debug/DebugMode.DebugMode_C 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/MainScreen/MainScreen.MainScreen_C 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/GameStart.GameStart_C 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UserInterface/Dev_Test/LevelStart_Widget.LevelStart_Widget_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__ARegUser_C__pf4061722237
{
	FRegisterHelper__ARegUser_C__pf4061722237()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Player/RegUser"), &ARegUser_C__pf4061722237::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ARegUser_C__pf4061722237 Instance;
};
FRegisterHelper__ARegUser_C__pf4061722237 FRegisterHelper__ARegUser_C__pf4061722237::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
