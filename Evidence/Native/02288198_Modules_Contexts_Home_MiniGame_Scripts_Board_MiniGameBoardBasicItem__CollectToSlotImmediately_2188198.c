/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$CollectToSlotImmediately
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__CollectToSlotImmediately (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* targetSlot, float moveScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBasicItem$$CollectToSlotImmediately
   void 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__CollectToSlotImmediately
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* targetSlot, float
   moveScale, const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__CollectToSlotImmediately_2188198
               (float param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  
  if (param_3 != 0) {
    Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__SetItem_2188150
              (param_3,param_2);
    lVar3 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar2 = PTR_DAT_05805c10;
    if (lVar3 != 0) {
      puVar4 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      UnityEngine_Transform__set_localPosition_4092ce0(*puVar4,puVar4[1],puVar4[2],lVar3,0);
      lVar3 = UnityEngine_Component__get_transform_408b444(param_2,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      if (lVar3 != 0) {
        lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(float *)(lVar5 + 0xc) * param_1,*(float *)(lVar5 + 0x10) * param_1,
                   *(float *)(lVar5 + 0x14) * param_1,lVar3,0);
        if ((*(long *)(param_2 + 0x58) != 0) && (lVar3 = *(long *)(param_2 + 0x38), lVar3 != 0)) {
          uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x58) + 0x70);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 022877fc with catch @ 02288294
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02287810 with catch @ 02288298
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02287cc0 with catch @ 02288298
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0228782c with catch @ 0228829c
                        */
          if (pcRam0000000005c39c40 == (code *)0x0) {
            pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
          }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c39c40)(lVar3,uVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

