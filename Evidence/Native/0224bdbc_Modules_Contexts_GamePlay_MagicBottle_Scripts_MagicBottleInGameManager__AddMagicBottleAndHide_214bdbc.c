/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleInGameManager$$AddMagicBottleAndHide
void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager__AddMagicBottleAndHide (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleInGameManager$$AddMagicBottleAndHide
   void 
   Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager__AddMagicBottleAndHide
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager__AddMagicBottleAndHide_214bdbc
               (long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  ulong extraout_x1;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 != 0)) {
    lVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottleAsMagicBottle_2f69998
                      (lVar4,0);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar4;
    FUN_012d0d74(plVar7,lVar4);
    if (*plVar7 != 0) {
      lVar4 = *(long *)(*plVar7 + 0x50);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(0,0);
      }
      auVar9 = ZEXT816(0);
      if ((*(long *)(lVar4 + 0x30) != 0) &&
         (auVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar4 + 0x30),0),
         auVar9._8_8_ = 0, auVar9._0_8_ = auVar8._8_8_, auVar9 = auVar9 << 0x40, auVar8._0_8_ != 0))
      {
        UnityEngine_GameObject__SetActive_408e318(auVar8._0_8_,0,0);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = extraout_x1;
        auVar9 = auVar8 << 0x40;
        if ((*(long *)(lVar4 + 0x38) != 0) &&
           (auVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar4 + 0x38),0),
           auVar3._8_8_ = 0, auVar3._0_8_ = auVar8._8_8_, auVar9 = auVar3 << 0x40, auVar8._0_8_ != 0
           )) {
          auVar9 = UnityEngine_GameObject__SetActive_408e318(auVar8._0_8_,0,0);
          if ((*(long *)(lVar4 + 0x100) != 0) &&
             (auVar1._8_8_ = 0, auVar1._0_8_ = auVar9._8_8_, auVar9 = auVar1 << 0x40,
             *(long *)(lVar4 + 0x30) != 0)) {
            auVar9 = UnityEngine_Renderer__set_material_4082930
                               (*(long *)(lVar4 + 0x30),
                                *(undefined8 *)(*(long *)(lVar4 + 0x100) + 0x38),0);
            if ((*(long *)(lVar4 + 0x100) != 0) &&
               (lVar5 = *(long *)(lVar4 + 0x38), auVar2._8_8_ = 0, auVar2._0_8_ = auVar9._8_8_,
               auVar9 = auVar2 << 0x40, lVar5 != 0)) {
              uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x100) + 0x38);
              if (pcRam0000000005c39b70 == (code *)0x0) {
                pcRam0000000005c39b70 = (code *)FUN_012d0d84(&UNK_043ea959);
              }
                    /* WARNING: Could not recover jumptable at 0x04182970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c39b70)(lVar5,uVar6);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0(auVar9._0_8_,auVar9._8_8_);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

