/* IL2CPP: Modules.Contexts.GamePlay.Tutorial.Scripts.SelectionView$$ShowSelectionSuccessAt
void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__ShowSelectionSuccessAt (Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Tutorial.Scripts.SelectionView$$ShowSelectionSuccessAt
   void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__ShowSelectionSuccessAt
   (Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView_o* __this, UnityEngine_Vector3_o
   position, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Tutorial_Scripts_SelectionView__ShowSelectionSuccessAt_160e630
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000005c24458 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780a38);
    FUN_012d0dc8(PTR_DAT_0577b828);
    bRam0000000005c24458 = 1;
  }
  if (*(long *)(param_4 + 0x18) != 0) {
    lVar2 = Modules_Infrastructure_Common_Scripts_Pool_Pool_object___Get_30f96e0
                      (*(long *)(param_4 + 0x18),*(undefined8 *)PTR_DAT_0577b828);
    lVar4 = *(long *)(param_4 + 0x38);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar6 = *(long *)PTR_DAT_05780a38;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar3 = lVar2;
          FUN_012d0d74(plVar3,lVar2);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar4,lVar2);
        }
        if ((lVar2 != 0) &&
           (lVar4 = UnityEngine_Component__get_transform_408b444(lVar2,0), lVar4 != 0)) {
          UnityEngine_Transform__set_position_4092ba8(param_1,param_2,param_3,lVar4,0);
          lVar2 = UnityEngine_Component__get_gameObject_408b480(lVar2,0);
          if (lVar2 != 0) {
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar2,1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

