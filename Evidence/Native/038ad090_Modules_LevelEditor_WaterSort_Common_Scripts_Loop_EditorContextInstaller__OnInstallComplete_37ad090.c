/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Loop.EditorContextInstaller$$OnInstallComplete
void Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller__OnInstallComplete (Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.Loop.EditorContextInstaller$$OnInstallComplete
   void Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller__OnInstallComplete
   (Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller__OnInstallComplete_37ad090
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
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
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33e38 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789328);
    FUN_012d0dc8(PTR_DAT_057b3dd0);
    FUN_012d0dc8(PTR_DAT_057f4dd8);
    FUN_012d0dc8(PTR_DAT_05793328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c33e38 = 1;
  }
  lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_05793328);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar4 = Modules_Infrastructure_Common_Scripts_CameraController__GetCamera_40e242c
                          (*(long *)(param_1 + 0x48),0), puVar3 = PTR_DAT_057f4dd8,
       puVar2 = PTR_DAT_057b3dd0, puVar1 = PTR_DAT_05789328, lVar5 != 0)) {
      *(undefined8 *)(lVar5 + 0x30) = uVar4;
      FUN_012d0d74((undefined8 *)(lVar5 + 0x30),uVar4);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = Modules_Infrastructure_Common_Scripts_CommandNS_CommandPool__GetCommand_object__27202f8
                        (*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      puVar1 = PTR_DAT_05789328;
      if ((bRam0000000005c3aa9b & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05789328,0);
        FUN_012d0dc8(PTR_DAT_057d7510);
        bRam0000000005c3aa9b = 1;
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar5 = *(long *)puVar1;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        System_Collections_Generic_Queue_object___Enqueue_3368ec8
                  (**(long **)(lVar5 + 0xb8),uVar4,*(undefined8 *)PTR_DAT_057d7510);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

