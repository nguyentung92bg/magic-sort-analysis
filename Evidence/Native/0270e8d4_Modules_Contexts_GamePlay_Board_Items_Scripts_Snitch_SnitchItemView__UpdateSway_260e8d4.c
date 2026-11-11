/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$UpdateSway
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateSway (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0270eb24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$UpdateSway
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateSway
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateSway_260e8d4
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_05764ae0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270e858 with catch @ 0270e8d8
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0270e8cc with catch @ 0270e8d8
                       try { // try from 0270e8d8 to 0280e8ef has its CatchHandler @ 0270e808 */
                    /* try { // try from 0270e8f0 to 0280e907 has its CatchHandler @ 0270e974 */
  if ((bRam0000000005c2b9fa & 1) == 0) {
                    /* try { // try from 0270e908 to 0280e963 has its CatchHandler @ 0270e808 */
    FUN_012d0dc8(PTR_DAT_05764ae0);
    bRam0000000005c2b9fa = 1;
  }
  fVar4 = (float)UnityEngine_Time__get_time_4086144(0);
  if (*(float *)(param_1 + 0xf8) <= **(float **)(*(long *)puVar1 + 0xb8)) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
      fVar4 = (float)UnityEngine_Transform__get_localPosition_4092c40(lVar2,0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      fVar6 = **(float **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      fVar5 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
      if (*(long *)(param_1 + 0x38) != 0) {
        fVar5 = fVar5 * *(float *)(*(long *)(param_1 + 0x38) + 0x2c8);
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        UnityEngine_Transform__set_localPosition_4092ce0(fVar4 + (fVar6 - fVar4) * fVar5,lVar2,0);
        lVar2 = *(long *)(param_1 + 0x40);
        if (lVar2 != 0) {
          uVar8 = UnityEngine_Transform__get_localRotation_4092eb4(lVar2,0);
          if (cRam0000000005c25812 == '\0') {
            FUN_012d0dc8(PTR_DAT_057f4aa8);
            cRam0000000005c25812 = '\x01';
          }
          UnityEngine_Time__get_deltaTime_408616c(0);
          if (*(long *)(param_1 + 0x38) != 0) {
            UnityEngine_Quaternion__Lerp_3832090(uVar8,0);
LAB_0270ebf8:
            if (pcRam0000000005c3a640 == (code *)0x0) {
              pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
            }
            (*pcRam0000000005c3a640)(lVar2,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    fVar5 = (float)UnityEngine_Mathf__PerlinNoise_3837c9c
                             (fVar4 * *(float *)(*(long *)(param_1 + 0x38) + 0x2b0) +
                              *(float *)(param_1 + 0xe8),0,0);
                    /* try { // try from 0270e964 to 0280e973 has its CatchHandler @ 0270e974 */
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 0270e8f0 with catch @ 0270e974
                       catch() { ... } // from try @ 0270e964 with catch @ 0270e974 */
                    /* try { // try from 0270e978 to 0280e97b has its CatchHandler @ 0270e984 */
                    /* try { // try from 0270e97c to 0280e987 has its CatchHandler @ 0270e808 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270e978 with catch @ 0270e984
                        */
      fVar6 = (float)UnityEngine_Mathf__PerlinNoise_3837c9c
                               (fVar4 * *(float *)(*(long *)(param_1 + 0x38) + 0x2b0) +
                                *(float *)(param_1 + 0xec),0x3f800000,0);
      lVar2 = *(long *)(param_1 + 0x38);
      if ((lVar2 != 0) && (lVar3 = *(long *)(param_1 + 0x40), lVar3 != 0)) {
        fVar11 = *(float *)(param_1 + 0xf4);
        fVar12 = *(float *)(param_1 + 0xf8);
        fVar10 = *(float *)(lVar2 + 700);
        fVar9 = fVar4 * *(float *)(lVar2 + 0x2b8);
        fVar7 = (float)func_0x01038460(fVar9 + fVar11);
        fVar9 = (float)cosf(fVar11 + fVar9 * _UNK_04359fb4);
        UnityEngine_Transform__set_localPosition_4092ce0
                  (fVar12 * fVar10 * (fVar5 + -0.5 + fVar7 * 0.5),
                   fVar12 * fVar10 * (fVar6 + -0.5 + fVar9 * 0.5),fVar12 * 0.0,lVar3,0);
        if (*(char *)(param_1 + 0xfc) == '\0') {
          return;
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          UnityEngine_Mathf__PerlinNoise_3837c9c
                    (fVar4 * *(float *)(*(long *)(param_1 + 0x38) + 0x2b0) +
                     *(float *)(param_1 + 0xf0),0x40000000,0);
          if (*(long *)(param_1 + 0x38) != 0) {
            func_0x01038460(fVar4 * *(float *)(*(long *)(param_1 + 0x38) + 0x2c4) +
                            *(float *)(param_1 + 0xf4));
            lVar2 = *(long *)(param_1 + 0x40);
            UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
            if (lVar2 != 0) goto LAB_0270ebf8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

