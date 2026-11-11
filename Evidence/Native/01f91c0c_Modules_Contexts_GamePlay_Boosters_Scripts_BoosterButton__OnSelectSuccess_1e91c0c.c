/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterButton$$OnSelectSuccess
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton__OnSelectSuccess (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterButton$$OnSelectSuccess
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton__OnSelectSuccess
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton__OnSelectSuccess_1e91c0c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c28139 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d808);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    bRam0000000005c28139 = 1;
  }
  puVar3 = PTR_DAT_057ec790;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar8 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
              (lVar8,4,*(undefined8 *)PTR_DAT_057871c8);
    lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
    if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) &&
       (plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar8,*(undefined8 *)PTR_DAT_057e8f70), plVar9 != (long *)0x0))
    {
      lVar8 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0581aae8) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar15 + 10) * 0x10 + 0x138);
            goto LAB_01f91d50;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0581aae8,10);
LAB_01f91d50:
      lVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
        uVar14 = Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__TryUseBooster_1e91dc8
                           (*(long *)(lVar8 + 0x18),*(undefined4 *)(param_1 + 0x30));
        if ((uVar14 & 1) == 0) {
          return;
        }
        Modules_Contexts_GamePlay_Boosters_Scripts_BoosterButton__UpdateView_1e91854(param_1);
        lVar8 = **(long **)(*(long *)puVar2 + 0xb8);
        if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) &&
           (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar8,*(undefined8 *)PTR_DAT_0576d808), lVar8 != 0)) {
          if ((bRam0000000005c38182 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057e9e10,0);
            FUN_012d0dc8(PTR_DAT_0581a9b0);
            bRam0000000005c38182 = 1;
          }
          if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar14 = Modules_Contexts_Application_Ads_Scripts_AdService__get_IsMaxIsInitialized_1b5e4a4
                             (*(long *)(lVar8 + 0x10),0);
          puVar2 = PTR_DAT_0581a9b0;
          if ((uVar14 & 1) == 0) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_057e9e10 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          puVar3 = PTR_DAT_057e9e10;
          lVar8 = *(long *)puVar2;
          if ((bRam0000000005c23a28 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057e9e10,0,0);
            FUN_012d0dc8(PTR_DAT_0580bde0);
            FUN_012d0dc8(PTR_DAT_05774e68);
            bRam0000000005c23a28 = 1;
          }
          puVar2 = PTR_DAT_0580bde0;
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar6 = *(long *)puVar3;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          plVar9 = (long *)FUN_012d0e38(*(undefined8 *)puVar2,2);
          if (plVar9 == (long *)0x0) {
LAB_015d6ba0:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if ((lVar8 != 0) &&
             (lVar7 = thunk_FUN_01320d5c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
LAB_015d6ba4:
            uVar12 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
            FUN_012d0eb8(uVar12,0);
          }
          if ((int)plVar9[3] != 0) {
            plVar9[4] = lVar8;
            FUN_012d0d74(plVar9 + 4,lVar8);
            lVar8 = AppLovinMax_ThirdParty_MiniJson_Json_Serializer__Serialize_14e38f0(0,0);
            if ((lVar8 != 0) &&
               (lVar7 = thunk_FUN_01320d5c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
            goto LAB_015d6ba4;
            if (1 < *(uint *)(plVar9 + 3)) {
              plVar9[5] = lVar8;
              FUN_012d0d74(plVar9 + 5,lVar8);
              if (lVar6 != 0) {
                uVar12 = *(undefined8 *)PTR_DAT_05774e68;
                if ((bRam0000000005c38ac5 & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_0580bde0,uVar12,plVar9,0);
                  bRam0000000005c38ac5 = 1;
                }
                if (plVar9 == (long *)0x0) {
                  plVar9 = (long *)FUN_012d0e38(*(undefined8 *)PTR_DAT_0580bde0,1);
                }
                if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18);
                uVar11 = UnityEngine__AndroidJNIHelper__GetSignature_3f9b460(plVar9);
                uVar12 = UnityEngine__AndroidJNIHelper__GetMethodID_3f9b830(uVar16,uVar12,uVar11,1);
                lVar8 = UnityEngine__AndroidJNIHelper__CreateJNIArgArray_3f99394(plVar9);
                if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                UnityEngine_AndroidJNISafe__CallStaticVoidMethod_3f97a6c
                          (*(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18),uVar12,lVar8);
                if ((bRam0000000005c38ada & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_05763f10);
                  FUN_012d0dc8(PTR_DAT_057fab28);
                  FUN_012d0dc8(PTR_DAT_05773c40);
                  FUN_012d0dc8(PTR_DAT_057c9ca0);
                  bRam0000000005c38ada = 1;
                }
                puVar5 = PTR_DAT_057fab28;
                puVar4 = PTR_DAT_057c9ca0;
                puVar3 = PTR_DAT_05773c40;
                puVar2 = PTR_DAT_05763f10;
                if (plVar9 != (long *)0x0) {
                  if (0 < (int)plVar9[3]) {
                    uVar14 = 0;
                    uVar13 = plVar9[3] & 0xffffffff;
                    do {
                      if (uVar13 <= uVar14) goto LAB_0409ada0;
                      if ((long *)plVar9[uVar14 + 4] != (long *)0x0) {
                        lVar6 = *(long *)plVar9[uVar14 + 4];
                        if ((lVar6 != *(long *)puVar4) && (lVar6 != *(long *)puVar5)) {
                          bVar1 = *(byte *)(*(long *)puVar2 + 300);
                          if ((*(byte *)(lVar6 + 300) < bVar1) ||
                             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                              *(long *)puVar2)) {
                            bVar1 = *(byte *)(*(long *)puVar3 + 300);
                            if ((*(byte *)(lVar6 + 300) < bVar1) ||
                               (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                                *(long *)puVar3)) goto LAB_0409ad78;
                          }
                        }
                        if (lVar8 == 0) goto LAB_0409ada4;
                        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
LAB_0409ada0:
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef8();
                        }
                        UnityEngine_AndroidJNISafe__DeleteLocalRef_3f97674
                                  (*(undefined8 *)(lVar8 + 0x20 + uVar14 * 8));
                      }
LAB_0409ad78:
                      uVar13 = (ulong)*(uint *)(plVar9 + 3);
                      uVar14 = uVar14 + 1;
                    } while ((long)uVar14 < (long)(int)*(uint *)(plVar9 + 3));
                  }
                  return;
                }
LAB_0409ada4:
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              goto LAB_015d6ba0;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

