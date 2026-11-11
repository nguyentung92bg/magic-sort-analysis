/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelObjectConverter$$ReadJson
Il2CppObject* Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__ReadJson (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter_o* __this, Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelObjectConverter$$ReadJson
   Il2CppObject*
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__ReadJson
   (Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter_o* __this,
   Newtonsoft_Json_JsonReader_o* reader, System_Type_o* objectType, Il2CppObject* existingValue,
   Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObjectConverter__ReadJson_1f1c2e0
               (void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057952c8;
  if ((bRam0000000005c28659 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057952c8);
    bRam0000000005c28659 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

