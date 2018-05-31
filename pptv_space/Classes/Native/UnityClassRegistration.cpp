template <typename T> void RegisterClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterClass<Behaviour>(const char*);
class Animation; template <> void RegisterClass<Animation>(const char*);
class Animator; template <> void RegisterClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; template <> void RegisterClass<Terrain>(const char*);
class VideoPlayer; template <> void RegisterClass<VideoPlayer>(const char*);
class WindZone; template <> void RegisterClass<WindZone>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterClass<Collider>(const char*);
class BoxCollider; template <> void RegisterClass<BoxCollider>(const char*);
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterClass<TerrainCollider>(const char*);
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>(const char*);
class Tree; template <> void RegisterClass<Tree>(const char*);
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>(const char*);
class NamedObject; template <> void RegisterClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; 
class Material; template <> void RegisterClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>(const char*);
class Motion; template <> void RegisterClass<Motion>(const char*);
class AnimationClip; template <> void RegisterClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>(const char*);
class AnimatorController; 
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterClass<AudioClip>(const char*);
class Shader; template <> void RegisterClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>(const char*);
class TextAsset; template <> void RegisterClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>(const char*);
class Texture; template <> void RegisterClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterClass<Texture3D>(const char*);
class VideoClip; template <> void RegisterClass<VideoClip>(const char*);
class GameManager; template <> void RegisterClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterClass<InputManager>(const char*);
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>(const char*);
class MonoManager; template <> void RegisterClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>(const char*);
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterClass<ScriptMapper>(const char*);
class TagManager; template <> void RegisterClass<TagManager>(const char*);
class TimeManager; template <> void RegisterClass<TimeManager>(const char*);
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 85 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>("Core");
	//1. Unity::Component
	RegisterClass<Unity::Component>("Core");
	//2. EditorExtension
	RegisterClass<EditorExtension>("Core");
	//3. Camera
	RegisterClass<Camera>("Core");
	//4. GameObject
	RegisterClass<GameObject>("Core");
	//5. GUIElement
	RegisterClass<GUIElement>("Core");
	//6. GUILayer
	RegisterClass<GUILayer>("Core");
	//7. Light
	RegisterClass<Light>("Core");
	//8. Shader
	RegisterClass<Shader>("Core");
	//9. NamedObject
	RegisterClass<NamedObject>("Core");
	//10. Material
	RegisterClass<Material>("Core");
	//11. Sprite
	RegisterClass<Sprite>("Core");
	//12. Texture
	RegisterClass<Texture>("Core");
	//13. Texture2D
	RegisterClass<Texture2D>("Core");
	//14. Texture3D
	RegisterClass<Texture3D>("Core");
	//15. RenderTexture
	RegisterClass<RenderTexture>("Core");
	//16. Transform
	RegisterClass<Transform>("Core");
	//17. UI::RectTransform
	RegisterClass<UI::RectTransform>("Core");
	//18. QualitySettings
	RegisterClass<QualitySettings>("Core");
	//19. GlobalGameManager
	RegisterClass<GlobalGameManager>("Core");
	//20. GameManager
	RegisterClass<GameManager>("Core");
	//21. Renderer
	RegisterClass<Renderer>("Core");
	//22. RenderSettings
	RegisterClass<RenderSettings>("Core");
	//23. LevelGameManager
	RegisterClass<LevelGameManager>("Core");
	//24. Mesh
	RegisterClass<Mesh>("Core");
	//25. MonoBehaviour
	RegisterClass<MonoBehaviour>("Core");
	//26. AudioClip
	RegisterClass<AudioClip>("Audio");
	//27. SampleClip
	RegisterClass<SampleClip>("Audio");
	//28. AudioListener
	RegisterClass<AudioListener>("Audio");
	//29. AudioBehaviour
	RegisterClass<AudioBehaviour>("Audio");
	//30. AudioSource
	RegisterClass<AudioSource>("Audio");
	//31. ParticleSystem
	RegisterClass<ParticleSystem>("ParticleSystem");
	//32. Animation
	RegisterClass<Animation>("Animation");
	//33. Animator
	RegisterClass<Animator>("Animation");
	//34. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>("Animation");
	//35. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>("Animation");
	//36. Rigidbody
	RegisterClass<Rigidbody>("Physics");
	//37. Collider
	RegisterClass<Collider>("Physics");
	//38. PhysicMaterial
	RegisterClass<PhysicMaterial>("Physics");
	//39. UI::Canvas
	RegisterClass<UI::Canvas>("UI");
	//40. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>("UI");
	//41. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>("UI");
	//42. TextRendering::Font
	RegisterClass<TextRendering::Font>("TextRendering");
	//43. TerrainData
	RegisterClass<TerrainData>("Terrain");
	//44. VideoPlayer
	RegisterClass<VideoPlayer>("Video");
	//45. VideoClip
	RegisterClass<VideoClip>("Video");
	//46. MeshCollider
	RegisterClass<MeshCollider>("Physics");
	//47. MeshFilter
	RegisterClass<MeshFilter>("Core");
	//48. BoxCollider
	RegisterClass<BoxCollider>("Physics");
	//49. MeshRenderer
	RegisterClass<MeshRenderer>("Core");
	//50. PreloadData
	RegisterClass<PreloadData>("Core");
	//51. Cubemap
	RegisterClass<Cubemap>("Core");
	//52. Texture2DArray
	RegisterClass<Texture2DArray>("Core");
	//53. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>("Core");
	//54. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>("ParticleSystem");
	//55. TagManager
	RegisterClass<TagManager>("Core");
	//56. GraphicsSettings
	RegisterClass<GraphicsSettings>("Core");
	//57. DelayedCallManager
	RegisterClass<DelayedCallManager>("Core");
	//58. InputManager
	RegisterClass<InputManager>("Core");
	//59. TimeManager
	RegisterClass<TimeManager>("Core");
	//60. BuildSettings
	RegisterClass<BuildSettings>("Core");
	//61. ResourceManager
	RegisterClass<ResourceManager>("Core");
	//62. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>("Core");
	//63. MasterServerInterface
	RegisterClass<MasterServerInterface>("Core");
	//64. NetworkManager
	RegisterClass<NetworkManager>("Core");
	//65. ScriptMapper
	RegisterClass<ScriptMapper>("Core");
	//66. PhysicsManager
	RegisterClass<PhysicsManager>("Physics");
	//67. MonoManager
	RegisterClass<MonoManager>("Core");
	//68. MonoScript
	RegisterClass<MonoScript>("Core");
	//69. TextAsset
	RegisterClass<TextAsset>("Core");
	//70. AudioManager
	RegisterClass<AudioManager>("Audio");
	//71. PlayerSettings
	RegisterClass<PlayerSettings>("Core");
	//72. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>("CloudWebServices");
	//73. UnityConnectSettings
	RegisterClass<UnityConnectSettings>("UnityConnect");
	//74. Motion
	RegisterClass<Motion>("Animation");
	//75. AnimationClip
	RegisterClass<AnimationClip>("Animation");
	//76. FlareLayer
	RegisterClass<FlareLayer>("Core");
	//77. Terrain
	RegisterClass<Terrain>("Terrain");
	//78. LightmapSettings
	RegisterClass<LightmapSettings>("Core");
	//79. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>("Core");
	//80. SpriteRenderer
	RegisterClass<SpriteRenderer>("Core");
	//81. Tree
	RegisterClass<Tree>("Terrain");
	//82. WindZone
	RegisterClass<WindZone>("Wind");
	//83. TerrainCollider
	RegisterClass<TerrainCollider>("TerrainPhysics");
	//84. SphereCollider
	RegisterClass<SphereCollider>("Physics");

}
