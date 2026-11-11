/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$<DestroyGenerator>b__22_0
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___DestroyGenerator_b__22_0 (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$<DestroyGenerator>b__22_0
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___DestroyGenerator_b__22_0
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___DestroyGenerator_b__22_0_411aae4
               (long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0xa0),0), lVar5 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x60), lVar5 != 0)) {
      if ((bRam0000000005c3aa97 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05781fb8,param_1,0);
        bRam0000000005c3aa97 = 1;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)PTR_DAT_05781fb8;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            plVar7 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
            *plVar7 = param_1;
            if (iRam0000000005c3d478 != 0) {
              puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x041eacf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar5,param_1);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

