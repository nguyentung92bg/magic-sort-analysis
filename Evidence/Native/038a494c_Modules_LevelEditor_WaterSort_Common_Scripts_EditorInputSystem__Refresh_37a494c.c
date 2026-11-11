/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Refresh
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Refresh (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Refresh
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Refresh
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Refresh_37a494c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c33e0a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe9c8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c33e0a = 1;
  }
  puVar2 = PTR_DAT_057fe9c8;
  Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc(param_1)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__UpdateColorAmounts_37a3fc4
              (param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

