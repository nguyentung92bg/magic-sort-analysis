/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$PlayOn
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__PlayOn (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, System_Collections_Generic_List_PlayOnBehaviourType__o* behaviours, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$PlayOn
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__PlayOn
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this,
   System_Collections_Generic_List_PlayOnBehaviourType__o* behaviours, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__PlayOn_1f1ce14
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  
  if ((bRam0000000005c2865f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d1de8);
    FUN_012d0dc8(PTR_DAT_0575d230);
    FUN_012d0dc8(PTR_DAT_057ea588);
    FUN_012d0dc8(PTR_DAT_057bf308);
    FUN_012d0dc8(PTR_DAT_057874a8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2865f = 1;
  }
  puVar6 = PTR_DAT_05805608;
  puVar5 = PTR_DAT_057d1de8;
  puVar4 = PTR_DAT_057874a8;
  puVar3 = PTR_DAT_0576aae0;
  puVar2 = PTR_DAT_057606c8;
  puVar1 = PTR_DAT_0575d230;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  if (param_2 != 0) {
    System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
              (&uStack_88,param_2,*(undefined8 *)PTR_DAT_057bf308);
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    uStack_60 = uStack_78;
    while (uVar7 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                             (&uStack_70,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
      switch(uStack_60 & 0xffffffff) {
      case 0:
        if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddExtraBottle_2f6a0a0
                  (0x3f000000,lVar8,0);
        break;
      case 1:
        if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleWithCustomHeight_2f6aa58
                  (0x3f000000,lVar8,1,0);
        break;
      case 3:
        Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__ReverseLastSelection_1f1d140
                  (0x3f000000,param_1);
        break;
      case 4:
        Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__UseMegaShuffle_1f1d208
                  (param_1);
        break;
      case 5:
        if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleWithCustomHeight_2f6aa58
                  (0x3f000000,lVar8,2,0);
      }
    }
    System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
              (&uStack_70,*(undefined8 *)puVar5);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar7 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__HasNoMove_1610738
                        (*(long *)(param_1 + 0x10),0);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_0201d088;
        Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__TrySolveSpecialStuck_1610a78
                  (*(long *)(param_1 + 0x10),0);
      }
      if ((((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
           (lVar8 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar8 != 0)) &&
          (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar8,*(undefined8 *)puVar6), lVar8 != 0)) &&
         ((*(long *)(lVar8 + 0x10) != 0 &&
          (lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + 0x60), lVar8 != 0)))) {
        uVar9 = *(undefined4 *)(lVar8 + 0x18);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar8 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,param_1,*(undefined8 *)puVar4,0);
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar9,lVar8,0,0);
          return;
        }
      }
    }
  }
LAB_0201d088:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

