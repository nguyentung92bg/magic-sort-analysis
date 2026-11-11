/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.InformTextView$$Awake
void Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView__Awake (Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.InformTextView$$Awake
   void Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView__Awake
   (Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView_o* __this, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_InformTextView__Awake_379da6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c33dc1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030d8);
    FUN_012d0dc8(PTR_DAT_057aed50);
    FUN_012d0dc8(PTR_DAT_057afe68);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058120d8);
    bRam0000000005c33dc1 = 1;
  }
  puVar3 = PTR_DAT_058030d8;
  puVar1 = PTR_DAT_057afe68;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar5 != 0) &&
     (System_Action_object____ctor_1647468(lVar5,param_1,*(undefined8 *)PTR_DAT_057aed50,0),
     lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_058120d8 + 0x20) + 0xc0) + 8) + 8))
              (lVar4,lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

