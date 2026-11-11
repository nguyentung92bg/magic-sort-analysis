/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$StopHint
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__StopHint (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$StopHint
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__StopHint
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__StopHint_410a584(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  puVar4 = PTR_DAT_0576c200;
  if ((bRam0000000005c3abc3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3abc3 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (((*(long *)(param_1 + 0x88) != 0) &&
        (lVar7 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x88),0),
        lVar7 != 0)) && (UnityEngine_Transform__get_position_4092b08(lVar7,0), lVar6 != 0)) {
      UnityEngine_Transform__set_position_4092ba8(lVar6,0);
      lVar6 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      if (lVar6 != 0) {
        lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                   *(undefined4 *)(lVar7 + 0x14),lVar6,0);
        goto LAB_0420a678;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_0420a678:
  plVar8 = (long *)(param_1 + 0x78);
  if (*plVar8 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar8,0,0);
    *plVar8 = 0;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}

