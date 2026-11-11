/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Activate
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Activate (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Activate
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Activate
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Activate_37a6310(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c33e0d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057eb990);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c33e0d = 1;
  }
  puVar2 = PTR_DAT_057eb990;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    lVar3 = *(long *)(param_1 + 0x60);
    if (lVar3 != 0) {
      if (pcRam0000000005c3a310 == (code *)0x0) {
        pcRam0000000005c3a310 = (code *)FUN_012d0d84(&UNK_043edb77);
      }
                    /* WARNING: Could not recover jumptable at 0x0418d7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a310)(lVar3,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

