/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelObjectConverter$$CanConvert
bool Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__CanConvert (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter_o* __this, System_Type_o* objectType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelObjectConverter$$CanConvert
   bool Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__CanConvert
   (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter_o* __this,
   System_Type_o* objectType, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__CanConvert_1f1c33c
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_057ebb48;
  puVar1 = PTR_DAT_0578a3a8;
  if ((bRam0000000005c2865a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ebb48);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c2865a = 1;
  }
  uVar4 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = System_Type__GetTypeFromHandle_2690398(uVar4,0);
  return param_2 == lVar3;
}

