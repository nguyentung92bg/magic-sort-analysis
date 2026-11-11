/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$Initialize
void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__Initialize (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$Initialize
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__Initialize
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__Initialize_2301760
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
  if ((bRam0000000005c2a617 & 1) == 0) {
                    /* try { // try from 0240179c to 025018c3 has its CatchHandler @ 0240179c
                       catch() { ... } // from try @ 0240179c with catch @ 0240179c
                       catch() { ... } // from try @ 024019ac with catch @ 0240179c
                       catch() { ... } // from try @ 02401a90 with catch @ 0240179c
                       catch() { ... } // from try @ 02401a98 with catch @ 0240179c
                       catch() { ... } // from try @ 02401b34 with catch @ 0240179c */
    FUN_012d0dc8(PTR_DAT_057c9560);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057b8198);
    FUN_012d0dc8(PTR_DAT_057efe88);
    FUN_012d0dc8(PTR_DAT_057fb540);
    FUN_012d0dc8(PTR_DAT_057d4f38);
    FUN_012d0dc8(PTR_DAT_05791f70);
    FUN_012d0dc8(PTR_DAT_0575bf28);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05812088);
    FUN_012d0dc8(PTR_DAT_057e9060);
    FUN_012d0dc8(PTR_DAT_05808c98);
    FUN_012d0dc8(PTR_DAT_0575cbc8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057d67c8);
    FUN_012d0dc8(PTR_DAT_057c1300);
    FUN_012d0dc8(PTR_DAT_0576e8e8);
    bRam0000000005c2a617 = 1;
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
                    /* try { // try from 024018c4 to 025018eb has its CatchHandler @ 02401ab0 */
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
                    /* try { // try from 02401904 to 02501967 has its CatchHandler @ 02401ab4 */
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
              goto LAB_0240197c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_0575a2d8,1);
LAB_0240197c:
        (*(code *)*puVar6)(uVar18,uVar17,uVar16,plVar13,puVar6[1]);
        puVar1 = PTR_DAT_057fb540;
        if (*plVar12 != 0) {
                    /* try { // try from 024019a4 to 025019ab has its CatchHandler @ 02401aac */
                    /* try { // try from 024019ac to 02501a83 has its CatchHandler @ 0240179c */
          UnityEngine_Object__set_name_40914ec(*plVar12,*(undefined8 *)PTR_DAT_0576e8e8,0);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            System_Collections_Generic_Dictionary_Int32Enum__object____ctor_36d0988
                      (lVar5,*(undefined8 *)PTR_DAT_057efe88);
            plVar13 = (long *)(param_1 + 0x18);
            *plVar13 = lVar5;
            FUN_012d0d74(plVar13,lVar5);
            puVar4 = PTR_DAT_057d67c8;
            puVar3 = PTR_DAT_057c1300;
            puVar2 = PTR_DAT_057b8198;
            puVar1 = PTR_DAT_05791f70;
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 != 0)) {
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_b8,lVar5,*(undefined8 *)PTR_DAT_05808c98);
              uStack_98 = uStack_b0;
              uStack_a0 = uStack_b8;
              lStack_90 = lStack_a8;
              while( true ) {
                uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_a0,*(undefined8 *)puVar1);
                lVar5 = lStack_90;
                if ((uVar9 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_a0,*(undefined8 *)PTR_DAT_057d4f38);
                    /* try { // try from 02401b0c to 02501b33 has its CatchHandler @ 02401b54 */
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
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057e9060);
                if (lVar7 == 0) break;
                    /* try { // try from 02401a84 to 02501a87 has its CatchHandler @ 02401aa4 */
                    /* try { // try from 02401a88 to 02501a8f has its CatchHandler @ 02401aa8 */
                    /* try { // try from 02401a90 to 02501a93 has its CatchHandler @ 0240179c */
                    /* try { // try from 02401a94 to 02501a97 has its CatchHandler @ 02401aa0 */
                Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemGenerator___ctor_2301bc4
                          (lVar7,uVar16,uVar11,uVar15);
                    /* try { // try from 02401a98 to 02501acb has its CatchHandler @ 0240179c */
                lVar14 = *plVar13;
                uVar16 = *(undefined4 *)(lVar5 + 0x10);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02401a94 with catch @ 02401aa0
                        */
                uVar17 = *(undefined4 *)(lVar5 + 0x20);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02401a84 with catch @ 02401aa4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02401a88 with catch @ 02401aa8
                        */
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 024019a4 with catch @ 02401aac
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 024018c4 with catch @ 02401ab0
                        */
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02401904 with catch @ 02401ab4
                        */
                Modules_Infrastructure_Common_Scripts_Pool_Pool_object____ctor_30f955c
                          (lVar5,lVar7,uVar17,*(undefined8 *)puVar4);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                    /* try { // try from 02401acc to 02501acf has its CatchHandler @ 02401b48 */
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
                    /* try { // try from 02401b34 to 02501b3f has its CatchHandler @ 0240179c */
  FUN_012d0ef0();
}

