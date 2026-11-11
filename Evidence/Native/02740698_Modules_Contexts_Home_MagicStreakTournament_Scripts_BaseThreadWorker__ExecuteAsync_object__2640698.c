/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.BaseThreadWorker$$ExecuteAsync<object>
System_Threading_Tasks_Task_T__o* Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__ExecuteAsync_object_ (Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker_o* __this, System_EventArgs_o* args, const MethodInfo_2640698* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.BaseThreadWorker$$ExecuteAsync<object>
   System_Threading_Tasks_Task_T__o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__ExecuteAsync_object_
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker_o* __this,
   System_EventArgs_o* args, const MethodInfo_2640698* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__ExecuteAsync_object__2640698
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_0131942c(lVar1);
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0274067c with catch @ 027406e0
                       try { // try from 027406e0 to 028406f7 has its CatchHandler @ 02740628 */
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(lVar1);
  }
                    /* try { // try from 027406f8 to 0284070f has its CatchHandler @ 02740784 */
  (**(code **)(**(long **)(param_3 + 0x38) + 8))(&uStack_b8);
                    /* try { // try from 02740710 to 02840773 has its CatchHandler @ 02740628 */
  uVar2 = (ulong)&uStack_80 | 8;
  uStack_90 = uStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  uStack_70 = uStack_b0;
  uStack_78 = uStack_b8;
  uStack_68 = uStack_a8;
  FUN_012d0d74(uVar2,0);
  uStack_58 = param_1;
  FUN_012d0d74(&uStack_58,param_1);
  uStack_60 = param_2;
  FUN_012d0d74(&uStack_60,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_BaseThreadWorker__ExecuteAsync_d__7_object___331d17c
            (uVar2,&uStack_80,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
                    /* try { // try from 02740774 to 02840783 has its CatchHandler @ 02740784 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
                    /* catch() { ... } // from try @ 027406f8 with catch @ 02740784
                       catch() { ... } // from try @ 02740774 with catch @ 02740784 */
                    /* try { // try from 02740788 to 0284078b has its CatchHandler @ 02740794 */
                    /* try { // try from 0274078c to 02840797 has its CatchHandler @ 02740628 */
  return;
}

