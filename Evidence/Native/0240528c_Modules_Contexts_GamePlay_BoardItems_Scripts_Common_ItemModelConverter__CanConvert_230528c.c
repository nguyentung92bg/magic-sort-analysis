/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ItemModelConverter$$CanConvert
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter__CanConvert (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter_o* __this, System_Type_o* objectType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ItemModelConverter$$CanConvert
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter__CanConvert
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter_o* __this, System_Type_o*
   objectType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter__CanConvert_230528c
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_0578a3a8;
  puVar1 = PTR_DAT_057649a0;
  if ((bRam0000000005c2a63e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057649a0);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c2a63e = 1;
  }
  uVar4 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  plVar3 = (long *)System_Type__GetTypeFromHandle_2690398(uVar4,0);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02405318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x408))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x410));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

