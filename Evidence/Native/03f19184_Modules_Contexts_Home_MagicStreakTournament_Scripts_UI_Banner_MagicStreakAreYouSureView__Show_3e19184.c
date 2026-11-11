/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakAreYouSureView$$Show
System_Threading_Tasks_Task_bool__o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__Show (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakAreYouSureView$$Show
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__Show
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakAreYouSureView__Show_3e19184
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_05766da0;
                    /* try { // try from 03f191a4 to 040191bf has its CatchHandler @ 03f19434 */
  if ((bRam0000000005c380d1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b428);
    FUN_012d0dc8(PTR_DAT_05817580);
    FUN_012d0dc8(PTR_DAT_057f5ad8);
                    /* try { // try from 03f191d0 to 04019203 has its CatchHandler @ 03f1943c */
    FUN_012d0dc8(PTR_DAT_05766da0);
    bRam0000000005c380d1 = 1;
  }
  puVar4 = PTR_DAT_05817580;
  puVar3 = PTR_DAT_057f5ad8;
  puVar2 = PTR_DAT_0577b428;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 03f19214 to 0401921b has its CatchHandler @ 03f19428 */
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Create_1aeddc8
            (&uStack_98,*(undefined8 *)puVar2);
                    /* try { // try from 03f19230 to 0401926b has its CatchHandler @ 03f19438 */
  uVar5 = (ulong)&uStack_60 | 8;
  uStack_70 = uStack_88;
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_50 = uStack_90;
  uStack_58 = uStack_98;
  uStack_48 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_40 = param_1;
  FUN_012d0d74(&uStack_40,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Start_MagicStreakAreYouSureView__Show_d__4__3c6103c
            (uVar5,&uStack_60,*(undefined8 *)puVar4);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___get_Task_1aedddc
            (uVar5,*(undefined8 *)puVar3);
                    /* try { // try from 03f19290 to 04019293 has its CatchHandler @ 03f19424 */
  return;
}

