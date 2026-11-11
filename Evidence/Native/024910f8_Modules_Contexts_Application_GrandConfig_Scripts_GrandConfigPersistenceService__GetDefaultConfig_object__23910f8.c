/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$GetDefaultConfig<object>
Il2CppObject* Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultConfig_object_ (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this, System_String_o* fileName, Il2CppObject* defaultValue, const MethodInfo_23910F8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$GetDefaultConfig<object>
   Il2CppObject*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultConfig_object_
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this,
   System_String_o* fileName, Il2CppObject* defaultValue, const MethodInfo_23910F8* method); */

undefined8
Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultConfig_object__23910f8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_057d1cc8;
  if ((bRam0000000005c2aac9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057c3478);
    FUN_012d0dc8(PTR_DAT_057d1cc8);
    bRam0000000005c2aac9 = 1;
  }
  uVar3 = System_String__Concat_1ec3580(*(undefined8 *)puVar2,param_2,0);
  plVar4 = (long *)UnityEngine_Resources__Load_4092924(uVar3,0);
  puVar2 = PTR_DAT_058031d8;
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057c3478 + 300);
    if ((bVar1 <= *(byte *)(*plVar4 + 300)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057c3478)) {
      if (plVar4 != (long *)0x0) {
        uVar3 = UnityEngine_TextAsset__get_text_408c690(plVar4,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x02491200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(long **)(param_4 + 0x38) + 8))(uVar3);
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return param_3;
}

