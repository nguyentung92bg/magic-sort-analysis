/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$Initialize
void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__Initialize (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$Initialize
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__Initialize
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__Initialize_2300a34
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2a60e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9560);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057e1098);
    FUN_012d0dc8(PTR_DAT_05794b00);
    FUN_012d0dc8(PTR_DAT_057f5c48);
    FUN_012d0dc8(PTR_DAT_0575f660);
    FUN_012d0dc8(PTR_DAT_057d6218);
    FUN_012d0dc8(PTR_DAT_05760b68);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05812088);
    FUN_012d0dc8(PTR_DAT_057d5220);
    FUN_012d0dc8(PTR_DAT_057b8490);
    FUN_012d0dc8(PTR_DAT_0575cbc8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057ee248);
    FUN_012d0dc8(PTR_DAT_057eb378);
    FUN_012d0dc8(PTR_DAT_05768fa0);
    bRam0000000005c2a60e = 1;
  }
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) &&
     (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057c9560), puVar1 = PTR_DAT_0575cbc8,
     lVar5 != 0)) {
    uVar11 = *(undefined8 *)(lVar5 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)PTR_DAT_0576c200);
    }
    lVar5 = UnityEngine_Object__Instantiate_object__2aac7c0(uVar11,*(undefined8 *)puVar1);
    plVar12 = (long *)(param_1 + 0x20);
    *plVar12 = lVar5;
    FUN_012d0d74(plVar12,lVar5);
    puVar1 = PTR_DAT_05812088;
    if (*plVar12 != 0) {
      plVar13 = *(long **)(*plVar12 + 0x18);
      lVar5 = *(long *)PTR_DAT_05812088;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar5 = *(long *)puVar1;
      }
      if (plVar13 != (long *)0x0) {
        puVar8 = *(undefined4 **)(lVar5 + 0xb8);
        lVar5 = *plVar13;
        uVar17 = puVar8[1];
        uVar16 = puVar8[2];
        uVar18 = *puVar8;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0575a2d8) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_02400c50;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_0575a2d8,1);
LAB_02400c50:
        (*(code *)*puVar6)(uVar18,uVar17,uVar16,plVar13,puVar6[1]);
        puVar1 = PTR_DAT_057f5c48;
        if (*plVar12 != 0) {
          UnityEngine_Object__set_name_40914ec(*plVar12,*(undefined8 *)PTR_DAT_05768fa0,0);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            System_Collections_Generic_Dictionary_Int32Enum__object____ctor_36d0988
                      (lVar5,*(undefined8 *)PTR_DAT_05794b00);
            plVar13 = (long *)(param_1 + 0x18);
            *plVar13 = lVar5;
            FUN_012d0d74(plVar13,lVar5);
            puVar4 = PTR_DAT_057ee248;
            puVar3 = PTR_DAT_057eb378;
            puVar2 = PTR_DAT_057e1098;
            puVar1 = PTR_DAT_057d6218;
                    /* try { // try from 02400cbc to 02500ce3 has its CatchHandler @ 02400e74 */
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 != 0)) {
                    /* try { // try from 02400cfc to 02500d5f has its CatchHandler @ 02400e78 */
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_b8,lVar5,*(undefined8 *)PTR_DAT_057b8490);
              uStack_98 = uStack_b0;
              uStack_a0 = uStack_b8;
              lStack_90 = lStack_a8;
              while( true ) {
                uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_a0,*(undefined8 *)puVar1);
                lVar5 = lStack_90;
                if ((uVar9 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_a0,*(undefined8 *)PTR_DAT_0575f660);
                  return;
                }
                if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                uVar15 = *(undefined8 *)(*plVar12 + 0x18);
                uVar16 = *(undefined4 *)(lStack_90 + 0x10);
                uVar11 = *(undefined8 *)(lStack_90 + 0x18);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057d5220);
                if (lVar7 == 0) break;
                Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartGenerator___ctor_2300e98
                          (lVar7,uVar16,uVar11,uVar15);
                lVar14 = *plVar13;
                uVar16 = *(undefined4 *)(lVar5 + 0x10);
                uVar17 = *(undefined4 *)(lVar5 + 0x20);
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                    /* try { // try from 02400d90 to 02500d9f has its CatchHandler @ 02400e70 */
                Modules_Infrastructure_Common_Scripts_Pool_Pool_object____ctor_30f955c
                          (lVar5,lVar7,uVar17,*(undefined8 *)puVar4);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                    /* try { // try from 02400da0 to 02500e5f has its CatchHandler @ 024009ac */
                System_Collections_Generic_Dictionary_Int32Enum__object___Add_36d1408
                          (lVar14,uVar16,lVar5,*(undefined8 *)puVar2);
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

