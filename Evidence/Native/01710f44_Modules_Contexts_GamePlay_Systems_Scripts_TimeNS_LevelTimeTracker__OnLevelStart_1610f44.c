/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$OnLevelStart
void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__OnLevelStart (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$OnLevelStart
   void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__OnLevelStart
   (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__OnLevelStart_1610f44
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c2446d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057b5330);
    FUN_012d0dc8(PTR_DAT_05790438);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2446d = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  puVar3 = PTR_DAT_057b8520;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar2 = PTR_DAT_05790438;
  puVar1 = PTR_DAT_0578b048;
  uVar5 = System_DateTime__get_UtcNow_2100638(0);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar7 != 0) &&
     (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_057b5330,0), lVar6 != 0)) {
    if ((bRam0000000005c3aa34 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048,lVar7,0);
      bRam0000000005c3aa34 = 1;
    }
    puVar1 = PTR_DAT_0578b048;
    lVar10 = *(long *)(lVar6 + 0x20);
    while ((plVar8 = (long *)System_Delegate__Combine_23e3964(lVar10,lVar7,0), plVar8 == (long *)0x0
           || (*plVar8 == *(long *)puVar1))) {
      lVar9 = FUN_01351224((long *)(lVar6 + 0x20),plVar8,lVar10);
      bVar4 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar4) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

