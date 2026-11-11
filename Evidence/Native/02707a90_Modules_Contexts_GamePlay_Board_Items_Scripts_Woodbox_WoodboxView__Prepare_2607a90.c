/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t bottlesCount, int32_t woodboxKeyType, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t bottlesCount, int32_t
   woodboxKeyType, int32_t blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__Prepare_2607a90
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
  if ((bRam0000000005c2b9c3 & 1) == 0) {
                    /* try { // try from 02707ac8 to 02807b2b has its CatchHandler @ 02707c64 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057885c8);
    FUN_012d0dc8(PTR_DAT_057fc8c8);
    bRam0000000005c2b9c3 = 1;
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetVariant_26078a8
            (param_1,param_6);
  *(int *)(param_1 + 0x28) = param_5;
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar3 != 0)) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar3,0), lVar3 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x48);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      puVar1 = PTR_DAT_05805c10;
      if (lVar3 != 0) {
                    /* try { // try from 02707b60 to 02807b67 has its CatchHandler @ 02707c58 */
        lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                   *(undefined4 *)(lVar5 + 0x14),lVar3,0);
        if (*(long *)(param_1 + 0x30) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x48);
          if (cRam0000000005c230aa == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230aa = '\x01';
          }
                    /* try { // try from 02707bac to 02807bb3 has its CatchHandler @ 02707c5c */
                    /* try { // try from 02707bb4 to 02807c2f has its CatchHandler @ 0270796c */
          pfVar6 = *(float **)(*(long *)puVar1 + 0xb8);
          UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                    (*pfVar6 * _UNK_04339bec,pfVar6[1] * _UNK_04339bec,pfVar6[2] * _UNK_04339bec,0);
          if (lVar3 != 0) {
            UnityEngine_Transform__set_localRotation_4092f3c(lVar3,0);
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x48), lVar3 != 0)) {
              UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,lVar3,0);
              Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetSorting_2607ee0
                        (param_1,param_2,param_3);
              plVar11 = *(long **)(param_1 + 0x18);
              if (plVar11 != (long *)0x0) {
                lVar3 = *plVar11;
                    /* try { // try from 02707c30 to 02807c33 has its CatchHandler @ 02707c54 */
                uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
                    /* try { // try from 02707c34 to 02807c37 has its CatchHandler @ 02707c50 */
                    /* try { // try from 02707c38 to 02807c3b has its CatchHandler @ 02707c54 */
                if (uVar8 != 0) {
                    /* try { // try from 02707c3c to 02807c3f has its CatchHandler @ 0270796c */
                    /* try { // try from 02707c40 to 02807c43 has its CatchHandler @ 02707c4c */
                  piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    /* try { // try from 02707c44 to 02807c7f has its CatchHandler @ 0270796c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02707c40 with catch @ 02707c4c
                        */
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
                      puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
                      goto LAB_02707c7c;
                    }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02707c34 with catch @ 02707c50
                        */
                    uVar8 = uVar8 - 1;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02707c30 with catch @ 02707c54
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02707c38 with catch @ 02707c54
                        */
                    piVar9 = piVar9 + 4;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02707b60 with catch @ 02707c58
                        */
                  } while (uVar8 != 0);
                }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02707bac with catch @ 02707c5c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02707a88 with catch @ 02707c60
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02707ac8 with catch @ 02707c64
                        */
                puVar4 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_02707c7c:
                    /* try { // try from 02707c80 to 02807c83 has its CatchHandler @ 02707cfc */
                lVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
                if (cRam0000000005c230a9 == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230a9 = '\x01';
                }
                if (lVar3 != 0) {
                  lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 02707cc0 to 02807ce7 has its CatchHandler @ 02707d08 */
                  UnityEngine_Transform__set_localScale_40932d0
                            (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                             *(undefined4 *)(lVar5 + 0x14),lVar3,0);
                  puVar2 = PTR_DAT_057fc8c8;
                  lVar3 = *(long *)(param_1 + 0x30);
                  if (lVar3 != 0) {
                    iVar10 = 0;
                    param_4 = param_4 + -1;
LAB_02707ce4:
                    lVar5 = *(long *)(lVar3 + 0x50);
                    /* try { // try from 02707ce8 to 02807cf3 has its CatchHandler @ 0270796c */
                    if (lVar5 != 0) {
                    /* try { // try from 02707cf4 to 02807cfb has its CatchHandler @ 02707d08 */
                      if (iVar10 < *(int *)(lVar5 + 0x18)) {
                    /* catch() { ... } // from try @ 02707c80 with catch @ 02707cfc */
                        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                                          (lVar5,iVar10,*(undefined8 *)puVar2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02707cc0 with catch @ 02707d08
                       catch(type#2 @ 00000000) { ... } // from try @ 02707cf4 with catch @ 02707d08
                        */
                        if (((lVar3 != 0) && (lVar5 = *(long *)(param_1 + 0x30), lVar5 != 0)) &&
                           (*(long *)(lVar3 + 0x10) != 0)) {
                          UnityEngine_Transform__set_localScale_40932d0
                                    (*(undefined4 *)(lVar5 + 0x80),*(undefined4 *)(lVar5 + 0x84),
                                     *(undefined4 *)(lVar5 + 0x88),*(long *)(lVar3 + 0x10),0);
                          lVar5 = *(long *)(param_1 + 0x30);
                          if ((lVar5 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
                            UnityEngine_Transform__set_localScale_40932d0
                                      (*(undefined4 *)(lVar5 + 0x80),*(undefined4 *)(lVar5 + 0x84),
                                       *(undefined4 *)(lVar5 + 0x88),*(long *)(lVar3 + 0x18),0);
                            if (*(long *)(lVar3 + 0x30) != 0) {
                              UnityEngine_GameObject__SetActive_408e318
                                        (*(long *)(lVar3 + 0x30),param_4 == iVar10,0);
                              if (*(long *)(lVar3 + 0x38) != 0) {
                                UnityEngine_GameObject__SetActive_408e318
                                          (*(long *)(lVar3 + 0x38),param_4 == iVar10,0);
                                if ((*(long *)(lVar3 + 0x20) != 0) &&
                                   (lVar5 = UnityEngine_Component__get_gameObject_408b480
                                                      (*(long *)(lVar3 + 0x20),0), lVar5 != 0)) {
                                  UnityEngine_GameObject__SetActive_408e318
                                            (lVar5,param_4 == iVar10,0);
                                  if ((*(long *)(lVar3 + 0x28) != 0) &&
                                     (lVar3 = UnityEngine_Component__get_gameObject_408b480
                                                        (*(long *)(lVar3 + 0x28),0), lVar3 != 0)) {
                                    UnityEngine_GameObject__SetActive_408e318
                                              (lVar3,param_4 == iVar10,0);
                                    if ((*(long *)(param_1 + 0x30) != 0) &&
                                       (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x60),
                                       lVar3 != 0)) {
                                      lVar3 = UnityEngine_Component__get_transform_408b444(lVar3,0);
                                      if (cRam0000000005c230aa == '\0') {
                                        FUN_012d0dc8(puVar1);
                                        cRam0000000005c230aa = '\x01';
                                      }
                                      if (lVar3 != 0) {
                                        puVar7 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                        UnityEngine_Transform__set_localPosition_4092ce0
                                                  (*puVar7,puVar7[1],puVar7[2],lVar3,0);
                                        if ((*(long *)(param_1 + 0x30) != 0) &&
                                           (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x68),
                                           lVar3 != 0)) {
                                          lVar3 = UnityEngine_Component__get_transform_408b444
                                                            (lVar3,0);
                                          if (cRam0000000005c230aa == '\0') {
                                            FUN_012d0dc8(puVar1);
                                            cRam0000000005c230aa = '\x01';
                                          }
                                          if (lVar3 != 0) goto code_r0x02707e48;
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
                      else if ((*(long *)(lVar3 + 0x60) != 0) &&
                              (lVar3 = UnityEngine_Component__get_gameObject_408b480
                                                 (*(long *)(lVar3 + 0x60),0), lVar3 != 0)) {
                        UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
                        if ((*(long *)(param_1 + 0x30) != 0) &&
                           ((lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x68), lVar3 != 0 &&
                            (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar3,0),
                            lVar3 != 0)))) {
                          UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
                          if ((bRam0000000005c2b9c4 & 1) == 0) {
                            FUN_012d0dc8(PTR_DAT_057f6840);
                            FUN_012d0dc8(PTR_DAT_057d8f98);
                            bRam0000000005c2b9c4 = 1;
                          }
                          lVar3 = *(long *)(param_1 + 0x30);
                          if (lVar3 == 0) goto LAB_02708098;
                          lVar5 = *(long *)(lVar3 + 0x40);
                          switch(param_5 + -1) {
                          case 0:
                            if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
                            puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xe0);
                            break;
                          case 1:
                            if (*(long *)(lVar3 + 0x28) != 0) {
                              puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xf0);
                              goto joined_r0x02707fec;
                            }
                            goto LAB_02708098;
                          case 2:
                            if (*(long *)(lVar3 + 0x28) != 0) {
                              puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xd8);
joined_r0x02707fec:
                              if (lVar5 != 0) goto LAB_0270802c;
                            }
                            goto LAB_02708098;
                          case 3:
                            if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
                            puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xd0);
                            break;
                          case 4:
                            if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
                            puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xf8);
                            break;
                          case 5:
                            if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
                            puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xe8);
                            break;
                          default:
                            if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
                            puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xa8);
                          }
                          if (lVar5 == 0) goto LAB_02708098;
LAB_0270802c:
                          UnityEngine_U2D_Animation_SpriteLibrary__set_spriteLibraryAsset_1e38a88
                                    (lVar5,*puVar4,0);
                          puVar1 = PTR_DAT_057d8f98;
                          lVar3 = *(long *)(param_1 + 0x30);
                          if (lVar3 == 0) goto LAB_02708098;
                          iVar10 = 0;
                          goto LAB_0270804c;
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
LAB_02707edc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_0270804c:
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 == 0) {
LAB_02708098:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(int *)(lVar3 + 0x18) <= iVar10) {
    return;
  }
  lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                    (lVar3,iVar10,*(undefined8 *)puVar1);
  if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar3,0), lVar3 == 0))
  goto LAB_02708098;
  UnityEngine_GameObject__SetActive_408e318(lVar3,param_5 + -1 == iVar10,0);
  lVar3 = *(long *)(param_1 + 0x30);
  iVar10 = iVar10 + 1;
  if (lVar3 == 0) goto LAB_02708098;
  goto LAB_0270804c;
code_r0x02707e48:
  puVar7 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  UnityEngine_Transform__set_localPosition_4092ce0(*puVar7,puVar7[1],puVar7[2],lVar3,0);
  lVar3 = *(long *)(param_1 + 0x30);
  iVar10 = iVar10 + 1;
  if (lVar3 == 0) goto LAB_02707edc;
  goto LAB_02707ce4;
}

