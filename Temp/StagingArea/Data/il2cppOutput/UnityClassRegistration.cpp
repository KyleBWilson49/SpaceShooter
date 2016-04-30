struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

}

void RegisterAllClasses()
{
	//Total: 61 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//10. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//11. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//12. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//13. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//14. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//15. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//16. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//17. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//18. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//19. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//20. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//21. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//22. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//23. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//24. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//25. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//26. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//27. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//28. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//29. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//30. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//31. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//32. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//33. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//34. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//35. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//36. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//37. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//38. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//39. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//40. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//41. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//42. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//43. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//44. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//45. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//46. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//47. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//48. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//49. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//50. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//51. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//52. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//53. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//54. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//55. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//56. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//57. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//58. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//59. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//60. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
