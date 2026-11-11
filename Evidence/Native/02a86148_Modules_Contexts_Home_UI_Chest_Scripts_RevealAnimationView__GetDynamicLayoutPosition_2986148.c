/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$GetDynamicLayoutPosition
UnityEngine_Vector3_o Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetDynamicLayoutPosition (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, int32_t index, int32_t totalRewards, UnityEngine_Vector3_o mainPivot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.RevealAnimationView$$GetDynamicLayoutPosition
   UnityEngine_Vector3_o
   Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetDynamicLayoutPosition
   (Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView_o* __this, int32_t index, int32_t
   totalRewards, UnityEngine_Vector3_o mainPivot, const MethodInfo* method); */

float Modules_Contexts_Home_UI_Chest_Scripts_RevealAnimationView__GetDynamicLayoutPosition_2986148
                (float param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  
  if ((bRam0000000005c2d790 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580e588);
    FUN_012d0dc8(PTR_DAT_057c4090);
    FUN_012d0dc8(PTR_DAT_057c3c28);
    FUN_012d0dc8(PTR_DAT_0577a308);
    FUN_012d0dc8(PTR_DAT_057cfb88);
    bRam0000000005c2d790 = 1;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    fVar10 = *(float *)(*(long *)(param_2 + 0x20) + 0x2c);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cfb88);
    if (lVar6 != 0) {
      System_Collections_Generic_List_int____ctor_204e880(lVar6,*(undefined8 *)PTR_DAT_057c4090);
      puVar3 = PTR_DAT_0580e588;
      puVar2 = (undefined8 *)PTR_DAT_0577a308;
      for (; PTR_DAT_0577a308 = (undefined *)puVar2, 0 < param_4; param_4 = param_4 - iVar9) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)puVar3;
        iVar9 = param_4;
        if (2 < param_4) {
          iVar9 = 3;
        }
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_02a86350;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = iVar9;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar6,iVar9);
        }
        puVar2 = (undefined8 *)PTR_DAT_0577a308;
      }
      fVar10 = fVar10 + fVar10;
      iVar9 = 0;
      if (0 < *(int *)(lVar6 + 0x18)) {
        iVar5 = 0;
        do {
          iVar4 = System_Collections_Generic_List_int___get_Item_204edf0(lVar6,iVar5,*puVar2);
          if (param_3 < iVar4 + iVar9) goto LAB_02a862e4;
          iVar4 = System_Collections_Generic_List_int___get_Item_204edf0(lVar6,iVar5,*puVar2);
          iVar5 = iVar5 + 1;
          iVar9 = iVar4 + iVar9;
        } while (iVar5 < *(int *)(lVar6 + 0x18));
      }
      iVar5 = 0;
LAB_02a862e4:
      iVar5 = System_Collections_Generic_List_int___get_Item_204edf0(lVar6,iVar5,*puVar2);
      return param_1 + fVar10 * (float)(param_3 - iVar9) + fVar10 * (float)(iVar5 + -1) * -0.5;
    }
  }
LAB_02a86350:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

