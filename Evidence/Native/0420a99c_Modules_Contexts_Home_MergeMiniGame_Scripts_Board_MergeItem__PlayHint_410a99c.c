/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayHint
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayHint (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Transform_o* towards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02551160) */
/* WARNING: Removing unreachable block (ram,0x02551168) */
/* WARNING: Removing unreachable block (ram,0x02551190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$PlayHint
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayHint
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Transform_o*
   towards, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__PlayHint_410a99c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((bRam0000000005c3abc2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05770998);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057d4b28);
    bRam0000000005c3abc2 = 1;
  }
  Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__StopHint_410a584(param_4);
  if (param_5 != 0) {
    fVar9 = (float)UnityEngine_Transform__get_position_4092b08(param_5,0);
    fVar15 = param_2;
    fVar11 = param_3;
    lVar3 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar3 != 0) {
      fVar10 = (float)UnityEngine_Transform__get_position_4092b08(lVar3,0);
      if (cRam0000000005c2597e == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c2597e = '\x01';
      }
      fVar9 = fVar9 - fVar10;
      param_2 = param_2 - fVar15;
      param_3 = param_3 - fVar11;
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar1 = PTR_DAT_05805c10;
      fVar10 = param_3 * param_3;
      fVar11 = SQRT(fVar10 + fVar9 * fVar9 + param_2 * param_2);
      fVar15 = _UNK_0434cc84;
      if (fVar11 <= _UNK_0434cc84) {
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
        fVar9 = *pfVar6;
        param_2 = pfVar6[1];
        param_3 = pfVar6[2];
      }
      else {
        fVar9 = fVar9 / fVar11;
        param_2 = param_2 / fVar11;
        param_3 = param_3 / fVar11;
      }
      if ((*(long *)(param_4 + 0x88) != 0) &&
         (lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x88),0),
         lVar3 != 0)) {
        fVar11 = (float)UnityEngine_Transform__get_position_4092b08(lVar3,0);
        lVar3 = *(long *)(param_4 + 0x50);
        if (lVar3 != 0) {
          fVar17 = *(float *)(lVar3 + 400);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
            lVar3 = *(long *)(param_4 + 0x50);
            if (lVar3 == 0) goto LAB_0420ace4;
          }
          puVar2 = PTR_DAT_057fc1d0;
          lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
          fVar16 = *(float *)(lVar3 + 0x194);
          fVar12 = *(float *)(lVar7 + 0xc);
          fVar13 = *(float *)(lVar7 + 0x10);
          fVar14 = *(float *)(lVar7 + 0x14);
          if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
          uVar5 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
          lVar3 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                            (uVar4,uVar5,*(undefined8 *)puVar2);
          plVar8 = (long *)(param_4 + 0x78);
          *plVar8 = lVar3;
          FUN_012d0d74(plVar8,lVar3);
          lVar3 = *plVar8;
          uVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
          if (*(long *)(param_4 + 0x50) != 0) {
            uVar4 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                              (fVar11 + fVar9 * fVar17,fVar15 + param_2 * fVar17,
                               fVar10 + param_3 * fVar17,
                               *(undefined4 *)(*(long *)(param_4 + 0x50) + 0x198),uVar4,0,0);
            puVar1 = PTR_DAT_05770998;
            if (*(long *)(param_4 + 0x50) != 0) {
              uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                (uVar4,*(undefined4 *)(*(long *)(param_4 + 0x50) + 0x19c),
                                 *(undefined8 *)PTR_DAT_05770998);
              DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(lVar3,uVar4,0);
              uVar5 = *(undefined8 *)(param_4 + 0x78);
              uVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
              if (*(long *)(param_4 + 0x50) != 0) {
                uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                  (fVar12 * fVar16,fVar13 * fVar16,fVar14 * fVar16,
                                   *(undefined4 *)(*(long *)(param_4 + 0x50) + 0x198),uVar4,0);
                puVar2 = PTR_DAT_057d4b28;
                if (*(long *)(param_4 + 0x50) != 0) {
                  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                    (uVar4,*(undefined4 *)(*(long *)(param_4 + 0x50) + 0x19c),
                                     *(undefined8 *)puVar1);
                  DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar4,0);
                  lVar3 = *plVar8;
                  uVar4 = *(undefined8 *)puVar2;
                  if (((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) &&
                     (*(char *)(lVar3 + 0x100) == '\0')) {
                    *(undefined4 *)(lVar3 + 0xa4) = 4;
                    *(undefined4 *)(lVar3 + 0xa8) = 1;
                    if (*(int *)(lVar3 + 0x10) == 0) {
                      *(float *)(lVar3 + 0x108) = *(float *)(lVar3 + 0xa0) * 4.0;
                      return;
                    }
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0420ace4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

