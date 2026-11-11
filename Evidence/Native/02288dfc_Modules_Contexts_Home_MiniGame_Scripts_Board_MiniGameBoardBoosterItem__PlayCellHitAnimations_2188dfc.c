/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$PlayCellHitAnimations
DG_Tweening_Tween_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlayCellHitAnimations (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, System_Collections_Generic_List_MiniGameBoardCell__o* targetCells, float moveDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$PlayCellHitAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlayCellHitAnimations
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this,
   System_Collections_Generic_List_MiniGameBoardCell__o* targetCells, float moveDuration, const
   MethodInfo* method); */

long Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__PlayCellHitAnimations_2188dfc
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_057b8668;
  if ((bRam0000000005c29d46 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576bb68);
    FUN_012d0dc8(PTR_DAT_057f6da0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057fd040);
    FUN_012d0dc8(PTR_DAT_05790f60);
    FUN_012d0dc8(PTR_DAT_057fab68);
    FUN_012d0dc8(PTR_DAT_0576aaa0);
    FUN_012d0dc8(PTR_DAT_05784580);
    FUN_012d0dc8(PTR_DAT_05794c40);
    FUN_012d0dc8(PTR_DAT_057f7090);
    FUN_012d0dc8(PTR_DAT_057b8668);
    bRam0000000005c29d46 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aaa0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x20) = param_2;
    FUN_012d0d74((long *)(lVar3 + 0x20),param_2);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      System_Collections_Generic_List_object____ctor_21fc324
                (lVar4,param_3,*(undefined8 *)PTR_DAT_05790f60);
      plVar7 = (long *)(lVar3 + 0x18);
      *plVar7 = lVar4;
      FUN_012d0d74(plVar7,lVar4);
      lVar4 = *plVar7;
      uVar5 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__GetBoosterCell_21888f4
                        (param_2);
      if (lVar4 != 0) {
        System_Collections_Generic_List_object___Insert_21fd8a0
                  (lVar4,0,uVar5,*(undefined8 *)PTR_DAT_057fd040);
        *(undefined4 *)(lVar3 + 0x10) = 0;
        puVar2 = PTR_DAT_0576bb68;
        if (*(long *)(lVar3 + 0x18) != 0) {
          iVar1 = *(int *)(*(long *)(lVar3 + 0x18) + 0x18);
          *(undefined4 *)(lVar3 + 0x14) = 0;
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar2 = PTR_DAT_057f6da0;
          if (lVar4 != 0) {
            DG_Tweening_Core_DOGetter_int____ctor_156cd70
                      (lVar4,lVar3,*(undefined8 *)PTR_DAT_05794c40,0);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            puVar2 = PTR_DAT_057815e0;
            if (lVar6 != 0) {
              DG_Tweening_Core_DOSetter_int____ctor_156deb0
                        (lVar6,lVar3,*(undefined8 *)PTR_DAT_057f7090,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar3 = DG_Tweening_DOTween__To_1ed85d4(param_1,lVar4,lVar6,iVar1 + -1,0);
              if (*(long *)(param_2 + 0x50) != 0) {
                uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x50) + 0x90);
                if ((bRam0000000005c2b025 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_05805638,uVar5,*(undefined8 *)PTR_DAT_05784580);
                  FUN_012d0dc8(PTR_DAT_05776a80);
                  FUN_012d0dc8(PTR_DAT_0580b108);
                  bRam0000000005c2b025 = 1;
                }
                puVar2 = PTR_DAT_05776a80;
                if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
                  *(undefined4 *)(lVar3 + 0xb4) = 0x25;
                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  puVar2 = PTR_DAT_0580b108;
                  if (lVar4 != 0) {
                    DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,uVar5,0);
                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if (lVar6 != 0) {
                      DG_Tweening_EaseFunction___ctor_1ed6eb4
                                (lVar6,lVar4,*(undefined8 *)PTR_DAT_05805638,0);
                      *(long *)(lVar3 + 0xb8) = lVar6;
                      FUN_012d0d74((long *)(lVar3 + 0xb8),lVar6);
                      return lVar3;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                return lVar3;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

