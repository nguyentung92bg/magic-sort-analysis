/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$HideIdleFireworks
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__HideIdleFireworks (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$HideIdleFireworks
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__HideIdleFireworks
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__HideIdleFireworks_2754d9c
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  if ((bRam0000000005c2c71c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db908);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05760e48);
    FUN_012d0dc8(PTR_DAT_057abea0);
    bRam0000000005c2c71c = 1;
  }
  puVar5 = PTR_DAT_057db908;
  puVar4 = PTR_DAT_057abea0;
  puVar3 = PTR_DAT_05760e48;
  puVar2 = PTR_DAT_057606c8;
  uVar1 = _UNK_0434ccf4;
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 != 0) {
    if (0 < *(int *)(lVar10 + 0x18)) {
      uVar11 = 0;
      do {
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        if (lVar6 == 0) goto LAB_02854f38;
        System_Object___ctor_23dfe5c(lVar6,0);
        if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        plVar9 = (long *)(lVar6 + 0x10);
        *plVar9 = *(long *)(lVar10 + 0x20 + uVar11 * 8);
        FUN_012d0d74(plVar9);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_02854f38;
        uVar7 = System_Collections_Generic_List_object___Contains_21fce6c
                          (*(long *)(param_1 + 0x58),*plVar9,*(undefined8 *)puVar5);
        if ((uVar7 & 1) == 0) {
          if (((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 == 0)) ||
             (lVar8 = UnityEngine_Component__get_gameObject_408b480(lVar8,0), lVar8 == 0))
          goto LAB_02854f38;
          uVar7 = UnityEngine_GameObject__get_activeInHierarchy_408e398(lVar8,0);
          if ((uVar7 & 1) != 0) {
            if ((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x30), lVar8 == 0))
            goto LAB_02854f38;
            UnityEngine_ParticleSystem__Play_3abc5c8(lVar8,0);
            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar8 == 0) goto LAB_02854f38;
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,lVar6,*(undefined8 *)puVar3,0);
            DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar1,lVar8,1,0);
          }
        }
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)*(int *)(lVar10 + 0x18));
    }
    return;
  }
LAB_02854f38:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

