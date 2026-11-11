/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t bottlesCount, int32_t remainingBottleCompletions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t bottlesCount, int32_t
   remainingBottleCompletions, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__Prepare_2613d1c
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
                    /* try { // try from 02713d48 to 02813d9f has its CatchHandler @ 02713d48
                       catch() { ... } // from try @ 02713d48 with catch @ 02713d48
                       catch() { ... } // from try @ 02713dd0 with catch @ 02713d48
                       catch() { ... } // from try @ 02713e18 with catch @ 02713d48
                       catch() { ... } // from try @ 02713e48 with catch @ 02713d48
                       catch() { ... } // from try @ 02713ebc with catch @ 02713d48 */
  if ((bRam0000000005c2ba29 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
                    /* try { // try from 02713da0 to 02813dcf has its CatchHandler @ 02713e18 */
    FUN_012d0dc8(PTR_DAT_057d4408);
    FUN_012d0dc8(PTR_DAT_057a3198);
    bRam0000000005c2ba29 = 1;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  lVar12 = *(long *)(param_1 + 0x30);
  if (cRam0000000005c230a9 == '\0') {
                    /* try { // try from 02713dd0 to 02813de7 has its CatchHandler @ 02713d48 */
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar4 = PTR_DAT_05805c10;
  if (lVar12 != 0) {
                    /* try { // try from 02713de8 to 02813e17 has its CatchHandler @ 02713e18 */
    lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
               *(undefined4 *)(lVar7 + 0x14),lVar12,0);
    lVar12 = *(long *)(param_1 + 0x30);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02713da0 with catch @ 02713e18
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02713de8 with catch @ 02713e18
                       try { // try from 02713e18 to 02813e2f has its CatchHandler @ 02713d48 */
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
                    /* try { // try from 02713e30 to 02813e47 has its CatchHandler @ 02713eb4 */
    pfVar8 = *(float **)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 02713e48 to 02813ea3 has its CatchHandler @ 02713d48 */
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834
              (*pfVar8 * _UNK_04339bec,pfVar8[1] * _UNK_04339bec,pfVar8[2] * _UNK_04339bec,0);
    if (lVar12 != 0) {
      UnityEngine_Transform__set_localRotation_4092f3c(lVar12,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,*(long *)(param_1 + 0x30),0)
        ;
        puVar3 = PTR_DAT_057fbae0;
        puVar2 = PTR_DAT_057a3198;
        puVar1 = PTR_DAT_057936b8;
        if (*(long *)(param_1 + 0xb0) != 0) {
                    /* try { // try from 02713ea4 to 02813eb3 has its CatchHandler @ 02713eb4 */
                    /* catch() { ... } // from try @ 02713e30 with catch @ 02713eb4
                       catch() { ... } // from try @ 02713ea4 with catch @ 02713eb4 */
                    /* try { // try from 02713eb8 to 02813ebb has its CatchHandler @ 02713ec4 */
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_a8,*(long *)(param_1 + 0xb0),*(undefined8 *)PTR_DAT_0579f3e8);
                    /* try { // try from 02713ebc to 02813ec7 has its CatchHandler @ 02713d48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02713eb8 with catch @ 02713ec4
                        */
          uStack_88 = uStack_a0;
          uStack_90 = uStack_a8;
          lStack_80 = lStack_98;
          while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_90,*(undefined8 *)puVar3), lVar12 = lStack_80,
                (uVar5 & 1) != 0) {
            if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            UnityEngine_SpriteRenderer__get_color_4095d44(lStack_80,0);
            UnityEngine_SpriteRenderer__set_color_4095de0(lVar12,0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_90,*(undefined8 *)puVar1);
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (lVar12 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0),
             lVar12 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar12,1,0);
            if ((*(long *)(param_1 + 0x50) != 0) &&
               (lVar12 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
               lVar12 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar12,param_4 == 1,0);
              if ((*(long *)(param_1 + 0x58) != 0) &&
                 (lVar12 = UnityEngine_Component__get_gameObject_408b480
                                     (*(long *)(param_1 + 0x58),0), lVar12 != 0)) {
                param_4 = param_4 + -1;
                UnityEngine_GameObject__SetActive_408e318(lVar12,param_4 != 0,0);
                Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__SetSorting_2615408
                          (param_1,param_2,param_3);
                plVar11 = *(long **)(param_1 + 0x18);
                if (plVar11 != (long *)0x0) {
                  lVar12 = *plVar11;
                  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar5 != 0) {
                    piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
                        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
                        goto LAB_02713fec;
                      }
                      uVar5 = uVar5 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_02713fec:
                  lVar12 = (*(code *)*puVar6)(plVar11,puVar6[1]);
                  if (cRam0000000005c230a9 == '\0') {
                    FUN_012d0dc8(PTR_DAT_05805c10);
                    cRam0000000005c230a9 = '\x01';
                  }
                  if (lVar12 != 0) {
                    /* try { // try from 02714024 to 02814077 has its CatchHandler @ 02714024
                       catch() { ... } // from try @ 02714024 with catch @ 02714024
                       catch() { ... } // from try @ 027140a8 with catch @ 02714024
                       catch() { ... } // from try @ 027140cc with catch @ 02714024
                       catch() { ... } // from try @ 02714108 with catch @ 02714024
                       catch() { ... } // from try @ 02714138 with catch @ 02714024
                       catch() { ... } // from try @ 027141ac with catch @ 02714024 */
                    lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
                    UnityEngine_Transform__set_localScale_40932d0
                              (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                               *(undefined4 *)(lVar7 + 0x14),lVar12,0);
                    lVar12 = *(long *)(param_1 + 0x40);
                    if (lVar12 != 0) {
                      iVar10 = 0;
                      while (iVar10 < *(int *)(lVar12 + 0x18)) {
                        lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                           (lVar12,iVar10,*(undefined8 *)puVar2);
                        if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) goto LAB_02714084;
                        UnityEngine_GameObject__SetActive_408e318
                                  (*(long *)(lVar12 + 0x10),param_4 == iVar10,0);
                    /* try { // try from 02714078 to 028140a7 has its CatchHandler @ 02714108 */
                        lVar12 = *(long *)(param_1 + 0x40);
                        iVar10 = iVar10 + 1;
                        if (lVar12 == 0) goto LAB_02714084;
                      }
                      *(undefined4 *)(param_1 + 0xbc) = param_5;
                      Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateLockCountText_2616144
                                (param_1);
                      if ((*(long *)(param_1 + 0x20) != 0) &&
                         (lVar12 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__GetSafeConfigsForSize_26138c4
                                             (*(long *)(param_1 + 0x20),param_4), lVar12 != 0)) {
                    /* try { // try from 027140a8 to 028140bf has its CatchHandler @ 02714024 */
                        lVar7 = *(long *)(param_1 + 0xa8);
                        fVar13 = *(float *)(lVar12 + 0x20);
                        if (cRam0000000005c230a9 == '\0') {
                    /* try { // try from 027140c0 to 028140cb has its CatchHandler @ 02714108 */
                          FUN_012d0dc8(PTR_DAT_05805c10);
                          cRam0000000005c230a9 = '\x01';
                        }
                    /* try { // try from 027140cc to 028140fb has its CatchHandler @ 02714024 */
                        if (lVar7 != 0) {
                          lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
                          UnityEngine_Transform__set_localScale_40932d0
                                    (fVar13 * *(float *)(lVar12 + 0xc),
                                     fVar13 * *(float *)(lVar12 + 0x10),
                                     fVar13 * *(float *)(lVar12 + 0x14),lVar7,0);
                    /* try { // try from 027140fc to 02814107 has its CatchHandler @ 02714108 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02714078 with catch @ 02714108
                       catch(type#1 @ 054cbd58) { ... } // from try @ 027140c0 with catch @ 02714108
                       catch(type#1 @ 054cbd58) { ... } // from try @ 027140fc with catch @ 02714108
                       try { // try from 02714108 to 0281411f has its CatchHandler @ 02714024 */
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02714084:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

