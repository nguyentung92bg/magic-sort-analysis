/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyInLevelPlayButton$$Awake
void Modules_Contexts_Home_Daily_Scripts_UI_DailyInLevelPlayButton__Awake (Modules_Contexts_Home_Daily_Scripts_UI_DailyInLevelPlayButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyInLevelPlayButton$$Awake
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyInLevelPlayButton__Awake
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyInLevelPlayButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyInLevelPlayButton__Awake_3e1fe94(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c380fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0577ec70);
    bRam0000000005c380fd = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_0577ec70,0), lVar3 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar3,lVar2,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x30) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

