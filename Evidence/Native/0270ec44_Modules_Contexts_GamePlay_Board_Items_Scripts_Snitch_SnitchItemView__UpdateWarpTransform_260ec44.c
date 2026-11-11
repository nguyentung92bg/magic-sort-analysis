/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$UpdateWarpTransform
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateWarpTransform (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$UpdateWarpTransform
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateWarpTransform
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateWarpTransform_260ec44
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  
  if (*(long *)(param_4 + 0x60) != 0) {
    uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_408d7bc(*(long *)(param_4 + 0x60),0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_4 + 0x60) == 0) goto LAB_0270ef8c;
      UnityEngine_Behaviour__set_enabled_408d778(*(long *)(param_4 + 0x60),0,0);
    }
    lVar4 = *(long *)(param_4 + 0x38);
    lVar6 = 0x50;
    if (*(int *)(param_4 + 0x100) != 1) {
      lVar6 = 0x58;
    }
    if ((lVar4 != 0) && (lVar6 = *(long *)(param_4 + lVar6), lVar6 != 0)) {
      fVar12 = *(float *)(lVar4 + 600);
      uVar14 = *(undefined8 *)(lVar4 + 0x25c);
      fVar13 = *(float *)(param_4 + 0xd0);
      uVar16 = NEON_rev64(*(undefined8 *)(param_4 + 0xd4),4);
      fVar7 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
      if (cRam0000000005c2597e == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c2597e = '\x01';
      }
      puVar1 = PTR_DAT_057d6f00;
      fVar13 = fVar13 - fVar7;
      param_3 = (float)uVar16 - param_3;
      param_2 = (float)((ulong)uVar16 >> 0x20) - param_2;
                    /* try { // try from 0270ed1c to 0280ed5b has its CatchHandler @ 0270ed1c
                       catch() { ... } // from try @ 0270ed1c with catch @ 0270ed1c
                       catch() { ... } // from try @ 0270ed70 with catch @ 0270ed1c
                       catch() { ... } // from try @ 0270edac with catch @ 0270ed1c
                       catch() { ... } // from try @ 0270edec with catch @ 0270ed1c */
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar2 = PTR_DAT_05805c10;
      fVar7 = _UNK_0434cc84;
      fVar10 = param_3 * param_3;
      fVar11 = param_2 * param_2;
      fVar8 = SQRT(fVar10 + fVar13 * fVar13 + fVar11);
      if (fVar8 <= _UNK_0434cc84) {
                    /* try { // try from 0270ed70 to 0280ed93 has its CatchHandler @ 0270ed1c */
        if (cRam0000000005c230aa == '\0') {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270ed5c with catch @ 0270ed7c
                        */
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
                    /* try { // try from 0270ed94 to 0280edab has its CatchHandler @ 0270ede4 */
        fVar13 = *pfVar5;
        uVar16 = NEON_rev64(*(undefined8 *)(pfVar5 + 1),4);
      }
      else {
                    /* try { // try from 0270ed5c to 0280ed6f has its CatchHandler @ 0270ed7c */
        fVar13 = fVar13 / fVar8;
        uVar16 = CONCAT44(param_2 / fVar8,param_3 / fVar8);
      }
      fVar17 = *(float *)(param_4 + 0xcc);
      fVar8 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
                    /* try { // try from 0270edac to 0280edd3 has its CatchHandler @ 0270ed1c */
      lVar4 = *(long *)(param_4 + 0x38);
      *(float *)(param_4 + 0xcc) = fVar17 + fVar8;
      fVar8 = (float)((ulong)uVar16 >> 0x20);
      if (*(char *)(param_4 + 200) == '\0') {
        if (lVar4 == 0) goto LAB_0270ef8c;
        fVar17 = *(float *)(lVar4 + 0x2e4);
        fVar9 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
        fVar13 = fVar13 * fVar17 * fVar9;
        fVar15 = (float)uVar16 * fVar17 * fVar9;
        fVar9 = fVar8 * fVar17 * fVar9;
      }
      else {
        if (lVar4 == 0) goto LAB_0270ef8c;
        fVar17 = *(float *)(lVar4 + 0x2e8);
        fVar9 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
                    /* try { // try from 0270edd4 to 0280ede3 has its CatchHandler @ 0270ede4 */
        if (*(long *)(param_4 + 0x38) == 0) goto LAB_0270ef8c;
        fVar11 = *(float *)(param_4 + 0xcc);
                    /* catch() { ... } // from try @ 0270ed94 with catch @ 0270ede4
                       catch() { ... } // from try @ 0270edd4 with catch @ 0270ede4 */
        fVar10 = fVar13 * fVar17;
                    /* try { // try from 0270ede8 to 0280edeb has its CatchHandler @ 0270edf4 */
                    /* try { // try from 0270edec to 0280edf7 has its CatchHandler @ 0270ed1c */
        fVar13 = -(fVar10 * fVar9);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270ede8 with catch @ 0270edf4
                        */
        fVar15 = -((float)uVar16 * fVar17 * fVar9);
        fVar9 = -(fVar8 * fVar17 * fVar9);
        if (*(float *)(*(long *)(param_4 + 0x38) + 0x2ec) <= fVar11) {
          *(undefined1 *)(param_4 + 200) = 0;
          *(undefined4 *)(param_4 + 0xcc) = 0;
        }
      }
      fVar8 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar6,0);
      if (*(long *)(param_4 + 0x38) != 0) {
        fVar17 = *(float *)(*(long *)(param_4 + 0x38) + 0x2f0);
        uVar14 = NEON_rev64(uVar14,4);
        if (cRam0000000005c272fe == '\0') {
          FUN_012d0dc8(PTR_DAT_057d6f00);
          cRam0000000005c272fe = '\x01';
        }
        fVar12 = (fVar13 + fVar8) - fVar12;
        fVar13 = (fVar15 + fVar11) - (float)uVar14;
        fVar8 = (fVar9 + fVar10) - (float)((ulong)uVar14 >> 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        fVar12 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar8 * fVar8);
        if (fVar17 < fVar12) {
          if (cRam0000000005c2597e == '\0') {
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c2597e = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          if (fVar12 <= fVar7) {
            if (cRam0000000005c230aa == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230aa = '\x01';
            }
            NEON_rev64(*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),4);
          }
        }
        if (pcRam0000000005c3a620 == (code *)0x0) {
          pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
        }
        (*pcRam0000000005c3a620)(lVar6,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
LAB_0270ef8c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

