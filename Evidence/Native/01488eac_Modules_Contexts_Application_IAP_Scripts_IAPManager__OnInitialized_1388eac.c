/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$OnInitialized
void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnInitialized (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, UnityEngine_Purchasing_IStoreController_o* controller, UnityEngine_Purchasing_IExtensionProvider_o* extensions, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$OnInitialized
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnInitialized
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this,
   UnityEngine_Purchasing_IStoreController_o* controller,
   UnityEngine_Purchasing_IExtensionProvider_o* extensions, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnInitialized_1388eac
               (long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  
  if ((bRam0000000005c23070 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c1dc8);
    FUN_012d0dc8(PTR_DAT_057c8e40);
    FUN_012d0dc8(PTR_DAT_057d7c80);
    FUN_012d0dc8(PTR_DAT_057afd00);
    FUN_012d0dc8(PTR_DAT_057cef18);
    FUN_012d0dc8(PTR_DAT_057d1040);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057bb220);
    FUN_012d0dc8(PTR_DAT_05767cc8);
    FUN_012d0dc8(PTR_DAT_058183a8);
    FUN_012d0dc8(PTR_DAT_05796f48);
    FUN_012d0dc8(PTR_DAT_0579f158);
    FUN_012d0dc8(PTR_DAT_05786378);
    bRam0000000005c23070 = 1;
  }
  puVar2 = PTR_DAT_057d7c80;
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_Dictionary_object__object___Clear_3ed0438
              (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057c8e40);
    **(long **)(*(long *)puVar2 + 0xb8) = (long)param_2;
    FUN_012d0d74(*(undefined8 *)(*(long *)puVar2 + 0xb8),param_2);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *puVar5 = param_3;
    FUN_012d0d74(puVar5,param_3);
    if (param_2 != (long *)0x0) {
      lVar9 = *param_2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057cef18) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01489030;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(param_2,*(long *)PTR_DAT_057cef18,0);
LAB_01489030:
      lVar9 = (*(code *)*puVar5)(param_2,puVar5[1]);
      puVar4 = PTR_DAT_0579f158;
      puVar3 = PTR_DAT_05786378;
      puVar2 = PTR_DAT_05767cc8;
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar16 = 0;
          do {
            if (uVar1 <= uVar16) {
LAB_014893f8:
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef8();
            }
            lVar17 = *(long *)(lVar9 + (long)(int)uVar16 * 8 + 0x20);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057afd00);
            if (((lVar6 == 0) || (System_Object___ctor_23dfe5c(lVar6,0), lVar17 == 0)) ||
               (*(long *)(lVar17 + 0x10) == 0)) goto LAB_014893f4;
            plVar14 = (long *)(lVar6 + 0x10);
            *plVar14 = *(long *)(*(long *)(lVar17 + 0x10) + 0x10);
            FUN_012d0d74(plVar14);
            if (*(long *)(lVar17 + 0x18) == 0) goto LAB_014893f4;
            plVar13 = (long *)(lVar6 + 0x20);
            *plVar13 = *(long *)(*(long *)(lVar17 + 0x18) + 0x10);
            FUN_012d0d74(plVar13);
            if (*(long *)(lVar17 + 0x18) == 0) goto LAB_014893f4;
            plVar15 = (long *)(lVar6 + 0x28);
            *plVar15 = *(long *)(*(long *)(lVar17 + 0x18) + 0x18);
            FUN_012d0d74(plVar15);
            if (*(long *)(lVar17 + 0x18) == 0) goto LAB_014893f4;
            plVar12 = (long *)(lVar6 + 0x30);
            *plVar12 = *(long *)(*(long *)(lVar17 + 0x18) + 0x20);
            FUN_012d0d74(plVar12);
            if (*(long *)(lVar17 + 0x18) == 0) goto LAB_014893f4;
            *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(*(long *)(lVar17 + 0x18) + 0x28);
            FUN_012d0d74();
            lVar17 = *(long *)(lVar17 + 0x18);
            if (lVar17 == 0) goto LAB_014893f4;
            uVar8 = *(undefined8 *)(lVar17 + 0x30);
            *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(lVar17 + 0x38);
            *(undefined8 *)(lVar6 + 0x40) = uVar8;
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_014893f4;
            System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar6 + 0x10),lVar6,
                       *(undefined8 *)PTR_DAT_057c1dc8);
            plVar7 = (long *)FUN_012d0e38(*(undefined8 *)PTR_DAT_057bb220,8);
            if (plVar7 == (long *)0x0) goto LAB_014893f4;
            if (*(long *)PTR_DAT_05796f48 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = thunk_FUN_01320d5c(*(long *)PTR_DAT_05796f48,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar6 == 0) goto LAB_014893fc;
              lVar6 = *(long *)PTR_DAT_05796f48;
            }
            if ((int)plVar7[3] == 0) goto LAB_014893f8;
            plVar7[4] = lVar6;
            FUN_012d0d74(plVar7 + 4,lVar6);
            lVar6 = *plVar15;
            if ((lVar6 != 0) &&
               (lVar17 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar17 == 0)) {
LAB_014893fc:
              uVar8 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
              FUN_012d0eb8(uVar8,0);
            }
            if (*(uint *)(plVar7 + 3) < 2) goto LAB_014893f8;
            plVar7[5] = lVar6;
            FUN_012d0d74(plVar7 + 5,lVar6);
            lVar6 = *(long *)puVar3;
            if (lVar6 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar6 == 0) goto LAB_014893fc;
              lVar6 = *(long *)puVar3;
            }
            if (*(uint *)(plVar7 + 3) < 3) goto LAB_014893f8;
            plVar7[6] = lVar6;
            FUN_012d0d74(plVar7 + 6,lVar6);
            lVar6 = *plVar14;
            if ((lVar6 != 0) &&
               (lVar17 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar17 == 0))
            goto LAB_014893fc;
            if (*(uint *)(plVar7 + 3) < 4) goto LAB_014893f8;
            plVar7[7] = lVar6;
            FUN_012d0d74(plVar7 + 7,lVar6);
            lVar6 = *(long *)puVar2;
            if (lVar6 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar6 == 0) goto LAB_014893fc;
              lVar6 = *(long *)puVar2;
            }
            if (*(uint *)(plVar7 + 3) < 5) goto LAB_014893f8;
            plVar7[8] = lVar6;
            FUN_012d0d74(plVar7 + 8,lVar6);
            lVar6 = *plVar13;
            if ((lVar6 != 0) &&
               (lVar17 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar17 == 0))
            goto LAB_014893fc;
            if (*(uint *)(plVar7 + 3) < 6) goto LAB_014893f8;
            plVar7[9] = lVar6;
            FUN_012d0d74(plVar7 + 9,lVar6);
            lVar6 = *(long *)puVar4;
            if (lVar6 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar6 == 0) goto LAB_014893fc;
              lVar6 = *(long *)puVar4;
            }
            if (*(uint *)(plVar7 + 3) < 7) goto LAB_014893f8;
            plVar7[10] = lVar6;
            FUN_012d0d74(plVar7 + 10,lVar6);
            lVar6 = *plVar12;
            if ((lVar6 != 0) &&
               (lVar17 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar17 == 0))
            goto LAB_014893fc;
            if (*(uint *)(plVar7 + 3) < 8) goto LAB_014893f8;
            plVar7[0xb] = lVar6;
            FUN_012d0d74(plVar7 + 0xb,lVar6);
            System_String__Concat_1ed12a0(plVar7,0);
            uVar1 = *(uint *)(lVar9 + 0x18);
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)uVar1);
        }
        puVar2 = PTR_DAT_057d1040;
        if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        if (lVar9 != 0) {
          lVar6 = *(long *)(lVar9 + 0x20);
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
            ;
          }
          lVar6 = *(long *)(lVar9 + 0x10);
          if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),lVar9,0,*(undefined8 *)(lVar6 + 0x28));
            return;
          }
          return;
        }
      }
    }
  }
LAB_014893f4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

