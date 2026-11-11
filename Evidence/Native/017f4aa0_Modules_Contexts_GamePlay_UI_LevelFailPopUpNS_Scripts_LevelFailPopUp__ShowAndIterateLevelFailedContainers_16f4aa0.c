/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$ShowAndIterateLevelFailedContainers
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowAndIterateLevelFailedContainers (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$ShowAndIterateLevelFailedContainers
   void 
   Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowAndIterateLevelFailedContainers
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowAndIterateLevelFailedContainers_16f4aa0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_057f4dd8;
  if ((bRam0000000005c24b72 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789328);
    FUN_012d0dc8(PTR_DAT_05794c08);
    FUN_012d0dc8(PTR_DAT_057f4dd8);
    bRam0000000005c24b72 = 1;
  }
  puVar2 = PTR_DAT_05794c08;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_CommandNS_CommandPool__GetCommand_object__27202f8
                    (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_05789328;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    FUN_012d0d74();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar1 = PTR_DAT_05789328;
    if ((bRam0000000005c3aa9b & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05789328,0);
      FUN_012d0dc8(PTR_DAT_057d7510);
      bRam0000000005c3aa9b = 1;
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar4 = *(long *)puVar1;
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      System_Collections_Generic_Queue_object___Enqueue_3368ec8
                (**(long **)(lVar4 + 0xb8),lVar3,*(undefined8 *)PTR_DAT_057d7510);
      if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) != '\0') {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar1 = PTR_DAT_057c1ea0;
      if ((bRam0000000005c3aa9c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057c1ea0);
        bRam0000000005c3aa9c = 1;
      }
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_a0,0);
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      uStack_50 = uStack_98;
      uStack_58 = uStack_a0;
      uStack_40 = uStack_88;
      uStack_48 = uStack_90;
      FUN_012d0d74((ulong)&uStack_60 | 8,0);
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_CommandExecutor__ExecuteNextCommand_d__3__216c1d4
                ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

