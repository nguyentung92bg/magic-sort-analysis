/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$SetActiveFireworks
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SetActiveFireworks (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, int32_t fireworkCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$SetActiveFireworks
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SetActiveFireworks
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, int32_t
   fireworkCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SetActiveFireworks_27554a0
               (long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  if ((bRam0000000005c2c71d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05769fb8);
    bRam0000000005c2c71d = 1;
  }
  puVar2 = PTR_DAT_05769fb8;
  if (param_2 == 2) {
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_028557c8;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_028557cc;
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == 0) goto LAB_028557c8;
    uVar4 = *(undefined8 *)(lVar5 + 0x20);
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_05769fb8;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_028557c8;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar4;
      FUN_012d0d74(puVar6);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_028557c8;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_028557cc:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    if (((*(long *)(lVar5 + 0x20) == 0) ||
        (lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10), lVar5 == 0)) ||
       (lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar5,0), lVar5 == 0))
    goto LAB_028557c8;
    UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_028557c8;
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_028557cc;
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == 0) goto LAB_028557c8;
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)puVar2;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_028557c8;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar4;
      FUN_012d0d74(puVar6);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_028557c8;
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_028557cc;
    lVar5 = *(long *)(lVar5 + 0x30);
  }
  else {
    if (param_2 != 1) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar1) {
          uVar11 = 0;
          do {
            if (uVar1 <= uVar11) goto LAB_028557cc;
            lVar3 = *(long *)(param_1 + 0x50);
            if (lVar3 == 0) goto LAB_028557c8;
            lVar10 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
            lVar8 = *(long *)(lVar3 + 0x10);
            lVar9 = *(long *)puVar2;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_028557c8;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar10;
              FUN_012d0d74(plVar7,lVar10);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar3,lVar10);
            }
            if (((lVar10 == 0) || (*(long *)(lVar10 + 0x10) == 0)) ||
               (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar10 + 0x10),0),
               lVar3 == 0)) goto LAB_028557c8;
            UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
            uVar1 = *(uint *)(lVar5 + 0x18);
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)uVar1);
        }
        return;
      }
      goto LAB_028557c8;
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_028557c8;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_028557cc;
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == 0) goto LAB_028557c8;
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_05769fb8;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_028557c8;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar6 = uVar4;
      FUN_012d0d74(puVar6);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_028557c8;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_028557cc;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) &&
     (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar5 + 0x10),0), lVar5 != 0))
  {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar5,1);
    return;
  }
LAB_028557c8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

