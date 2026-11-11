/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ItemModelConverter$$WriteJson
void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter__WriteJson (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter_o* __this, Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o* serializer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ItemModelConverter$$WriteJson
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter__WriteJson
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter_o* __this,
   Newtonsoft_Json_JsonWriter_o* writer, Il2CppObject* value, Newtonsoft_Json_JsonSerializer_o*
   serializer, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ItemModelConverter__WriteJson_2305320
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 uStack_54;
  
                    /* try { // try from 02405338 to 0250538f has its CatchHandler @ 02405338
                       catch() { ... } // from try @ 02405338 with catch @ 02405338
                       catch() { ... } // from try @ 02405408 with catch @ 02405338
                       catch() { ... } // from try @ 02405438 with catch @ 02405338
                       catch() { ... } // from try @ 024054ac with catch @ 02405338 */
  if ((bRam0000000005c2a63f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581a568);
    FUN_012d0dc8(PTR_DAT_05794e88);
    FUN_012d0dc8(PTR_DAT_05782bc8);
    FUN_012d0dc8(PTR_DAT_057e31f0);
    FUN_012d0dc8(PTR_DAT_05765d58);
                    /* try { // try from 02405390 to 02505407 has its CatchHandler @ 02405408 */
    FUN_012d0dc8(PTR_DAT_05815940);
    FUN_012d0dc8(PTR_DAT_05760650);
    FUN_012d0dc8(PTR_DAT_0575b850);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578b8f8);
    FUN_012d0dc8(PTR_DAT_0581aec8);
    FUN_012d0dc8(PTR_DAT_0577c730);
    FUN_012d0dc8(PTR_DAT_057fe6c8);
    FUN_012d0dc8(PTR_DAT_057fd358);
    FUN_012d0dc8(PTR_DAT_057a49d0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02405390 with catch @ 02405408
                       try { // try from 02405408 to 0250541f has its CatchHandler @ 02405338 */
    FUN_012d0dc8(PTR_DAT_0577ef80);
    FUN_012d0dc8(PTR_DAT_05781708);
                    /* try { // try from 02405420 to 02505437 has its CatchHandler @ 024054a4 */
    FUN_012d0dc8(PTR_DAT_057767b8);
    FUN_012d0dc8(PTR_DAT_057a26e8);
                    /* try { // try from 02405438 to 02505493 has its CatchHandler @ 02405338 */
    FUN_012d0dc8(PTR_DAT_057c3818);
    FUN_012d0dc8(PTR_DAT_0578fd98);
    FUN_012d0dc8(PTR_DAT_057a50a0);
    FUN_012d0dc8(PTR_DAT_0580b248);
    FUN_012d0dc8(PTR_DAT_057f2738);
    FUN_012d0dc8(PTR_DAT_057f1de8);
    FUN_012d0dc8(PTR_DAT_057a9928);
    FUN_012d0dc8(PTR_DAT_057b8110);
                    /* try { // try from 02405494 to 025054a3 has its CatchHandler @ 024054a4 */
    FUN_012d0dc8(PTR_DAT_057f9a00);
                    /* catch() { ... } // from try @ 02405420 with catch @ 024054a4
                       catch() { ... } // from try @ 02405494 with catch @ 024054a4 */
                    /* try { // try from 024054a8 to 025054ab has its CatchHandler @ 024054b4 */
    FUN_012d0dc8(PTR_DAT_0577ea10);
                    /* try { // try from 024054ac to 025054b7 has its CatchHandler @ 02405338 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024054a8 with catch @ 024054b4
                        */
    FUN_012d0dc8(PTR_DAT_057d2cc8);
    FUN_012d0dc8(PTR_DAT_05776c50);
    FUN_012d0dc8(PTR_DAT_057c1b30);
    FUN_012d0dc8(PTR_DAT_0577f980);
    FUN_012d0dc8(PTR_DAT_05771d48);
    FUN_012d0dc8(PTR_DAT_057b46d8);
    bRam0000000005c2a63f = 1;
  }
  if (param_3 == (long *)0x0) {
    return;
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_0578b8f8 + 300);
  if ((*(byte *)(*param_3 + 300) < bVar2) ||
     (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0578b8f8))
  goto LAB_02405ad8;
  plVar10 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0581aec8);
  puVar4 = PTR_DAT_0577f980;
  puVar3 = PTR_DAT_0577c730;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Newtonsoft_Json_Linq_JObject___ctor_15c1dcc(plVar10,0);
  uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                    ((int)param_3[2]);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  uVar11 = Newtonsoft_Json_Linq_JToken__op_Implicit_15d360c(uVar9,0);
  Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,*(undefined8 *)puVar4,uVar11,0);
  puVar8 = PTR_DAT_0580b248;
  puVar7 = PTR_DAT_057f2738;
  puVar6 = PTR_DAT_057d2cc8;
  puVar5 = PTR_DAT_057b8110;
  puVar4 = PTR_DAT_057a9928;
  puVar16 = (undefined8 *)PTR_DAT_05776c50;
  switch((int)param_3[2]) {
  case 2:
    plVar14 = (long *)PTR_DAT_057a26e8;
    goto code_r0x024057e0;
  case 3:
    plVar14 = (long *)PTR_DAT_057a49d0;
    goto code_r0x024057e0;
  case 4:
    bVar2 = *(byte *)(*(long *)PTR_DAT_05765d58 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05765d58))
    goto LAB_02405ad8;
    lVar12 = *(long *)puVar3;
    lVar15 = param_3[3];
    iVar1 = *(int *)(lVar12 + 0xe0);
    puVar16 = (undefined8 *)PTR_DAT_057f1de8;
    goto joined_r0x02405864;
  default:
    goto LAB_02405a5c;
  case 7:
    plVar14 = (long *)PTR_DAT_057767b8;
code_r0x024057e0:
    bVar2 = *(byte *)(*plVar14 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *plVar14)) {
LAB_02405ad8:
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_3);
    }
    uStack_54 = *(undefined4 *)((long)param_3 + 0x14);
    uVar11 = *(undefined8 *)PTR_DAT_057e31f0;
    puVar16 = (undefined8 *)PTR_DAT_057c1b30;
    break;
  case 8:
    bVar2 = *(byte *)(*(long *)PTR_DAT_0575b850 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0575b850))
    goto LAB_02405ad8;
    uStack_54 = *(undefined4 *)((long)param_3 + 0x14);
    uVar11 = *(undefined8 *)PTR_DAT_057db748;
    puVar16 = (undefined8 *)PTR_DAT_05771d48;
    break;
  case 9:
    bVar2 = *(byte *)(*(long *)PTR_DAT_05760650 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05760650))
    goto LAB_02405ad8;
    lVar12 = param_3[3];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    goto LAB_024059bc;
  case 10:
    plVar14 = (long *)PTR_DAT_057c3818;
    goto code_r0x02405880;
  case 0xb:
    plVar14 = (long *)PTR_DAT_0578fd98;
code_r0x02405880:
    bVar2 = *(byte *)(*plVar14 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *plVar14))
    goto LAB_02405ad8;
    uStack_54 = *(undefined4 *)((long)param_3 + 0x14);
    uVar11 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057a50a0,&uStack_54);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar3);
    }
    uVar11 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar11,param_4,0);
    uVar13 = *(undefined8 *)puVar8;
    goto LAB_02405a4c;
  case 0xc:
    bVar2 = *(byte *)(*(long *)PTR_DAT_05782bc8 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05782bc8))
    goto LAB_02405ad8;
    uStack_54 = *(undefined4 *)((long)param_3 + 0x14);
    uVar11 = *(undefined8 *)PTR_DAT_057db748;
    puVar16 = (undefined8 *)PTR_DAT_057f9a00;
    break;
  case 0xd:
    bVar2 = *(byte *)(*(long *)PTR_DAT_0577ef80 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0577ef80))
    goto LAB_02405ad8;
    uStack_54 = *(undefined4 *)((long)param_3 + 0x14);
    uVar11 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_05781708,&uStack_54);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar3);
    }
    uVar11 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar11,param_4,0);
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,*(undefined8 *)puVar7,uVar11,0);
    uVar11 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(param_3[3],param_4,0);
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,*(undefined8 *)puVar4,uVar11,0);
    lVar12 = param_3[4];
    puVar16 = (undefined8 *)puVar6;
    goto LAB_024059bc;
  case 0x17:
    bVar2 = *(byte *)(*(long *)PTR_DAT_05794e88 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05794e88))
    goto LAB_02405ad8;
    uStack_54 = *(undefined4 *)((long)param_3 + 0x14);
    uVar11 = *(undefined8 *)PTR_DAT_057db748;
    puVar16 = (undefined8 *)PTR_DAT_057b46d8;
    break;
  case 0x18:
    bVar2 = *(byte *)(*(long *)PTR_DAT_05815940 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05815940))
    goto LAB_02405ad8;
    uStack_54 = *(undefined4 *)((long)param_3 + 0x14);
    uVar11 = *(undefined8 *)PTR_DAT_057db748;
    puVar16 = (undefined8 *)PTR_DAT_0577ea10;
    break;
  case 0x1b:
    bVar2 = *(byte *)(*(long *)PTR_DAT_057fe6c8 + 300);
    if ((*(byte *)(*param_3 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_057fe6c8))
    goto LAB_02405ad8;
    uStack_54 = *(undefined4 *)((long)param_3 + 0x14);
    uVar11 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057fd358,&uStack_54);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar3);
    }
    uVar11 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(uVar11,param_4,0);
    Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,*(undefined8 *)puVar5,uVar11,0);
    lVar12 = param_3[3];
LAB_024059bc:
    uVar11 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(lVar12,param_4,0);
    uVar13 = *puVar16;
    goto LAB_02405a4c;
  }
  lVar15 = thunk_FUN_01320a8c(uVar11,&uStack_54);
  lVar12 = *(long *)puVar3;
  iVar1 = *(int *)(lVar12 + 0xe0);
joined_r0x02405864:
  if (iVar1 == 0) {
    thunk_FUN_0130472c(lVar12);
  }
  uVar11 = Newtonsoft_Json_Linq_JToken__FromObject_15d4284(lVar15,param_4,0);
  uVar13 = *puVar16;
LAB_02405a4c:
  Newtonsoft_Json_Linq_JObject__set_Item_15c6118(plVar10,uVar13,uVar11,0);
LAB_02405a5c:
  lVar15 = *(long *)PTR_DAT_0581a568;
  lVar12 = **(long **)(lVar15 + 0x38);
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_0131942c();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar12 = **(long **)(lVar15 + 0x38);
  if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
    lVar12 = FUN_0131942c();
  }
  (**(code **)(*plVar10 + 0x2b8))
            (plVar10,param_2,**(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)(*plVar10 + 0x2c0));
  return;
}

