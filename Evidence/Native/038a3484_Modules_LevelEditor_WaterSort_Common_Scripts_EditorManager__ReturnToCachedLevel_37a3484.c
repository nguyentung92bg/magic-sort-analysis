/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$ReturnToCachedLevel
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__ReturnToCachedLevel (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$ReturnToCachedLevel
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__ReturnToCachedLevel
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__ReturnToCachedLevel_37a3484
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_057d0c00;
  if ((bRam0000000005c33e1c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0c00);
    bRam0000000005c33e1c = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor_37a6b70();
    plVar5 = (long *)(param_1 + 0x48);
    *plVar5 = lVar3;
    FUN_012d0d74(plVar5,lVar3);
    if ((*(long *)(param_1 + 0x60) != 0) && (*plVar5 != 0)) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GenerateBottles_37a8e98
                (*plVar5,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),0);
      puVar1 = PTR_DAT_057b8520;
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        if ((bRam0000000005c33e0a & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057fe9c8);
          FUN_012d0dc8(PTR_DAT_057b8520);
          bRam0000000005c33e0a = 1;
        }
        puVar2 = PTR_DAT_057fe9c8;
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
                  (lVar3);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
          Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__UpdateColorAmounts_37a3fc4
                    (lVar3);
          *(undefined4 *)(lVar3 + 0x2c) = 0;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

