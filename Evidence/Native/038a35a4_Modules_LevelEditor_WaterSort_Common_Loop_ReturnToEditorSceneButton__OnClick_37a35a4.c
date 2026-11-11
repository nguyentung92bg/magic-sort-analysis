/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Loop.ReturnToEditorSceneButton$$OnClick
void Modules_LevelEditor_WaterSort_Common_Loop_ReturnToEditorSceneButton__OnClick (Modules_LevelEditor_WaterSort_Common_Loop_ReturnToEditorSceneButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Loop.ReturnToEditorSceneButton$$OnClick
   void Modules_LevelEditor_WaterSort_Common_Loop_ReturnToEditorSceneButton__OnClick
   (Modules_LevelEditor_WaterSort_Common_Loop_ReturnToEditorSceneButton_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Loop_ReturnToEditorSceneButton__OnClick_37a35a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
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
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33e08 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789328);
    FUN_012d0dc8(PTR_DAT_057bdb30);
    FUN_012d0dc8(PTR_DAT_057f4dd8);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    bRam0000000005c33e08 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_057e8f70), plVar4 != (long *)0x0)) {
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 10) * 0x10 + 0x138);
          goto LAB_038a3698;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0581aae8,10);
LAB_038a3698:
    lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
      uVar7 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsBoardStopped_1610628
                        (*(long *)(lVar3 + 0x10),0);
      puVar2 = PTR_DAT_057bdb30;
      puVar1 = PTR_DAT_05789328;
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_057f4dd8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Modules_Infrastructure_Common_Scripts_CommandNS_CommandPool__GetCommand_object__27202f8
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
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        System_Collections_Generic_Queue_object___Enqueue_3368ec8
                  (**(long **)(lVar3 + 0xb8),uVar6,*(undefined8 *)PTR_DAT_057d7510);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

