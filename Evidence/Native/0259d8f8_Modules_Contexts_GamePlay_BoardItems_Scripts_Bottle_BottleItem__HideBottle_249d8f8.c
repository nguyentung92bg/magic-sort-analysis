/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$HideBottle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HideBottle (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$HideBottle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HideBottle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HideBottle_249d8f8
               (long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  ulong extraout_x1;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  auVar8 = ZEXT816(0);
  if ((*(long *)(lVar5 + 0x30) != 0) &&
     (auVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x30),0),
     auVar8._8_8_ = 0, auVar8._0_8_ = auVar7._8_8_, auVar8 = auVar8 << 0x40, auVar7._0_8_ != 0)) {
    UnityEngine_GameObject__SetActive_408e318(auVar7._0_8_,0,0);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = extraout_x1;
    auVar8 = auVar7 << 0x40;
    if ((*(long *)(lVar5 + 0x38) != 0) &&
       (auVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x38),0),
       auVar3._8_8_ = 0, auVar3._0_8_ = auVar7._8_8_, auVar8 = auVar3 << 0x40, auVar7._0_8_ != 0)) {
      auVar8 = UnityEngine_GameObject__SetActive_408e318(auVar7._0_8_,0,0);
      if ((*(long *)(lVar5 + 0x100) != 0) &&
         (auVar1._8_8_ = 0, auVar1._0_8_ = auVar8._8_8_, auVar8 = auVar1 << 0x40,
         *(long *)(lVar5 + 0x30) != 0)) {
        auVar8 = UnityEngine_Renderer__set_material_4082930
                           (*(long *)(lVar5 + 0x30),*(undefined8 *)(*(long *)(lVar5 + 0x100) + 0x38)
                            ,0);
        if ((*(long *)(lVar5 + 0x100) != 0) &&
           (lVar4 = *(long *)(lVar5 + 0x38), auVar2._8_8_ = 0, auVar2._0_8_ = auVar8._8_8_,
           auVar8 = auVar2 << 0x40, lVar4 != 0)) {
          uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x100) + 0x38);
          if (pcRam0000000005c39b70 == (code *)0x0) {
            pcRam0000000005c39b70 = (code *)FUN_012d0d84(&UNK_043ea959);
          }
                    /* WARNING: Could not recover jumptable at 0x04182970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c39b70)(lVar4,uVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(auVar8._0_8_,auVar8._8_8_);
}

