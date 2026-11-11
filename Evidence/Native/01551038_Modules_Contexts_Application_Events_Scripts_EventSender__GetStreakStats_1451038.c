/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetStreakStats
System_Collections_Generic_Dictionary_string__object__o* Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetStreakStats
   System_Collections_Generic_Dictionary_string__object__o*
   Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

long Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  
  puVar1 = PTR_DAT_057a6648;
  if ((bRam0000000005c23777 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05812600);
    FUN_012d0dc8(PTR_DAT_057c1ba0);
    FUN_012d0dc8(PTR_DAT_057a6648);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057641e8);
    FUN_012d0dc8(PTR_DAT_0578ee60);
    FUN_012d0dc8(PTR_DAT_0579cca8);
    FUN_012d0dc8(PTR_DAT_0579c3a0);
    bRam0000000005c23777 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0576aae0;
  if (lVar8 != 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
              (lVar8,*(undefined8 *)PTR_DAT_057c1ba0);
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) &&
       (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar9,*(undefined8 *)PTR_DAT_058030e0), puVar7 = PTR_DAT_05812600,
       puVar6 = PTR_DAT_057db748, puVar5 = PTR_DAT_057b4910, puVar4 = PTR_DAT_0579cca8,
       puVar3 = PTR_DAT_0579c3a0, puVar2 = PTR_DAT_0578ee60, puVar1 = PTR_DAT_057641e8, lVar9 != 0))
    {
      uVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldSendStat_41201b8
                         (lVar9,0);
      if ((uVar10 & 1) == 0) {
        auStack_54[0] = 0;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,auStack_54);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar8,*(undefined8 *)puVar2,uVar11,*(undefined8 *)puVar7);
        uStack_58 = 0xffffffff;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_58);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar8,*(undefined8 *)puVar1,uVar11,*(undefined8 *)puVar7);
        uStack_5c = 0xffffffff;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_5c);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar8,*(undefined8 *)puVar3,uVar11,*(undefined8 *)puVar7);
        uStack_60 = 0xffffffff;
      }
      else {
        auStack_54[0] = 1;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,auStack_54);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar8,*(undefined8 *)puVar2,uVar11,*(undefined8 *)puVar7);
        uStack_58 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStreakCount_41201d4
                              (lVar9,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_58);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar8,*(undefined8 *)puVar1,uVar11,*(undefined8 *)puVar7);
        uStack_5c = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplier_41201e8
                              (lVar9,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_5c);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar8,*(undefined8 *)puVar3,uVar11,*(undefined8 *)puVar7);
        uStack_60 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetScore_411ffe0
                              (lVar9,0);
      }
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_60);
      System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                (lVar8,*(undefined8 *)puVar4,uVar11,*(undefined8 *)puVar7);
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

